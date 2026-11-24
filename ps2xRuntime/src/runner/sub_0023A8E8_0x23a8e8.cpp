#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A8E8
// Address: 0x23a8e8 - 0x23a96c
void sub_0023A8E8_0x23a8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A8E8_0x23a8e8");
#endif

    switch (ctx->pc) {
        case 0x23a94cu: goto label_23a94c;
        case 0x23a960u: goto label_23a960;
        default: break;
    }

    ctx->pc = 0x23a8e8u;

    // 0x23a8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a8ec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A8ECu;
    {
        const bool branch_taken_0x23a8ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8ECu;
        // 0x23a8f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a8ec) {
            ctx->pc = 0x23A908u;
            goto label_23a908;
        }
    }
    ctx->pc = 0x23A8F4u;
    // 0x23a8f4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23a8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a8fc: 0x2484b278  addiu       $a0, $a0, -0x4D88
    ctx->pc = 0x23a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947448));
    // 0x23a900: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23A900u;
    ctx->pc = 0x23A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A900u;
    // 0x23a904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23A908u;
label_23a908:
    // 0x23a908: 0x28a2fff1  slti        $v0, $a1, -0xF
    ctx->pc = 0x23a908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967281) ? 1 : 0);
    // 0x23a90c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A90Cu;
    {
        const bool branch_taken_0x23a90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A90Cu;
        // 0x23a910: 0x28a20010  slti        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a90c) {
            ctx->pc = 0x23A920u;
            goto label_23a920;
        }
    }
    ctx->pc = 0x23A914u;
    // 0x23a914: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x23a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x23a918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23A918u;
    {
        const bool branch_taken_0x23a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A918u;
        // 0x23a91c: 0xa4820046  sh          $v0, 0x46($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a918) {
            ctx->pc = 0x23A930u;
            goto label_23a930;
        }
    }
    ctx->pc = 0x23A920u;
label_23a920:
    // 0x23a920: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A920u;
    {
        const bool branch_taken_0x23a920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a920) {
            ctx->pc = 0x23A924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A920u;
            // 0x23a924: 0xa4850046  sh          $a1, 0x46($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A930u;
            goto label_23a930;
        }
    }
    ctx->pc = 0x23A928u;
    // 0x23a928: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x23a928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23a92c: 0xa4820046  sh          $v0, 0x46($a0)
    ctx->pc = 0x23a92cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
label_23a930:
    // 0x23a930: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x23a934: 0x8c43ef78  lw          $v1, -0x1088($v0)
    ctx->pc = 0x23a934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BEF78u));
    // 0x23a938: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A938u;
    {
        const bool branch_taken_0x23a938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a938) {
            ctx->pc = 0x23A93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A938u;
            // 0x23a93c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A958u;
            goto label_23a958;
        }
    }
    ctx->pc = 0x23A940u;
    // 0x23a940: 0x84850046  lh          $a1, 0x46($a0)
    ctx->pc = 0x23a940u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x23a944: 0xc08d5a2  jal         func_235688
    ctx->pc = 0x23A944u;
    SET_GPR_U32(ctx, 31, 0x23A94Cu);
    ctx->pc = 0x23A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A944u;
    // 0x23a948: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235688u, 0x23A944u, 0x23A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A94Cu;
label_23a94c:
    // 0x23a94c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23A94Cu;
    {
        const bool branch_taken_0x23a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A94Cu;
        // 0x23a950: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a94c) {
            ctx->pc = 0x23A964u;
            goto label_23a964;
        }
    }
    ctx->pc = 0x23A954u;
    // 0x23a954: 0x0  nop
    ctx->pc = 0x23a954u;
    // NOP
label_23a958:
    // 0x23a958: 0xc08d5a2  jal         func_235688
    ctx->pc = 0x23A958u;
    SET_GPR_U32(ctx, 31, 0x23A960u);
    ctx->pc = 0x23A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A958u;
    // 0x23a95c: 0x2405ff80  addiu       $a1, $zero, -0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235688u, 0x23A958u, 0x23A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A960u;
label_23a960:
    // 0x23a960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a964:
    // 0x23a964: 0x3e00008  jr          $ra
    ctx->pc = 0x23A964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A964u;
        // 0x23a968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A96Cu;
}
