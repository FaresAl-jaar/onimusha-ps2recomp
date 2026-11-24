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

// Function: sub_0024C200
// Address: 0x24c200 - 0x24c328
void sub_0024C200_0x24c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C200_0x24c200");
#endif

    switch (ctx->pc) {
        case 0x24c238u: goto label_24c238;
        case 0x24c240u: goto label_24c240;
        case 0x24c24cu: goto label_24c24c;
        case 0x24c260u: goto label_24c260;
        case 0x24c2c0u: goto label_24c2c0;
        case 0x24c2ccu: goto label_24c2cc;
        case 0x24c2ecu: goto label_24c2ec;
        case 0x24c2f8u: goto label_24c2f8;
        case 0x24c300u: goto label_24c300;
        default: break;
    }

    ctx->pc = 0x24c200u;

    // 0x24c200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c20c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c210: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c214: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24c218: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x24c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24c21c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x24c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x24c220: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24c220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x24c224: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24c224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24c228: 0x18600039  blez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x24C228u;
    {
        const bool branch_taken_0x24c228 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C228u;
        // 0x24c22c: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c228) {
            ctx->pc = 0x24C310u;
            goto label_24c310;
        }
    }
    ctx->pc = 0x24C230u;
    // 0x24c230: 0xc08de12  jal         func_237848
    ctx->pc = 0x24C230u;
    SET_GPR_U32(ctx, 31, 0x24C238u);
    ctx->pc = 0x24C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C230u;
    // 0x24c234: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237848u, 0x24C230u, 0x24C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C238u;
label_24c238:
    // 0x24c238: 0xc08dd46  jal         func_237518
    ctx->pc = 0x24C238u;
    SET_GPR_U32(ctx, 31, 0x24C240u);
    ctx->pc = 0x24C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C238u;
    // 0x24c23c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237518u, 0x24C238u, 0x24C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C240u;
label_24c240:
    // 0x24c240: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x24c240u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24c244: 0xc049f18  jal         func_127C60
    ctx->pc = 0x24C244u;
    SET_GPR_U32(ctx, 31, 0x24C24Cu);
    ctx->pc = 0x24C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C244u;
    // 0x24c248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x24C244u, 0x24C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C24Cu;
label_24c24c:
    // 0x24c24c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c250: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24c250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c254: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C254u;
    {
        const bool branch_taken_0x24c254 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C254u;
        // 0x24c258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c254) {
            ctx->pc = 0x24C27Cu;
            goto label_24c27c;
        }
    }
    ctx->pc = 0x24C25Cu;
    // 0x24c25c: 0x0  nop
    ctx->pc = 0x24c25cu;
    // NOP
label_24c260:
    // 0x24c260: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x24c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x24c264: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24c264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24c268: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24c268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c26c: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x24c26cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x24c270: 0x0  nop
    ctx->pc = 0x24c270u;
    // NOP
    // 0x24c274: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24C274u;
    {
        const bool branch_taken_0x24c274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C274u;
        // 0x24c278: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c274) {
            ctx->pc = 0x24C260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C27Cu;
label_24c27c:
    // 0x24c27c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x24c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24c280: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C280u;
    {
        const bool branch_taken_0x24c280 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C280u;
        // 0x24c284: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c280) {
            ctx->pc = 0x24C2A8u;
            goto label_24c2a8;
        }
    }
    ctx->pc = 0x24C288u;
    // 0x24c288: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x24c288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24c28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c290: 0x2484db80  addiu       $a0, $a0, -0x2480
    ctx->pc = 0x24c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957952));
    // 0x24c294: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c298: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c29c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24c29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c2a0: 0x8093008  j           func_24C020
    ctx->pc = 0x24C2A0u;
    ctx->pc = 0x24C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2A0u;
    // 0x24c2a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    sub_0024C020_0x24c020(rdram, ctx, runtime); return;
    ctx->pc = 0x24C2A8u;
label_24c2a8:
    // 0x24c2a8: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x24c2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24c2ac: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x24c2acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x24c2b0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x24c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24c2b4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x24c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24c2b8: 0xc08dce2  jal         func_237388
    ctx->pc = 0x24C2B8u;
    SET_GPR_U32(ctx, 31, 0x24C2C0u);
    ctx->pc = 0x24C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2B8u;
    // 0x24c2bc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237388u, 0x24C2B8u, 0x24C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2C0u;
label_24c2c0:
    // 0x24c2c0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x24c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24c2c4: 0xc08de70  jal         func_2379C0
    ctx->pc = 0x24C2C4u;
    SET_GPR_U32(ctx, 31, 0x24C2CCu);
    ctx->pc = 0x24C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2C4u;
    // 0x24c2c8: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2379C0u, 0x24C2C4u, 0x24C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2CCu;
label_24c2cc:
    // 0x24c2cc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x24c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x24c2d0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x24c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24c2d4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x24c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x24c2d8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x24c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x24c2dc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x24c2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c2e0: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x24c2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x24c2e4: 0xc08e0c6  jal         func_238318
    ctx->pc = 0x24C2E4u;
    SET_GPR_U32(ctx, 31, 0x24C2ECu);
    ctx->pc = 0x24C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2E4u;
    // 0x24c2e8: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238318u, 0x24C2E4u, 0x24C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2ECu;
label_24c2ec:
    // 0x24c2ec: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x24c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24c2f0: 0xc08dd94  jal         func_237650
    ctx->pc = 0x24C2F0u;
    SET_GPR_U32(ctx, 31, 0x24C2F8u);
    ctx->pc = 0x24C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2F0u;
    // 0x24c2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237650u, 0x24C2F0u, 0x24C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2F8u;
label_24c2f8:
    // 0x24c2f8: 0xc08ddd0  jal         func_237740
    ctx->pc = 0x24C2F8u;
    SET_GPR_U32(ctx, 31, 0x24C300u);
    ctx->pc = 0x24C2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2F8u;
    // 0x24c2fc: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237740u, 0x24C2F8u, 0x24C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C300u;
label_24c300:
    // 0x24c300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c308: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x24c308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x24c30c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x24c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_24c310:
    // 0x24c310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c318: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c31c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24c31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c320: 0x3e00008  jr          $ra
    ctx->pc = 0x24C320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C320u;
        // 0x24c324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C328u;
}
