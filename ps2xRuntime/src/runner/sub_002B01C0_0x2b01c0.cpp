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

// Function: sub_002B01C0
// Address: 0x2b01c0 - 0x2b0368
void sub_002B01C0_0x2b01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B01C0_0x2b01c0");
#endif

    switch (ctx->pc) {
        case 0x2b01ecu: goto label_2b01ec;
        case 0x2b022cu: goto label_2b022c;
        case 0x2b0240u: goto label_2b0240;
        case 0x2b0274u: goto label_2b0274;
        case 0x2b027cu: goto label_2b027c;
        case 0x2b02acu: goto label_2b02ac;
        case 0x2b02bcu: goto label_2b02bc;
        case 0x2b02dcu: goto label_2b02dc;
        case 0x2b02f4u: goto label_2b02f4;
        case 0x2b030cu: goto label_2b030c;
        case 0x2b0324u: goto label_2b0324;
        case 0x2b033cu: goto label_2b033c;
        case 0x2b034cu: goto label_2b034c;
        default: break;
    }

    ctx->pc = 0x2b01c0u;

    // 0x2b01c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b01c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b01c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2b01c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b01c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b01c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b01cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b01ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b01d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b01d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b01d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b01d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b01d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b01d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b01dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b01dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b01e0: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x2b01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x2b01e4: 0xc049590  jal         func_125640
    ctx->pc = 0x2B01E4u;
    SET_GPR_U32(ctx, 31, 0x2B01ECu);
    ctx->pc = 0x2B01E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01E4u;
    // 0x2b01e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2B01E4u, 0x2B01ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01ECu;
label_2b01ec:
    // 0x2b01ec: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x2b01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x2b01f0: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2b01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x2b01f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b01f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b01f8: 0x34431200  ori         $v1, $v0, 0x1200
    ctx->pc = 0x2b01f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4608);
    // 0x2b01fc: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x2b01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x2b0200: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2b0200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2b0204: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x2b0204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x2b0208: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2b0208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2b020c: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x2b020cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2b0210: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b0210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b0214: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2b0214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2b0218: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2b0218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2b021c: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x2b021cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x2b0220: 0x8e32005c  lw          $s2, 0x5C($s1)
    ctx->pc = 0x2b0220u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2b0224: 0xc080904  jal         func_202410
    ctx->pc = 0x2B0224u;
    SET_GPR_U32(ctx, 31, 0x2B022Cu);
    ctx->pc = 0x2B0228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0224u;
    // 0x2b0228: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202410u, 0x2B0224u, 0x2B022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B022Cu;
label_2b022c:
    // 0x2b022c: 0x52082b  sltu        $at, $v0, $s2
    ctx->pc = 0x2b022cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2b0230: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0230u;
    {
        const bool branch_taken_0x2b0230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0230u;
        // 0x2b0234: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0230) {
            ctx->pc = 0x2B0258u;
            goto label_2b0258;
        }
    }
    ctx->pc = 0x2B0238u;
    // 0x2b0238: 0xc080904  jal         func_202410
    ctx->pc = 0x2B0238u;
    SET_GPR_U32(ctx, 31, 0x2B0240u);
    ctx->pc = 0x202410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202410u, 0x2B0238u, 0x2B0240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0240u;
label_2b0240:
    // 0x2b0240: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2b0240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2b0244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0248: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x2b0248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2b024c: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x2b024cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x2b0250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0250u;
    {
        const bool branch_taken_0x2b0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0250u;
        // 0x2b0254: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0250) {
            ctx->pc = 0x2B0260u;
            goto label_2b0260;
        }
    }
    ctx->pc = 0x2B0258u;
label_2b0258:
    // 0x2b0258: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b0258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b025c: 0x0  nop
    ctx->pc = 0x2b025cu;
    // NOP
label_2b0260:
    // 0x2b0260: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b0260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b0264: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2B0264u;
    {
        const bool branch_taken_0x2b0264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0264u;
        // 0x2b0268: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0264) {
            ctx->pc = 0x2B0350u;
            goto label_2b0350;
        }
    }
    ctx->pc = 0x2B026Cu;
    // 0x2b026c: 0xc082190  jal         func_208640
    ctx->pc = 0x2B026Cu;
    SET_GPR_U32(ctx, 31, 0x2B0274u);
    ctx->pc = 0x208640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208640u, 0x2B026Cu, 0x2B0274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0274u;
label_2b0274:
    // 0x2b0274: 0xc080cda  jal         func_203368
    ctx->pc = 0x2B0274u;
    SET_GPR_U32(ctx, 31, 0x2B027Cu);
    ctx->pc = 0x2B0278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0274u;
    // 0x2b0278: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203368u, 0x2B0274u, 0x2B027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B027Cu;
label_2b027c:
    // 0x2b027c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2b027cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x2b0280: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x2b0280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x2b0284: 0x9022ff61  lbu         $v0, -0x9F($at)
    ctx->pc = 0x2b0284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x82FF61u));
    // 0x2b0288: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2B0288u;
    {
        const bool branch_taken_0x2b0288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0288) {
            ctx->pc = 0x2B0330u;
            goto label_2b0330;
        }
    }
    ctx->pc = 0x2B0290u;
    // 0x2b0290: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b0290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b0294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0294u;
    {
        const bool branch_taken_0x2b0294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0294) {
            ctx->pc = 0x2B02B0u;
            goto label_2b02b0;
        }
    }
    ctx->pc = 0x2B029Cu;
    // 0x2b029c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b029cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b02a0: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x2b02a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2b02a4: 0xc0805da  jal         func_201768
    ctx->pc = 0x2B02A4u;
    SET_GPR_U32(ctx, 31, 0x2B02ACu);
    ctx->pc = 0x2B02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02A4u;
    // 0x2b02a8: 0x8e260068  lw          $a2, 0x68($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201768u, 0x2B02A4u, 0x2B02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02ACu;
