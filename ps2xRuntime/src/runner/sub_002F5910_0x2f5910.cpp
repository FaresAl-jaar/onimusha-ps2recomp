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

// Function: sub_002F5910
// Address: 0x2f5910 - 0x2f59c4
void sub_002F5910_0x2f5910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5910_0x2f5910");
#endif

    switch (ctx->pc) {
        case 0x2f5920u: goto label_2f5920;
        case 0x2f596cu: goto label_2f596c;
        case 0x2f5988u: goto label_2f5988;
        case 0x2f599cu: goto label_2f599c;
        case 0x2f59b8u: goto label_2f59b8;
        default: break;
    }

    ctx->pc = 0x2f5910u;

    // 0x2f5910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f5910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f5914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f5914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f5918: 0xc0bd604  jal         func_2F5810
    ctx->pc = 0x2F5918u;
    SET_GPR_U32(ctx, 31, 0x2F5920u);
    ctx->pc = 0x2F5810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5810u, 0x2F5918u, 0x2F5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5920u;
label_2f5920:
    // 0x2f5920: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2f5920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5924: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f5924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f5928: 0x10c4001f  beq         $a2, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F5928u;
    {
        const bool branch_taken_0x2f5928 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5928u;
        // 0x2f592c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5928) {
            ctx->pc = 0x2F59A8u;
            goto label_2f59a8;
        }
    }
    ctx->pc = 0x2F5930u;
    // 0x2f5930: 0x10c3001d  beq         $a2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F5930u;
    {
        const bool branch_taken_0x2f5930 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5930u;
        // 0x2f5934: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5930) {
            ctx->pc = 0x2F59A8u;
            goto label_2f59a8;
        }
    }
    ctx->pc = 0x2F5938u;
    // 0x2f5938: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F5938u;
    {
        const bool branch_taken_0x2f5938 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f5938) {
            ctx->pc = 0x2F5990u;
            goto label_2f5990;
        }
    }
    ctx->pc = 0x2F5940u;
    // 0x2f5940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5944: 0x10c5000c  beq         $a2, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F5944u;
    {
        const bool branch_taken_0x2f5944 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f5944) {
            ctx->pc = 0x2F5978u;
            goto label_2f5978;
        }
    }
    ctx->pc = 0x2F594Cu;
    // 0x2f594c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F594Cu;
    {
        const bool branch_taken_0x2f594c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f594c) {
            ctx->pc = 0x2F5960u;
            goto label_2f5960;
        }
    }
    ctx->pc = 0x2F5954u;
    // 0x2f5954: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2F5954u;
    {
        const bool branch_taken_0x2f5954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5954) {
            ctx->pc = 0x2F59B8u;
            goto label_2f59b8;
        }
    }
    ctx->pc = 0x2F595Cu;
    // 0x2f595c: 0x0  nop
    ctx->pc = 0x2f595cu;
    // NOP
label_2f5960:
    // 0x2f5960: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x2f5960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x2f5964: 0xc07400c  jal         func_1D0030
    ctx->pc = 0x2F5964u;
    SET_GPR_U32(ctx, 31, 0x2F596Cu);
    ctx->pc = 0x2F5968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5964u;
    // 0x2f5968: 0x24849600  addiu       $a0, $a0, -0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0030u, 0x2F5964u, 0x2F596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F596Cu;
label_2f596c:
    // 0x2f596c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F596Cu;
    {
        const bool branch_taken_0x2f596c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f596c) {
            ctx->pc = 0x2F59B8u;
            goto label_2f59b8;
        }
    }
    ctx->pc = 0x2F5974u;
    // 0x2f5974: 0x0  nop
    ctx->pc = 0x2f5974u;
    // NOP
label_2f5978:
    // 0x2f5978: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f5978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f597c: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x2f597cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x2f5980: 0xc07400c  jal         func_1D0030
    ctx->pc = 0x2F5980u;
    SET_GPR_U32(ctx, 31, 0x2F5988u);
    ctx->pc = 0x2F5984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5980u;
    // 0x2f5984: 0x24849600  addiu       $a0, $a0, -0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0030u, 0x2F5980u, 0x2F5988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5988u;
label_2f5988:
    // 0x2f5988: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F5988u;
    {
        const bool branch_taken_0x2f5988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5988) {
            ctx->pc = 0x2F59B8u;
            goto label_2f59b8;
        }
    }
    ctx->pc = 0x2F5990u;
label_2f5990:
    // 0x2f5990: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x2f5990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x2f5994: 0xc07400c  jal         func_1D0030
    ctx->pc = 0x2F5994u;
    SET_GPR_U32(ctx, 31, 0x2F599Cu);
    ctx->pc = 0x2F5998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5994u;
    // 0x2f5998: 0x24849600  addiu       $a0, $a0, -0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0030u, 0x2F5994u, 0x2F599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F599Cu;
label_2f599c:
    // 0x2f599c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F599Cu;
    {
        const bool branch_taken_0x2f599c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f599c) {
            ctx->pc = 0x2F59B8u;
            goto label_2f59b8;
        }
    }
    ctx->pc = 0x2F59A4u;
    // 0x2f59a4: 0x0  nop
    ctx->pc = 0x2f59a4u;
    // NOP
label_2f59a8:
    // 0x2f59a8: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x2f59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x2f59ac: 0x24849600  addiu       $a0, $a0, -0x6A00
    ctx->pc = 0x2f59acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    // 0x2f59b0: 0xc07400c  jal         func_1D0030
    ctx->pc = 0x2F59B0u;
    SET_GPR_U32(ctx, 31, 0x2F59B8u);
    ctx->pc = 0x2F59B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59B0u;
    // 0x2f59b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0030u, 0x2F59B0u, 0x2F59B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59B8u;
label_2f59b8:
    // 0x2f59b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f59b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f59bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F59BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59BCu;
        // 0x2f59c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F59BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F59C4u;
}
