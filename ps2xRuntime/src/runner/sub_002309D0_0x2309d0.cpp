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

// Function: sub_002309D0
// Address: 0x2309d0 - 0x230a5c
void sub_002309D0_0x2309d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002309D0_0x2309d0");
#endif

    switch (ctx->pc) {
        case 0x230a28u: goto label_230a28;
        case 0x230a44u: goto label_230a44;
        default: break;
    }

    ctx->pc = 0x2309d0u;

    // 0x2309d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2309d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2309d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2309d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2309d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2309dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2309dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2309e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2309e4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2309E4u;
    {
        const bool branch_taken_0x2309e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2309E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309E4u;
        // 0x2309e8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309e4) {
            ctx->pc = 0x2309F8u;
            goto label_2309f8;
        }
    }
    ctx->pc = 0x2309ECu;
    // 0x2309ec: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2309ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2309f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2309F0u;
    {
        const bool branch_taken_0x2309f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309F0u;
        // 0x2309f4: 0x2484a610  addiu       $a0, $a0, -0x59F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309f0) {
            ctx->pc = 0x230A20u;
            goto label_230a20;
        }
    }
    ctx->pc = 0x2309F8u;
label_2309f8:
    // 0x2309f8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2309F8u;
    {
        const bool branch_taken_0x2309f8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2309f8) {
            ctx->pc = 0x230A10u;
            goto label_230a10;
        }
    }
    ctx->pc = 0x230A00u;
    // 0x230a00: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x230a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x230a04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x230A04u;
    {
        const bool branch_taken_0x230a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A04u;
        // 0x230a08: 0x2484a638  addiu       $a0, $a0, -0x59C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a04) {
            ctx->pc = 0x230A20u;
            goto label_230a20;
        }
    }
    ctx->pc = 0x230A0Cu;
    // 0x230a0c: 0x0  nop
    ctx->pc = 0x230a0cu;
    // NOP
label_230a10:
    // 0x230a10: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x230A10u;
    {
        const bool branch_taken_0x230a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230a10) {
            ctx->pc = 0x230A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230A10u;
            // 0x230a14: 0x82070001  lb          $a3, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230A30u;
            goto label_230a30;
        }
    }
    ctx->pc = 0x230A18u;
    // 0x230a18: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x230a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x230a1c: 0x2484a668  addiu       $a0, $a0, -0x5998
    ctx->pc = 0x230a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944360));
label_230a20:
    // 0x230a20: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x230A20u;
    SET_GPR_U32(ctx, 31, 0x230A28u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x230A20u, 0x230A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A28u;
label_230a28:
    // 0x230a28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x230A28u;
    {
        const bool branch_taken_0x230a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A28u;
        // 0x230a2c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a28) {
            ctx->pc = 0x230A4Cu;
            goto label_230a4c;
        }
    }
    ctx->pc = 0x230A30u;
label_230a30:
    // 0x230a30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230a34: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x230A34u;
    {
        const bool branch_taken_0x230a34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x230A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A34u;
        // 0x230a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a34) {
            ctx->pc = 0x230A4Cu;
            goto label_230a4c;
        }
    }
    ctx->pc = 0x230A3Cu;
    // 0x230a3c: 0xc08c21e  jal         func_230878
    ctx->pc = 0x230A3Cu;
    SET_GPR_U32(ctx, 31, 0x230A44u);
    ctx->pc = 0x230878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230878u, 0x230A3Cu, 0x230A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A44u;
label_230a44:
    // 0x230a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230a48: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x230a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_230a4c:
    // 0x230a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230a50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x230a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230a54: 0x3e00008  jr          $ra
    ctx->pc = 0x230A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A54u;
        // 0x230a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230A5Cu;
}