label_2b02ac:
    // 0x2b02ac: 0x0  nop
    ctx->pc = 0x2b02acu;
    // NOP
label_2b02b0:
    // 0x2b02b0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b02b4: 0xc081f14  jal         func_207C50
    ctx->pc = 0x2B02B4u;
    SET_GPR_U32(ctx, 31, 0x2B02BCu);
    ctx->pc = 0x2B02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02B4u;
    // 0x2b02b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207C50u, 0x2B02B4u, 0x2B02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02BCu;
label_2b02bc:
    // 0x2b02bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b02bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b02c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b02c4: 0x9023fc8e  lbu         $v1, -0x372($at)
    ctx->pc = 0x2b02c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x2b02c8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B02C8u;
    {
        const bool branch_taken_0x2b02c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b02c8) {
            ctx->pc = 0x2B0300u;
            goto label_2b0300;
        }
    }
    ctx->pc = 0x2B02D0u;
    // 0x2b02d0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b02d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b02d4: 0xc081c9c  jal         func_207270
    ctx->pc = 0x2B02D4u;
    SET_GPR_U32(ctx, 31, 0x2B02DCu);
    ctx->pc = 0x2B02D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02D4u;
    // 0x2b02d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207270u, 0x2B02D4u, 0x2B02DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02DCu;
label_2b02dc:
    // 0x2b02dc: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b02e0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B02E0u;
    {
        const bool branch_taken_0x2b02e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b02e0) {
            ctx->pc = 0x2B0340u;
            goto label_2b0340;
        }
    }
    ctx->pc = 0x2B02E8u;
    // 0x2b02e8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b02e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b02ec: 0xc082b18  jal         func_20AC60
    ctx->pc = 0x2B02ECu;
    SET_GPR_U32(ctx, 31, 0x2B02F4u);
    ctx->pc = 0x2B02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02ECu;
    // 0x2b02f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC60u, 0x2B02ECu, 0x2B02F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02F4u;
label_2b02f4:
    // 0x2b02f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B02F4u;
    {
        const bool branch_taken_0x2b02f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b02f4) {
            ctx->pc = 0x2B0340u;
            goto label_2b0340;
        }
    }
    ctx->pc = 0x2B02FCu;
    // 0x2b02fc: 0x0  nop
    ctx->pc = 0x2b02fcu;
    // NOP
label_2b0300:
    // 0x2b0300: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b0300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b0304: 0xc081c9c  jal         func_207270
    ctx->pc = 0x2B0304u;
    SET_GPR_U32(ctx, 31, 0x2B030Cu);
    ctx->pc = 0x2B0308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0304u;
    // 0x2b0308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207270u, 0x2B0304u, 0x2B030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B030Cu;
label_2b030c:
    // 0x2b030c: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b0310: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B0310u;
    {
        const bool branch_taken_0x2b0310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0310) {
            ctx->pc = 0x2B0340u;
            goto label_2b0340;
        }
    }
    ctx->pc = 0x2B0318u;
    // 0x2b0318: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b0318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b031c: 0xc082b18  jal         func_20AC60
    ctx->pc = 0x2B031Cu;
    SET_GPR_U32(ctx, 31, 0x2B0324u);
    ctx->pc = 0x2B0320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B031Cu;
    // 0x2b0320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC60u, 0x2B031Cu, 0x2B0324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0324u;
label_2b0324:
    // 0x2b0324: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0324u;
    {
        const bool branch_taken_0x2b0324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0324) {
            ctx->pc = 0x2B0340u;
            goto label_2b0340;
        }
    }
    ctx->pc = 0x2B032Cu;
    // 0x2b032c: 0x0  nop
    ctx->pc = 0x2b032cu;
    // NOP
label_2b0330:
    // 0x2b0330: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b0330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b0334: 0xc081f14  jal         func_207C50
    ctx->pc = 0x2B0334u;
    SET_GPR_U32(ctx, 31, 0x2B033Cu);
    ctx->pc = 0x2B0338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0334u;
    // 0x2b0338: 0x2405fc40  addiu       $a1, $zero, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207C50u, 0x2B0334u, 0x2B033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B033Cu;
label_2b033c:
    // 0x2b033c: 0x0  nop
    ctx->pc = 0x2b033cu;
    // NOP
label_2b0340:
    // 0x2b0340: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b0340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b0344: 0xc081860  jal         func_206180
    ctx->pc = 0x2B0344u;
    SET_GPR_U32(ctx, 31, 0x2B034Cu);
    ctx->pc = 0x2B0348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0344u;
    // 0x2b0348: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206180u, 0x2B0344u, 0x2B034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B034Cu;
label_2b034c:
    // 0x2b034c: 0x0  nop
    ctx->pc = 0x2b034cu;
    // NOP
label_2b0350:
    // 0x2b0350: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b0354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b035c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b035cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0360: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0360u;
        // 0x2b0364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0368u;
}
