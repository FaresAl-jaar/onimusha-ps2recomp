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

// Function: sub_00226990
// Address: 0x226990 - 0x226a78
void sub_00226990_0x226990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226990_0x226990");
#endif

    switch (ctx->pc) {
        case 0x226a18u: goto label_226a18;
        case 0x226a44u: goto label_226a44;
        default: break;
    }

    ctx->pc = 0x226990u;

    // 0x226990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x226990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x226994: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x226994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226998: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x226998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x22699c: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x22699cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2269a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2269a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2269a4: 0x24540028  addiu       $s4, $v0, 0x28
    ctx->pc = 0x2269a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2269a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2269a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2269ac: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2269acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2269b0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2269b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2269b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2269b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2269b8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2269b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2269bc: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x2269bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2269c0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2269C0u;
    {
        const bool branch_taken_0x2269c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2269C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269C0u;
        // 0x2269c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269c0) {
            ctx->pc = 0x2269E8u;
            goto label_2269e8;
        }
    }
    ctx->pc = 0x2269C8u;
    // 0x2269c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2269c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2269cc: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2269ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x2269d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2269d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2269d4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2269d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2269d8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2269d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2269dc: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x2269dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x2269e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2269E0u;
    {
        const bool branch_taken_0x2269e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2269E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269E0u;
        // 0x2269e4: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269e0) {
            ctx->pc = 0x226A58u;
            goto label_226a58;
        }
    }
    ctx->pc = 0x2269E8u;
label_2269e8:
    // 0x2269e8: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x2269e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x2269ec: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2269ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2269f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2269f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2269f4: 0x261093b8  addiu       $s0, $s0, -0x6C48
    ctx->pc = 0x2269f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939576));
    // 0x2269f8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2269f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2269fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2269fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a00: 0x24a593b0  addiu       $a1, $a1, -0x6C50
    ctx->pc = 0x226a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939568));
    // 0x226a04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x226a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a08: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x226a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x226a0c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x226a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226a10: 0xc0948e4  jal         func_252390
    ctx->pc = 0x226A10u;
    SET_GPR_U32(ctx, 31, 0x226A18u);
    ctx->pc = 0x226A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A10u;
    // 0x226a14: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252390u, 0x226A10u, 0x226A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A18u;
label_226a18:
    // 0x226a18: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x226a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226a1c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x226a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x226a20: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x226a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x226a24: 0x24a593c0  addiu       $a1, $a1, -0x6C40
    ctx->pc = 0x226a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939584));
    // 0x226a28: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x226a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x226a2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x226a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a30: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x226a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x226a34: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x226a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a38: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x226a38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x226a3c: 0xc0948e4  jal         func_252390
    ctx->pc = 0x226A3Cu;
    SET_GPR_U32(ctx, 31, 0x226A44u);
    ctx->pc = 0x226A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A3Cu;
    // 0x226a40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252390u, 0x226A3Cu, 0x226A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A44u;
label_226a44:
    // 0x226a44: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x226a44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x226a48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226a4c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x226a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x226a50: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x226a50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x226a54: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x226a54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_226a58:
    // 0x226a58: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x226a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226a5c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x226a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226a60: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x226a60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226a64: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x226a64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226a68: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x226a68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226a6c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x226a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x226a70: 0x3e00008  jr          $ra
    ctx->pc = 0x226A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A70u;
        // 0x226a74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226A78u;
}
