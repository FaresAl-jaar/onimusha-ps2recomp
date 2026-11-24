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

// Function: sub_00270FD0
// Address: 0x270fd0 - 0x271084
void sub_00270FD0_0x270fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270FD0_0x270fd0");
#endif

    switch (ctx->pc) {
        case 0x271050u: goto label_271050;
        case 0x271060u: goto label_271060;
        default: break;
    }

    ctx->pc = 0x270fd0u;

    // 0x270fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x270fd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270fdc: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x270fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x270fe0: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x270fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x270fe4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270FE4u;
    {
        const bool branch_taken_0x270fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FE4u;
        // 0x270fe8: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fe4) {
            ctx->pc = 0x271000u;
            goto label_271000;
        }
    }
    ctx->pc = 0x270FECu;
    // 0x270fec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270ff0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x270ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x270ff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x270FF4u;
    {
        const bool branch_taken_0x270ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FF4u;
        // 0x270ff8: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ff4) {
            ctx->pc = 0x271018u;
            goto label_271018;
        }
    }
    ctx->pc = 0x270FFCu;
    // 0x270ffc: 0x0  nop
    ctx->pc = 0x270ffcu;
    // NOP
label_271000:
    // 0x271000: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x271000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x271004: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x271004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x271008: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x271008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27100c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x271010: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x271010u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    // 0x271014: 0x0  nop
    ctx->pc = 0x271014u;
    // NOP
label_271018:
    // 0x271018: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x271018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x27101c: 0x8c27ceb8  lw          $a3, -0x3148($at)
    ctx->pc = 0x27101cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x271020: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x271020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x271024: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x271024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x271028: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x271028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x27102c: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x27102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x271030: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x271030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x271034: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x271034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x271038: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x271038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x27103c: 0x34468888  ori         $a2, $v0, 0x8888
    ctx->pc = 0x27103cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34952);
    // 0x271040: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x271040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x271044: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x271044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x271048: 0xc05ea18  jal         func_17A860
    ctx->pc = 0x271048u;
    SET_GPR_U32(ctx, 31, 0x271050u);
    ctx->pc = 0x27104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271048u;
    // 0x27104c: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x271048u, 0x271050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271050u;
label_271050:
    // 0x271050: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x271050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271058: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x271058u;
    SET_GPR_U32(ctx, 31, 0x271060u);
    ctx->pc = 0x27105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271058u;
    // 0x27105c: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x271058u, 0x271060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271060u;
label_271060:
    // 0x271060: 0x8f838894  lw          $v1, -0x776C($gp)
    ctx->pc = 0x271060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936724)));
    // 0x271064: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x271064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271068: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x271068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x27106c: 0xa024e000  sb          $a0, -0x2000($at)
    ctx->pc = 0x27106cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x271070: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x271070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x271074: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x271074u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x271078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27107c: 0x3e00008  jr          $ra
    ctx->pc = 0x27107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27107Cu;
        // 0x271080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27107Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271084u;
}
