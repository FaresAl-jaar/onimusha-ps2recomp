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

// Function: sub_0024D978
// Address: 0x24d978 - 0x24da20
void sub_0024D978_0x24d978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D978_0x24d978");
#endif

    switch (ctx->pc) {
        case 0x24da00u: goto label_24da00;
        default: break;
    }

    ctx->pc = 0x24d978u;

    // 0x24d978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d97c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d980: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24d980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d988: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24d988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d990: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24D990u;
    {
        const bool branch_taken_0x24d990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D990u;
        // 0x24d994: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d990) {
            ctx->pc = 0x24D9B8u;
            goto label_24d9b8;
        }
    }
    ctx->pc = 0x24D998u;
    // 0x24d998: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d99c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d9a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d9a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d9a4: 0x2484e3b0  addiu       $a0, $a0, -0x1C50
    ctx->pc = 0x24d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960048));
    // 0x24d9a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d9ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24d9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d9b0: 0x808baa4  j           func_22EA90
    ctx->pc = 0x24D9B0u;
    ctx->pc = 0x24D9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9B0u;
    // 0x24d9b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x24D9B8u;
label_24d9b8:
    // 0x24d9b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24d9bc: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x24d9bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x24d9c0: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x24d9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24d9c4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x24d9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d9c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D9C8u;
    {
        const bool branch_taken_0x24d9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9C8u;
        // 0x24d9cc: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9c8) {
            ctx->pc = 0x24D9D8u;
            goto label_24d9d8;
        }
    }
    ctx->pc = 0x24D9D0u;
    // 0x24d9d0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24D9D0u;
    {
        const bool branch_taken_0x24d9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d9d0) {
            ctx->pc = 0x24D9F8u;
            goto label_24d9f8;
        }
    }
    ctx->pc = 0x24D9D8u;
label_24d9d8:
    // 0x24d9d8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d9e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d9e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d9e4: 0x2484e3d8  addiu       $a0, $a0, -0x1C28
    ctx->pc = 0x24d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960088));
    // 0x24d9e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d9ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24d9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d9f0: 0x808baa4  j           func_22EA90
    ctx->pc = 0x24D9F0u;
    ctx->pc = 0x24D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9F0u;
    // 0x24d9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x24D9F8u;
label_24d9f8:
    // 0x24d9f8: 0xc093594  jal         func_24D650
    ctx->pc = 0x24D9F8u;
    SET_GPR_U32(ctx, 31, 0x24DA00u);
    ctx->pc = 0x24D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D650u, 0x24D9F8u, 0x24DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DA00u;
label_24da00:
    // 0x24da00: 0xae1100f0  sw          $s1, 0xF0($s0)
    ctx->pc = 0x24da00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
    // 0x24da04: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x24da04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x24da08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24da08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24da0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24da0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24da10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24da10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24da14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24da14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24da18: 0x3e00008  jr          $ra
    ctx->pc = 0x24DA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA18u;
        // 0x24da1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DA20u;
}
