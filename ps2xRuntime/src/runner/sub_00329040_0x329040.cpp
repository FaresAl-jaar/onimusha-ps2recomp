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

// Function: sub_00329040
// Address: 0x329040 - 0x3290f4
void sub_00329040_0x329040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329040_0x329040");
#endif

    switch (ctx->pc) {
        case 0x329060u: goto label_329060;
        case 0x32907cu: goto label_32907c;
        case 0x3290bcu: goto label_3290bc;
        case 0x3290c4u: goto label_3290c4;
        case 0x3290e0u: goto label_3290e0;
        default: break;
    }

    ctx->pc = 0x329040u;

    // 0x329040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x329048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32904c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32904cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329054: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x329054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x329058: 0xc0e953c  jal         func_3A54F0
    ctx->pc = 0x329058u;
    SET_GPR_U32(ctx, 31, 0x329060u);
    ctx->pc = 0x32905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329058u;
    // 0x32905c: 0x24843340  addiu       $a0, $a0, 0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A54F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A54F0u, 0x329058u, 0x329060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329060u;
label_329060:
    // 0x329060: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329064: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x329064u;
    {
        const bool branch_taken_0x329064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x329064) {
            ctx->pc = 0x3290E0u;
            goto label_3290e0;
        }
    }
    ctx->pc = 0x32906Cu;
    // 0x32906c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x32906cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x329070: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x329070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x329074: 0xc05e390  jal         func_178E40
    ctx->pc = 0x329074u;
    SET_GPR_U32(ctx, 31, 0x32907Cu);
    ctx->pc = 0x329078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329074u;
    // 0x329078: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x329074u, 0x32907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32907Cu;
label_32907c:
    // 0x32907c: 0x6200014  bltz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32907Cu;
    {
        const bool branch_taken_0x32907c = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x329080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32907Cu;
        // 0x329080: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32907c) {
            ctx->pc = 0x3290D0u;
            goto label_3290d0;
        }
    }
    ctx->pc = 0x329084u;
    // 0x329084: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x329084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329088: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x329088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x32908c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329090: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x329090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x329094: 0xa0220e70  sb          $v0, 0xE70($at)
    ctx->pc = 0x329094u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B0E70u, _value); } while (0);
    // 0x329098: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x329098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x32909c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3290a0: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x3290a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3290a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3290a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3290a8: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3290a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3290ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3290acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3290b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3290b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3290b4: 0xc0d9040  jal         func_364100
    ctx->pc = 0x3290B4u;
    SET_GPR_U32(ctx, 31, 0x3290BCu);
    ctx->pc = 0x3290B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290B4u;
    // 0x3290b8: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364100u, 0x3290B4u, 0x3290BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290BCu;
label_3290bc:
    // 0x3290bc: 0xc0b34a0  jal         func_2CD280
    ctx->pc = 0x3290BCu;
    SET_GPR_U32(ctx, 31, 0x3290C4u);
    ctx->pc = 0x3290C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290BCu;
    // 0x3290c0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD280u, 0x3290BCu, 0x3290C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290C4u;
label_3290c4:
    // 0x3290c4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3290c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3290c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3290C8u;
    {
        const bool branch_taken_0x3290c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3290CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290C8u;
        // 0x3290cc: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290c8) {
            ctx->pc = 0x3290E0u;
            goto label_3290e0;
        }
    }
    ctx->pc = 0x3290D0u;
label_3290d0:
    // 0x3290d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3290d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3290d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3290d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290d8: 0xc0ca308  jal         func_328C20
    ctx->pc = 0x3290D8u;
    SET_GPR_U32(ctx, 31, 0x3290E0u);
    ctx->pc = 0x3290DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290D8u;
    // 0x3290dc: 0xaf828b64  sw          $v0, -0x749C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937444), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C20u, 0x3290D8u, 0x3290E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290E0u;
label_3290e0:
    // 0x3290e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3290e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3290e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3290e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3290e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3290e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3290ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3290ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3290F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290ECu;
        // 0x3290f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3290ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3290F4u;
}
