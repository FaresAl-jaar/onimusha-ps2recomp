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

// Function: sub_002BD1C0
// Address: 0x2bd1c0 - 0x2bd2dc
void sub_002BD1C0_0x2bd1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD1C0_0x2bd1c0");
#endif

    switch (ctx->pc) {
        case 0x2bd208u: goto label_2bd208;
        case 0x2bd258u: goto label_2bd258;
        case 0x2bd274u: goto label_2bd274;
        case 0x2bd29cu: goto label_2bd29c;
        case 0x2bd2acu: goto label_2bd2ac;
        default: break;
    }

    ctx->pc = 0x2bd1c0u;

    // 0x2bd1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bd1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bd1c4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2bd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2bd1c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bd1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bd1cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bd1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bd1d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd1d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd1dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bd1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1e0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2bd1e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd1e4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BD1E4u;
    {
        const bool branch_taken_0x2bd1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1E4u;
        // 0x2bd1e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1e4) {
            ctx->pc = 0x2BD210u;
            goto label_2bd210;
        }
    }
    ctx->pc = 0x2BD1ECu;
    // 0x2bd1ec: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2bd1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2bd1f0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2bd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2bd1f4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2bd1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2bd1f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bd1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bd1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bd200: 0xc0b2288  jal         func_2C8A20
    ctx->pc = 0x2BD200u;
    SET_GPR_U32(ctx, 31, 0x2BD208u);
    ctx->pc = 0x2BD204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD200u;
    // 0x2bd204: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A20u, 0x2BD200u, 0x2BD208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD208u;
label_2bd208:
    // 0x2bd208: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2BD208u;
    {
        const bool branch_taken_0x2bd208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd208) {
            ctx->pc = 0x2BD2C0u;
            goto label_2bd2c0;
        }
    }
    ctx->pc = 0x2BD210u;
label_2bd210:
    // 0x2bd210: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2bd210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2bd214: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BD214u;
    {
        const bool branch_taken_0x2bd214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD214u;
        // 0x2bd218: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd214) {
            ctx->pc = 0x2BD260u;
            goto label_2bd260;
        }
    }
    ctx->pc = 0x2BD21Cu;
    // 0x2bd21c: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2bd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2bd220: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2bd220u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2bd224: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2bd224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2bd228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bd228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bd22c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd230: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2bd230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd234: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD234u;
    {
        const bool branch_taken_0x2bd234 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD234u;
        // 0x2bd238: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd234) {
            ctx->pc = 0x2BD244u;
            goto label_2bd244;
        }
    }
    ctx->pc = 0x2BD23Cu;
    // 0x2bd23c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD23Cu;
    {
        const bool branch_taken_0x2bd23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD23Cu;
        // 0x2bd240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd23c) {
            ctx->pc = 0x2BD250u;
            goto label_2bd250;
        }
    }
    ctx->pc = 0x2BD244u;
label_2bd244:
    // 0x2bd244: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bd244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd248: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2bd248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd24c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bd250:
    // 0x2bd250: 0xc0b2288  jal         func_2C8A20
    ctx->pc = 0x2BD250u;
    SET_GPR_U32(ctx, 31, 0x2BD258u);
    ctx->pc = 0x2BD254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD250u;
    // 0x2bd254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A20u, 0x2BD250u, 0x2BD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD258u;
label_2bd258:
    // 0x2bd258: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2BD258u;
    {
        const bool branch_taken_0x2bd258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd258) {
            ctx->pc = 0x2BD2C0u;
            goto label_2bd2c0;
        }
    }
    ctx->pc = 0x2BD260u;
label_2bd260:
    // 0x2bd260: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2bd260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bd264: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD264u;
    {
        const bool branch_taken_0x2bd264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd264) {
            ctx->pc = 0x2BD280u;
            goto label_2bd280;
        }
    }
    ctx->pc = 0x2BD26Cu;
    // 0x2bd26c: 0xc0b2288  jal         func_2C8A20
    ctx->pc = 0x2BD26Cu;
    SET_GPR_U32(ctx, 31, 0x2BD274u);
    ctx->pc = 0x2BD270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD26Cu;
    // 0x2bd270: 0x8f8689e0  lw          $a2, -0x7620($gp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A20u, 0x2BD26Cu, 0x2BD274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD274u;
label_2bd274:
    // 0x2bd274: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BD274u;
    {
        const bool branch_taken_0x2bd274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd274) {
            ctx->pc = 0x2BD2C0u;
            goto label_2bd2c0;
        }
    }
    ctx->pc = 0x2BD27Cu;
    // 0x2bd27c: 0x0  nop
    ctx->pc = 0x2bd27cu;
    // NOP
label_2bd280:
    // 0x2bd280: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2bd280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2bd284: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BD284u;
    {
        const bool branch_taken_0x2bd284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd284) {
            ctx->pc = 0x2BD2B8u;
            goto label_2bd2b8;
        }
    }
    ctx->pc = 0x2BD28Cu;
    // 0x2bd28c: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x2bd28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2bd290: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2bd290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2bd294: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2BD294u;
    SET_GPR_U32(ctx, 31, 0x2BD29Cu);
    ctx->pc = 0x2BD298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD294u;
    // 0x2bd298: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2BD294u, 0x2BD29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD29Cu;
label_2bd29c:
    // 0x2bd29c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bd2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2a4: 0xc0b2288  jal         func_2C8A20
    ctx->pc = 0x2BD2A4u;
    SET_GPR_U32(ctx, 31, 0x2BD2ACu);
    ctx->pc = 0x2BD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD2A4u;
    // 0x2bd2a8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A20u, 0x2BD2A4u, 0x2BD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2ACu;
label_2bd2ac:
    // 0x2bd2ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD2ACu;
    {
        const bool branch_taken_0x2bd2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd2ac) {
            ctx->pc = 0x2BD2C0u;
            goto label_2bd2c0;
        }
    }
    ctx->pc = 0x2BD2B4u;
    // 0x2bd2b4: 0x0  nop
    ctx->pc = 0x2bd2b4u;
    // NOP
label_2bd2b8:
    // 0x2bd2b8: 0xa2430082  sb          $v1, 0x82($s2)
    ctx->pc = 0x2bd2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bd2bc: 0x0  nop
    ctx->pc = 0x2bd2bcu;
    // NOP
label_2bd2c0:
    // 0x2bd2c0: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x2bd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2bd2c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bd2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd2c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bd2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd2cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd2d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2D4u;
        // 0x2bd2d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD2DCu;
}
