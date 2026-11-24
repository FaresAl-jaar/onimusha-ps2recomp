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

// Function: sub_001126C8
// Address: 0x1126c8 - 0x112744
void sub_001126C8_0x1126c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001126C8_0x1126c8");
#endif

    switch (ctx->pc) {
        case 0x1126e4u: goto label_1126e4;
        case 0x1126ecu: goto label_1126ec;
        case 0x112708u: goto label_112708;
        case 0x11272cu: goto label_11272c;
        default: break;
    }

    ctx->pc = 0x1126c8u;

    // 0x1126c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1126c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1126cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1126ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1126d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1126d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1126d4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1126d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1126d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1126d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1126dc: 0xc044996  jal         func_112658
    ctx->pc = 0x1126DCu;
    SET_GPR_U32(ctx, 31, 0x1126E4u);
    ctx->pc = 0x1126E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126DCu;
    // 0x1126e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112658u, 0x1126DCu, 0x1126E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126E4u;
label_1126e4:
    // 0x1126e4: 0xc043808  jal         func_10E020
    ctx->pc = 0x1126E4u;
    SET_GPR_U32(ctx, 31, 0x1126ECu);
    ctx->pc = 0x1126E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126E4u;
    // 0x1126e8: 0x8e242b48  lw          $a0, 0x2B48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x1126E4u, 0x1126ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126ECu;
label_1126ec:
    // 0x1126ec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1126ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1126f0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1126f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1126f4: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x1126f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x1126f8: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1126f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1126fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1126FCu;
    {
        const bool branch_taken_0x1126fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126FCu;
        // 0x112700: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126fc) {
            ctx->pc = 0x112724u;
            goto label_112724;
        }
    }
    ctx->pc = 0x112704u;
    // 0x112704: 0x0  nop
    ctx->pc = 0x112704u;
    // NOP
label_112708:
    // 0x112708: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x112708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11270c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x11270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x112710: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x112710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x112714: 0x64800b  movn        $s0, $v1, $a0
    ctx->pc = 0x112714u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x112718: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x112718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11271c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11271Cu;
    {
        const bool branch_taken_0x11271c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11271c) {
            ctx->pc = 0x112708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112708;
        }
    }
    ctx->pc = 0x112724u;
label_112724:
    // 0x112724: 0xc043800  jal         func_10E000
    ctx->pc = 0x112724u;
    SET_GPR_U32(ctx, 31, 0x11272Cu);
    ctx->pc = 0x112728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112724u;
    // 0x112728: 0x8e242b48  lw          $a0, 0x2B48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x112724u, 0x11272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11272Cu;
label_11272c:
    // 0x11272c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11272cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x112730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112734: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11273c: 0x3e00008  jr          $ra
    ctx->pc = 0x11273Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11273Cu;
        // 0x112740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11273Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112744u;
}
