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

// Function: sub_001372B8
// Address: 0x1372b8 - 0x137324
void sub_001372B8_0x1372b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001372B8_0x1372b8");
#endif

    switch (ctx->pc) {
        case 0x1372fcu: goto label_1372fc;
        case 0x137310u: goto label_137310;
        default: break;
    }

    ctx->pc = 0x1372b8u;

    // 0x1372b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1372b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1372bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1372bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1372c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1372c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1372c4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1372c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1372c8: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1372c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1372cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1372ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1372d0: 0x26074340  addiu       $a3, $s0, 0x4340
    ctx->pc = 0x1372d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 17216));
    // 0x1372d4: 0x34a51304  ori         $a1, $a1, 0x1304
    ctx->pc = 0x1372d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4868);
    // 0x1372d8: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x1372d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B4344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4344u, _value); } while (0);
    // 0x1372dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1372dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372e0: 0x24444248  addiu       $a0, $v0, 0x4248
    ctx->pc = 0x1372e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16968));
    // 0x1372e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1372e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1372e8: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x1372e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1372ec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1372ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1372f0: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x1372f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1372f4: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x1372F4u;
    SET_GPR_U32(ctx, 31, 0x1372FCu);
    ctx->pc = 0x1372F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1372F4u;
    // 0x1372f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x1372F4u, 0x1372FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1372FCu;
label_1372fc:
    // 0x1372fc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1372FCu;
    {
        const bool branch_taken_0x1372fc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x137300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372FCu;
        // 0x137300: 0x8e024340  lw          $v0, 0x4340($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372fc) {
            ctx->pc = 0x137314u;
            goto label_137314;
        }
    }
    ctx->pc = 0x137304u;
    // 0x137304: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137308: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137308u;
    SET_GPR_U32(ctx, 31, 0x137310u);
    ctx->pc = 0x13730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137308u;
    // 0x13730c: 0x248446e0  addiu       $a0, $a0, 0x46E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137308u, 0x137310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137310u;
label_137310:
    // 0x137310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137314:
    // 0x137314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137318: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13731c: 0x3e00008  jr          $ra
    ctx->pc = 0x13731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13731Cu;
        // 0x137320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13731Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137324u;
}
