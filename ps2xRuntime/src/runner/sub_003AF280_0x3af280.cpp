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

// Function: sub_003AF280
// Address: 0x3af280 - 0x3af380
void sub_003AF280_0x3af280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF280_0x3af280");
#endif

    switch (ctx->pc) {
        case 0x3af2d8u: goto label_3af2d8;
        case 0x3af300u: goto label_3af300;
        case 0x3af328u: goto label_3af328;
        default: break;
    }

    ctx->pc = 0x3af280u;

    // 0x3af280: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3af280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3af284: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3af284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3af288: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3af288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3af28c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3af28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3af290: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3af290u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af294: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3af294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3af298: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3af298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af29c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3af29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3af2a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3af2a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3af2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3af2a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3af2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2ac: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3af2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3af2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3af2b4: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x3af2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x3af2b8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3af2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3af2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3af2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3af2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2c8: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x3af2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x3af2cc: 0x2508f210  addiu       $t0, $t0, -0xDF0
    ctx->pc = 0x3af2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963728));
    // 0x3af2d0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3AF2D0u;
    SET_GPR_U32(ctx, 31, 0x3AF2D8u);
    ctx->pc = 0x3AF2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF2D0u;
    // 0x3af2d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3AF2D0u, 0x3AF2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF2D8u;
label_3af2d8:
    // 0x3af2d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3af2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2dc: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3AF2DCu;
    {
        const bool branch_taken_0x3af2dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2DCu;
        // 0x3af2e0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af2dc) {
            ctx->pc = 0x3AF350u;
            goto label_3af350;
        }
    }
    ctx->pc = 0x3AF2E4u;
    // 0x3af2e4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3af2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2e8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3af2e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2ec: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3af2ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2f4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3af2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3af2f8: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3AF2F8u;
    SET_GPR_U32(ctx, 31, 0x3AF300u);
    ctx->pc = 0x3AF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF2F8u;
    // 0x3af2fc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3AF2F8u, 0x3AF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF300u;
label_3af300:
    // 0x3af300: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x3af300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3af304: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3af304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3af308: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3af308u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3af30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af310: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3af310u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3af314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af318: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3af318u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3af31c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3af31cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3af320: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3AF320u;
    SET_GPR_U32(ctx, 31, 0x3AF328u);
    ctx->pc = 0x3AF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF320u;
    // 0x3af324: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3AF320u, 0x3AF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF328u;
label_3af328:
    // 0x3af328: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3af328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3af32c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3af32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3af330: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3af330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3af334: 0xa2120558  sb          $s2, 0x558($s0)
    ctx->pc = 0x3af334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 18));
    // 0x3af338: 0xae02055c  sw          $v0, 0x55C($s0)
    ctx->pc = 0x3af338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 2));
    // 0x3af33c: 0xa2110560  sb          $s1, 0x560($s0)
    ctx->pc = 0x3af33cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1376), (uint8_t)GPR_U32(ctx, 17));
    // 0x3af340: 0xa2000561  sb          $zero, 0x561($s0)
    ctx->pc = 0x3af340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1377), (uint8_t)GPR_U32(ctx, 0));
    // 0x3af344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF344u;
    {
        const bool branch_taken_0x3af344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF344u;
        // 0x3af348: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af344) {
            ctx->pc = 0x3AF358u;
            goto label_3af358;
        }
    }
    ctx->pc = 0x3AF34Cu;
    // 0x3af34c: 0x0  nop
    ctx->pc = 0x3af34cu;
    // NOP
label_3af350:
    // 0x3af350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3af350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af354: 0x0  nop
    ctx->pc = 0x3af354u;
    // NOP
label_3af358:
    // 0x3af358: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3af358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3af35c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3af35cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3af360: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3af360u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af364: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3af364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af368: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3af368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af36c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3af36cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3af370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3af374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af378: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF378u;
        // 0x3af37c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF380u;
}
