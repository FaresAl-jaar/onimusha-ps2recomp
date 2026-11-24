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

// Function: sub_0038B250
// Address: 0x38b250 - 0x38b318
void sub_0038B250_0x38b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B250_0x38b250");
#endif

    switch (ctx->pc) {
        case 0x38b2a0u: goto label_38b2a0;
        case 0x38b2acu: goto label_38b2ac;
        case 0x38b2bcu: goto label_38b2bc;
        case 0x38b2d8u: goto label_38b2d8;
        case 0x38b2f8u: goto label_38b2f8;
        default: break;
    }

    ctx->pc = 0x38b250u;

    // 0x38b250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38b254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38b258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38b258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38b25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38b25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38b260: 0x90850118  lbu         $a1, 0x118($a0)
    ctx->pc = 0x38b260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x38b264: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x38B264u;
    {
        const bool branch_taken_0x38b264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B264u;
        // 0x38b268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b264) {
            ctx->pc = 0x38B2F0u;
            goto label_38b2f0;
        }
    }
    ctx->pc = 0x38B26Cu;
    // 0x38b26c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b270: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x38B270u;
    {
        const bool branch_taken_0x38b270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38b270) {
            ctx->pc = 0x38B2D0u;
            goto label_38b2d0;
        }
    }
    ctx->pc = 0x38B278u;
    // 0x38b278: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B278u;
    {
        const bool branch_taken_0x38b278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b278) {
            ctx->pc = 0x38B288u;
            goto label_38b288;
        }
    }
    ctx->pc = 0x38B280u;
    // 0x38b280: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x38B280u;
    {
        const bool branch_taken_0x38b280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b280) {
            ctx->pc = 0x38B308u;
            goto label_38b308;
        }
    }
    ctx->pc = 0x38B288u;
label_38b288:
    // 0x38b288: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x38b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x38b28c: 0x2442c760  addiu       $v0, $v0, -0x38A0
    ctx->pc = 0x38b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952800));
    // 0x38b290: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38b290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38b294: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38b294u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65C760u));
    // 0x38b298: 0xc0e2e4c  jal         func_38B930
    ctx->pc = 0x38B298u;
    SET_GPR_U32(ctx, 31, 0x38B2A0u);
    ctx->pc = 0x38B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B298u;
    // 0x38b29c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B930u, 0x38B298u, 0x38B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B2A0u;
label_38b2a0:
    // 0x38b2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38b2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b2a4: 0xc0e2df4  jal         func_38B7D0
    ctx->pc = 0x38B2A4u;
    SET_GPR_U32(ctx, 31, 0x38B2ACu);
    ctx->pc = 0x38B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B2A4u;
    // 0x38b2a8: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B7D0u, 0x38B2A4u, 0x38B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B2ACu;
label_38b2ac:
    // 0x38b2ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x38b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x38b2b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38b2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38b2b4: 0xc0e2d3c  jal         func_38B4F0
    ctx->pc = 0x38B2B4u;
    SET_GPR_U32(ctx, 31, 0x38B2BCu);
    ctx->pc = 0x38B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B2B4u;
    // 0x38b2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B4F0u, 0x38B2B4u, 0x38B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B2BCu;
label_38b2bc:
    // 0x38b2bc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x38B2BCu;
    {
        const bool branch_taken_0x38b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2BCu;
        // 0x38b2c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2bc) {
            ctx->pc = 0x38B308u;
            goto label_38b308;
        }
    }
    ctx->pc = 0x38B2C4u;
    // 0x38b2c4: 0xa2030118  sb          $v1, 0x118($s0)
    ctx->pc = 0x38b2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
    // 0x38b2c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38B2C8u;
    {
        const bool branch_taken_0x38b2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2C8u;
        // 0x38b2cc: 0xa2000119  sb          $zero, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2c8) {
            ctx->pc = 0x38B308u;
            goto label_38b308;
        }
    }
    ctx->pc = 0x38B2D0u;
label_38b2d0:
    // 0x38b2d0: 0xc0e2b98  jal         func_38AE60
    ctx->pc = 0x38B2D0u;
    SET_GPR_U32(ctx, 31, 0x38B2D8u);
    ctx->pc = 0x38AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AE60u, 0x38B2D0u, 0x38B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B2D8u;
label_38b2d8:
    // 0x38b2d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x38B2D8u;
    {
        const bool branch_taken_0x38b2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2D8u;
        // 0x38b2dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2d8) {
            ctx->pc = 0x38B308u;
            goto label_38b308;
        }
    }
    ctx->pc = 0x38B2E0u;
    // 0x38b2e0: 0xa2030118  sb          $v1, 0x118($s0)
    ctx->pc = 0x38b2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
    // 0x38b2e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38B2E4u;
    {
        const bool branch_taken_0x38b2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B2E4u;
        // 0x38b2e8: 0xa2000119  sb          $zero, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b2e4) {
            ctx->pc = 0x38B308u;
            goto label_38b308;
        }
    }
    ctx->pc = 0x38B2ECu;
    // 0x38b2ec: 0x0  nop
    ctx->pc = 0x38b2ecu;
    // NOP
label_38b2f0:
    // 0x38b2f0: 0xc0e2d60  jal         func_38B580
    ctx->pc = 0x38B2F0u;
    SET_GPR_U32(ctx, 31, 0x38B2F8u);
    ctx->pc = 0x38B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B580u, 0x38B2F0u, 0x38B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B2F8u;
label_38b2f8:
    // 0x38b2f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B2F8u;
    {
        const bool branch_taken_0x38b2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b2f8) {
            ctx->pc = 0x38B308u;
            goto label_38b308;
        }
    }
    ctx->pc = 0x38B300u;
    // 0x38b300: 0xa2000118  sb          $zero, 0x118($s0)
    ctx->pc = 0x38b300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 0));
    // 0x38b304: 0xa2000119  sb          $zero, 0x119($s0)
    ctx->pc = 0x38b304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
label_38b308:
    // 0x38b308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38b308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b30c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38b30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b310: 0x3e00008  jr          $ra
    ctx->pc = 0x38B310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B310u;
        // 0x38b314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B318u;
}
