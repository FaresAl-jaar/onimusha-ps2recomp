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

// Function: sub_0039F7F0
// Address: 0x39f7f0 - 0x39fde8
void sub_0039F7F0_0x39f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F7F0_0x39f7f0");
#endif

    switch (ctx->pc) {
        case 0x39f818u: goto label_39f818;
        case 0x39f840u: goto label_39f840;
        case 0x39f858u: goto label_39f858;
        case 0x39f86cu: goto label_39f86c;
        case 0x39f898u: goto label_39f898;
        case 0x39f910u: goto label_39f910;
        case 0x39f948u: goto label_39f948;
        case 0x39f95cu: goto label_39f95c;
        case 0x39f9b4u: goto label_39f9b4;
        case 0x39f9dcu: goto label_39f9dc;
        case 0x39fa08u: goto label_39fa08;
        case 0x39fa18u: goto label_39fa18;
        case 0x39fb08u: goto label_39fb08;
        case 0x39fb18u: goto label_39fb18;
        case 0x39fb6cu: goto label_39fb6c;
        case 0x39fc28u: goto label_39fc28;
        case 0x39fc40u: goto label_39fc40;
        case 0x39fc78u: goto label_39fc78;
        case 0x39fca8u: goto label_39fca8;
        case 0x39fcb8u: goto label_39fcb8;
        case 0x39fd24u: goto label_39fd24;
        case 0x39fdd0u: goto label_39fdd0;
        default: break;
    }

    ctx->pc = 0x39f7f0u;

    // 0x39f7f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39f7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x39f7f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x39f7f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x39f7fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x39f800: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39f800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f804: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39f804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f808: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39F808u;
    {
        const bool branch_taken_0x39f808 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F808u;
        // 0x39f80c: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f808) {
            ctx->pc = 0x39F820u;
            goto label_39f820;
        }
    }
    ctx->pc = 0x39F810u;
    // 0x39f810: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39F810u;
    SET_GPR_U32(ctx, 31, 0x39F818u);
    ctx->pc = 0x39F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F810u;
    // 0x39f814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39F810u, 0x39F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F818u;
label_39f818:
    // 0x39f818: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x39F818u;
    {
        const bool branch_taken_0x39f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f818) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39F820u;
label_39f820:
    // 0x39f820: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39F820u;
    {
        const bool branch_taken_0x39f820 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f820) {
            ctx->pc = 0x39F848u;
            goto label_39f848;
        }
    }
    ctx->pc = 0x39F828u;
    // 0x39f828: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x39f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x39f82c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39f82cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39f830: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39F830u;
    {
        const bool branch_taken_0x39f830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F830u;
        // 0x39f834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f830) {
            ctx->pc = 0x39F848u;
            goto label_39f848;
        }
    }
    ctx->pc = 0x39F838u;
    // 0x39f838: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39F838u;
    SET_GPR_U32(ctx, 31, 0x39F840u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39F838u, 0x39F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F840u;
label_39f840:
    // 0x39f840: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x39F840u;
    {
        const bool branch_taken_0x39f840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f840) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39F848u;
label_39f848:
    // 0x39f848: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x39f848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x39f84c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39f850: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39F850u;
    SET_GPR_U32(ctx, 31, 0x39F858u);
    ctx->pc = 0x39F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F850u;
    // 0x39f854: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39F850u, 0x39F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F858u;
label_39f858:
    // 0x39f858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39f858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f85c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39F85Cu;
    {
        const bool branch_taken_0x39f85c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F85Cu;
        // 0x39f860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f85c) {
            ctx->pc = 0x39F878u;
            goto label_39f878;
        }
    }
    ctx->pc = 0x39F864u;
    // 0x39f864: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39F864u;
    SET_GPR_U32(ctx, 31, 0x39F86Cu);
    ctx->pc = 0x39F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F864u;
    // 0x39f868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39F864u, 0x39F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F86Cu;
label_39f86c:
    // 0x39f86c: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x39F86Cu;
    {
        const bool branch_taken_0x39f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f86c) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39F874u;
    // 0x39f874: 0x0  nop
    ctx->pc = 0x39f874u;
    // NOP
label_39f878:
    // 0x39f878: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39F878u;
    {
        const bool branch_taken_0x39f878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f878) {
            ctx->pc = 0x39F8A0u;
            goto label_39f8a0;
        }
    }
    ctx->pc = 0x39F880u;
    // 0x39f880: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x39f880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x39f884: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x39f884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39f888: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39F888u;
    {
        const bool branch_taken_0x39f888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F888u;
        // 0x39f88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f888) {
            ctx->pc = 0x39F8A0u;
            goto label_39f8a0;
        }
    }
    ctx->pc = 0x39F890u;
    // 0x39f890: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39F890u;
    SET_GPR_U32(ctx, 31, 0x39F898u);
    ctx->pc = 0x39F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F890u;
    // 0x39f894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39F890u, 0x39F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F898u;
label_39f898:
    // 0x39f898: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x39F898u;
    {
        const bool branch_taken_0x39f898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f898) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39F8A0u;
label_39f8a0:
    // 0x39f8a0: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x39f8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x39f8a4: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x39f8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x39f8a8: 0x10200149  beqz        $at, . + 4 + (0x149 << 2)
    ctx->pc = 0x39F8A8u;
    {
        const bool branch_taken_0x39f8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F8A8u;
        // 0x39f8ac: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f8a8) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39F8B0u;
    // 0x39f8b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39f8b4: 0x24842640  addiu       $a0, $a0, 0x2640
    ctx->pc = 0x39f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9792));
    // 0x39f8b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39f8bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39f8c0: 0x600008  jr          $v1
    ctx->pc = 0x39F8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39F8C8u: goto label_39f8c8;
            case 0x39F970u: goto label_39f970;
            case 0x39F990u: goto label_39f990;
            case 0x39FAC8u: goto label_39fac8;
            case 0x39FAE8u: goto label_39fae8;
            case 0x39FC20u: goto label_39fc20;
            case 0x39FC98u: goto label_39fc98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F8C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39F8C8u;
label_39f8c8:
    // 0x39f8c8: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x39F8C8u;
    {
        const bool branch_taken_0x39f8c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f8c8) {
            ctx->pc = 0x39F950u;
            goto label_39f950;
        }
    }
    ctx->pc = 0x39F8D0u;
    // 0x39f8d0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x39f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39f8d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39f8d8: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x39f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x39f8dc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x39f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f8e0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x39f8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x39f8e4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x39f8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f8e8: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x39f8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x39f8ec: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x39f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39f8f0: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x39f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x39f8f4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x39f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f8f8: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x39f8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x39f8fc: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x39f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x39f900: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x39f900u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x39f904: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x39f904u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x39f908: 0xc0aa39c  jal         func_2A8E70
    ctx->pc = 0x39F908u;
    SET_GPR_U32(ctx, 31, 0x39F910u);
    ctx->pc = 0x39F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F908u;
    // 0x39f90c: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E70u, 0x39F908u, 0x39F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F910u;
label_39f910:
    // 0x39f910: 0xae420550  sw          $v0, 0x550($s2)
    ctx->pc = 0x39f910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1360), GPR_U32(ctx, 2));
    // 0x39f914: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39f914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39f918: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x39f918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x39f91c: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x39f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
    // 0x39f920: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39f924: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39f924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39f928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f92c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x39f92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x39f930: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39f930u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f934: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39f934u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f938: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39f938u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f93c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39f93cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f940: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39F940u;
    SET_GPR_U32(ctx, 31, 0x39F948u);
    ctx->pc = 0x39F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F940u;
    // 0x39f944: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39F940u, 0x39F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F948u;
label_39f948:
    // 0x39f948: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39F948u;
    {
        const bool branch_taken_0x39f948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f948) {
            ctx->pc = 0x39F960u;
            goto label_39f960;
        }
    }
    ctx->pc = 0x39F950u;
label_39f950:
    // 0x39f950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f954: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39F954u;
    SET_GPR_U32(ctx, 31, 0x39F95Cu);
    ctx->pc = 0x39F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F954u;
    // 0x39f958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39F954u, 0x39F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F95Cu;
label_39f95c:
    // 0x39f95c: 0x0  nop
    ctx->pc = 0x39f95cu;
    // NOP
label_39f960:
    // 0x39f960: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x39f960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x39f964: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39f964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39f968: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x39F968u;
    {
        const bool branch_taken_0x39f968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F968u;
        // 0x39f96c: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f968) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39F970u;
label_39f970:
    // 0x39f970: 0x86420526  lh          $v0, 0x526($s2)
    ctx->pc = 0x39f970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x39f974: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x39f974u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x39f978: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x39f978u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x39f97c: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x39f97cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x39f980: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x39f980u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x39f984: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x39f984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x39f988: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39f988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39f98c: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x39f98cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_39f990:
    // 0x39f990: 0x86460512  lh          $a2, 0x512($s2)
    ctx->pc = 0x39f990u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x39f994: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39F994u;
    {
        const bool branch_taken_0x39f994 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F994u;
        // 0x39f998: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f994) {
            ctx->pc = 0x39F9A8u;
            goto label_39f9a8;
        }
    }
    ctx->pc = 0x39F99Cu;
    // 0x39f99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39f99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39f9a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39F9A0u;
    {
        const bool branch_taken_0x39f9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9A0u;
        // 0x39f9a4: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f9a0) {
            ctx->pc = 0x39F9B8u;
            goto label_39f9b8;
        }
    }
    ctx->pc = 0x39F9A8u;
label_39f9a8:
    // 0x39f9a8: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x39f9a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39f9ac: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x39F9ACu;
    SET_GPR_U32(ctx, 31, 0x39F9B4u);
    ctx->pc = 0x39F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F9ACu;
    // 0x39f9b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x39F9ACu, 0x39F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F9B4u;
label_39f9b4:
    // 0x39f9b4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x39f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_39f9b8:
    // 0x39f9b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x39f9b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x39f9bc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39f9c0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x39f9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f9c4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x39f9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x39f9c8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x39f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39f9cc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39f9d0: 0xc44e0034  lwc1        $f14, 0x34($v0)
    ctx->pc = 0x39f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x39f9d4: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x39F9D4u;
    SET_GPR_U32(ctx, 31, 0x39F9DCu);
    ctx->pc = 0x39F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F9D4u;
    // 0x39f9d8: 0xc60d0024  lwc1        $f13, 0x24($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x39F9D4u, 0x39F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F9DCu;
label_39f9dc:
    // 0x39f9dc: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x39f9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x39f9e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39f9e4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x39f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39f9e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f9ec: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x39f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x39f9f0: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x39f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f9f4: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x39f9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x39f9f8: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x39f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x39f9fc: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x39f9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x39fa00: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x39FA00u;
    SET_GPR_U32(ctx, 31, 0x39FA08u);
    ctx->pc = 0x39FA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FA00u;
    // 0x39fa04: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x39FA00u, 0x39FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FA08u;
label_39fa08:
    // 0x39fa08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39FA08u;
    {
        const bool branch_taken_0x39fa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA08u;
        // 0x39fa0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa08) {
            ctx->pc = 0x39FA18u;
            goto label_39fa18;
        }
    }
    ctx->pc = 0x39FA10u;
    // 0x39fa10: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39FA10u;
    SET_GPR_U32(ctx, 31, 0x39FA18u);
    ctx->pc = 0x39FA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FA10u;
    // 0x39fa14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39FA10u, 0x39FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FA18u;
label_39fa18:
    // 0x39fa18: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x39fa18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x39fa1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39FA1Cu;
    {
        const bool branch_taken_0x39fa1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA1Cu;
        // 0x39fa20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa1c) {
            ctx->pc = 0x39FA30u;
            goto label_39fa30;
        }
    }
    ctx->pc = 0x39FA24u;
    // 0x39fa24: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39FA24u;
    {
        const bool branch_taken_0x39fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fa24) {
            ctx->pc = 0x39FAB0u;
            goto label_39fab0;
        }
    }
    ctx->pc = 0x39FA2Cu;
    // 0x39fa2c: 0x0  nop
    ctx->pc = 0x39fa2cu;
    // NOP
label_39fa30:
    // 0x39fa30: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x39fa30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fa34: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x39fa38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39fa3c: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x39fa3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39fa40: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x39fa40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x39fa44: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39FA44u;
    {
        const bool branch_taken_0x39fa44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39fa44) {
            ctx->pc = 0x39FA80u;
            goto label_39fa80;
        }
    }
    ctx->pc = 0x39FA4Cu;
    // 0x39fa4c: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x39fa4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fa50: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x39fa50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x39fa54: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39FA54u;
    {
        const bool branch_taken_0x39fa54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA54u;
        // 0x39fa58: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa54) {
            ctx->pc = 0x39FAA8u;
            goto label_39faa8;
        }
    }
    ctx->pc = 0x39FA5Cu;
    // 0x39fa5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fa60: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x39fa60u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39fa64: 0x0  nop
    ctx->pc = 0x39fa64u;
    // NOP
    // 0x39fa68: 0x0  nop
    ctx->pc = 0x39fa68u;
    // NOP
    // 0x39fa6c: 0x2010  mfhi        $a0
    ctx->pc = 0x39fa6cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x39fa70: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x39fa70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39fa74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39FA74u;
    {
        const bool branch_taken_0x39fa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA74u;
        // 0x39fa78: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa74) {
            ctx->pc = 0x39FAA8u;
            goto label_39faa8;
        }
    }
    ctx->pc = 0x39FA7Cu;
    // 0x39fa7c: 0x0  nop
    ctx->pc = 0x39fa7cu;
    // NOP
label_39fa80:
    // 0x39fa80: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x39fa80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fa84: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x39fa84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x39fa88: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39FA88u;
    {
        const bool branch_taken_0x39fa88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fa88) {
            ctx->pc = 0x39FAA8u;
            goto label_39faa8;
        }
    }
    ctx->pc = 0x39FA90u;
    // 0x39fa90: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x39fa90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39fa94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fa98: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x39fa98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x39fa9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39FA9Cu;
    {
        const bool branch_taken_0x39fa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA9Cu;
        // 0x39faa0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa9c) {
            ctx->pc = 0x39FAB0u;
            goto label_39fab0;
        }
    }
    ctx->pc = 0x39FAA4u;
    // 0x39faa4: 0x0  nop
    ctx->pc = 0x39faa4u;
    // NOP
label_39faa8:
    // 0x39faa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39faac: 0x0  nop
    ctx->pc = 0x39faacu;
    // NOP
label_39fab0:
    // 0x39fab0: 0x146000c7  bnez        $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x39FAB0u;
    {
        const bool branch_taken_0x39fab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fab0) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39FAB8u;
    // 0x39fab8: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x39fab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x39fabc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39fac0: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x39FAC0u;
    {
        const bool branch_taken_0x39fac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FAC0u;
        // 0x39fac4: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fac0) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39FAC8u;
label_39fac8:
    // 0x39fac8: 0x86420528  lh          $v0, 0x528($s2)
    ctx->pc = 0x39fac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1320)));
    // 0x39facc: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x39faccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x39fad0: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x39fad0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x39fad4: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x39fad4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x39fad8: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x39fad8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x39fadc: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x39fadcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x39fae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39fae4: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x39fae4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_39fae8:
    // 0x39fae8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x39fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39faec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39faecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39faf0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39faf4: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x39faf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x39faf8: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x39faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x39fafc: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x39fafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x39fb00: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x39FB00u;
    SET_GPR_U32(ctx, 31, 0x39FB08u);
    ctx->pc = 0x39FB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FB00u;
    // 0x39fb04: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x39FB00u, 0x39FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FB08u;
label_39fb08:
    // 0x39fb08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39FB08u;
    {
        const bool branch_taken_0x39fb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB08u;
        // 0x39fb0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb08) {
            ctx->pc = 0x39FB18u;
            goto label_39fb18;
        }
    }
    ctx->pc = 0x39FB10u;
    // 0x39fb10: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39FB10u;
    SET_GPR_U32(ctx, 31, 0x39FB18u);
    ctx->pc = 0x39FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FB10u;
    // 0x39fb14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39FB10u, 0x39FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FB18u;
label_39fb18:
    // 0x39fb18: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x39fb18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fb1c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x39fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x39fb20: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x39fb20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39fb24: 0x0  nop
    ctx->pc = 0x39fb24u;
    // NOP
    // 0x39fb28: 0x0  nop
    ctx->pc = 0x39fb28u;
    // NOP
    // 0x39fb2c: 0x1810  mfhi        $v1
    ctx->pc = 0x39fb2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x39fb30: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x39FB30u;
    {
        const bool branch_taken_0x39fb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fb30) {
            ctx->pc = 0x39FB70u;
            goto label_39fb70;
        }
    }
    ctx->pc = 0x39FB38u;
    // 0x39fb38: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x39fb38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x39fb3c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39fb40: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x39fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x39fb44: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39fb48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39fb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fb4c: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39fb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39fb50: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x39fb50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x39fb54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39fb54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fb58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39fb58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fb5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39fb5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fb60: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39fb60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fb64: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39FB64u;
    SET_GPR_U32(ctx, 31, 0x39FB6Cu);
    ctx->pc = 0x39FB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FB64u;
    // 0x39fb68: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39FB64u, 0x39FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FB6Cu;
label_39fb6c:
    // 0x39fb6c: 0x0  nop
    ctx->pc = 0x39fb6cu;
    // NOP
label_39fb70:
    // 0x39fb70: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x39fb70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x39fb74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39FB74u;
    {
        const bool branch_taken_0x39fb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB74u;
        // 0x39fb78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb74) {
            ctx->pc = 0x39FB88u;
            goto label_39fb88;
        }
    }
    ctx->pc = 0x39FB7Cu;
    // 0x39fb7c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39FB7Cu;
    {
        const bool branch_taken_0x39fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fb7c) {
            ctx->pc = 0x39FC08u;
            goto label_39fc08;
        }
    }
    ctx->pc = 0x39FB84u;
    // 0x39fb84: 0x0  nop
    ctx->pc = 0x39fb84u;
    // NOP
label_39fb88:
    // 0x39fb88: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x39fb88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fb8c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x39fb90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39fb94: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x39fb94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39fb98: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x39fb98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x39fb9c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39FB9Cu;
    {
        const bool branch_taken_0x39fb9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39fb9c) {
            ctx->pc = 0x39FBD8u;
            goto label_39fbd8;
        }
    }
    ctx->pc = 0x39FBA4u;
    // 0x39fba4: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x39fba4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fba8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x39fba8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x39fbac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39FBACu;
    {
        const bool branch_taken_0x39fbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBACu;
        // 0x39fbb0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fbac) {
            ctx->pc = 0x39FC00u;
            goto label_39fc00;
        }
    }
    ctx->pc = 0x39FBB4u;
    // 0x39fbb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fbb8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x39fbb8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39fbbc: 0x0  nop
    ctx->pc = 0x39fbbcu;
    // NOP
    // 0x39fbc0: 0x0  nop
    ctx->pc = 0x39fbc0u;
    // NOP
    // 0x39fbc4: 0x2010  mfhi        $a0
    ctx->pc = 0x39fbc4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x39fbc8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x39fbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39fbcc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39FBCCu;
    {
        const bool branch_taken_0x39fbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBCCu;
        // 0x39fbd0: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fbcc) {
            ctx->pc = 0x39FC00u;
            goto label_39fc00;
        }
    }
    ctx->pc = 0x39FBD4u;
    // 0x39fbd4: 0x0  nop
    ctx->pc = 0x39fbd4u;
    // NOP
label_39fbd8:
    // 0x39fbd8: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x39fbd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fbdc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x39fbdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x39fbe0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39FBE0u;
    {
        const bool branch_taken_0x39fbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fbe0) {
            ctx->pc = 0x39FC00u;
            goto label_39fc00;
        }
    }
    ctx->pc = 0x39FBE8u;
    // 0x39fbe8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x39fbe8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39fbec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fbf0: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x39fbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x39fbf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39FBF4u;
    {
        const bool branch_taken_0x39fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBF4u;
        // 0x39fbf8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fbf4) {
            ctx->pc = 0x39FC08u;
            goto label_39fc08;
        }
    }
    ctx->pc = 0x39FBFCu;
    // 0x39fbfc: 0x0  nop
    ctx->pc = 0x39fbfcu;
    // NOP
label_39fc00:
    // 0x39fc00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fc04: 0x0  nop
    ctx->pc = 0x39fc04u;
    // NOP
label_39fc08:
    // 0x39fc08: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x39FC08u;
    {
        const bool branch_taken_0x39fc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fc08) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39FC10u;
    // 0x39fc10: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x39fc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x39fc14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39fc18: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x39FC18u;
    {
        const bool branch_taken_0x39fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC18u;
        // 0x39fc1c: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fc18) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39FC20u;
label_39fc20:
    // 0x39fc20: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x39FC20u;
    SET_GPR_U32(ctx, 31, 0x39FC28u);
    ctx->pc = 0x39FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC20u;
    // 0x39fc24: 0x8e440550  lw          $a0, 0x550($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x39FC20u, 0x39FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC28u;
label_39fc28:
    // 0x39fc28: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x39FC28u;
    {
        const bool branch_taken_0x39fc28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC28u;
        // 0x39fc2c: 0xae400550  sw          $zero, 0x550($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fc28) {
            ctx->pc = 0x39FC78u;
            goto label_39fc78;
        }
    }
    ctx->pc = 0x39FC30u;
    // 0x39fc30: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x39fc30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x39fc34: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x39fc34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x39fc38: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x39FC38u;
    SET_GPR_U32(ctx, 31, 0x39FC40u);
    ctx->pc = 0x39FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC38u;
    // 0x39fc3c: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x39FC38u, 0x39FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC40u;
label_39fc40:
    // 0x39fc40: 0xae420550  sw          $v0, 0x550($s2)
    ctx->pc = 0x39fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1360), GPR_U32(ctx, 2));
    // 0x39fc44: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39fc48: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x39fc48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x39fc4c: 0x3c022900  lui         $v0, 0x2900
    ctx->pc = 0x39fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10496 << 16));
    // 0x39fc50: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39fc54: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39fc54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39fc58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39fc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fc5c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x39fc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x39fc60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39fc60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fc64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39fc64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fc68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39fc68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fc6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39fc6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fc70: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39FC70u;
    SET_GPR_U32(ctx, 31, 0x39FC78u);
    ctx->pc = 0x39FC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC70u;
    // 0x39fc74: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39FC70u, 0x39FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC78u;
label_39fc78:
    // 0x39fc78: 0x8642052a  lh          $v0, 0x52A($s2)
    ctx->pc = 0x39fc78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1322)));
    // 0x39fc7c: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x39fc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x39fc80: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x39fc80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x39fc84: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x39fc84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x39fc88: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x39fc88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x39fc8c: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x39fc8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x39fc90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39fc94: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x39fc94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_39fc98:
    // 0x39fc98: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x39fc98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x39fc9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39fc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fca0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x39FCA0u;
    SET_GPR_U32(ctx, 31, 0x39FCA8u);
    ctx->pc = 0x39FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FCA0u;
    // 0x39fca4: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x39FCA0u, 0x39FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FCA8u;
label_39fca8:
    // 0x39fca8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39FCA8u;
    {
        const bool branch_taken_0x39fca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCA8u;
        // 0x39fcac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fca8) {
            ctx->pc = 0x39FCB8u;
            goto label_39fcb8;
        }
    }
    ctx->pc = 0x39FCB0u;
    // 0x39fcb0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39FCB0u;
    SET_GPR_U32(ctx, 31, 0x39FCB8u);
    ctx->pc = 0x39FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FCB0u;
    // 0x39fcb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39FCB0u, 0x39FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FCB8u;
label_39fcb8:
    // 0x39fcb8: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x39fcb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fcbc: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x39FCBCu;
    {
        const bool branch_taken_0x39fcbc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x39FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCBCu;
        // 0x39fcc0: 0x2861001f  slti        $at, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fcbc) {
            ctx->pc = 0x39FD28u;
            goto label_39fd28;
        }
    }
    ctx->pc = 0x39FCC4u;
    // 0x39fcc4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x39FCC4u;
    {
        const bool branch_taken_0x39fcc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fcc4) {
            ctx->pc = 0x39FD28u;
            goto label_39fd28;
        }
    }
    ctx->pc = 0x39FCCCu;
    // 0x39fccc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39fcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39fcd0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x39fcd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x39fcd4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x39fcd4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x39fcd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x39fcd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fcdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39fcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fce0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x39fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39fce4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39fce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39fce8: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x39fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x39fcec: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x39fcecu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x39fcf0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39fcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39fcf4: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x39fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x39fcf8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x39fcf8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x39fcfc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39fcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39fd00: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x39fd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x39fd04: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x39fd04u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x39fd08: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x39fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x39fd0c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x39fd0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x39fd10: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x39fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x39fd14: 0x92460558  lbu         $a2, 0x558($s2)
    ctx->pc = 0x39fd14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1368)));
    // 0x39fd18: 0xc64c0554  lwc1        $f12, 0x554($s2)
    ctx->pc = 0x39fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x39fd1c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x39FD1Cu;
    SET_GPR_U32(ctx, 31, 0x39FD24u);
    ctx->pc = 0x39FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD1Cu;
    // 0x39fd20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x39FD1Cu, 0x39FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD24u;
label_39fd24:
    // 0x39fd24: 0x0  nop
    ctx->pc = 0x39fd24u;
    // NOP
label_39fd28:
    // 0x39fd28: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x39fd28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x39fd2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39FD2Cu;
    {
        const bool branch_taken_0x39fd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD2Cu;
        // 0x39fd30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fd2c) {
            ctx->pc = 0x39FD40u;
            goto label_39fd40;
        }
    }
    ctx->pc = 0x39FD34u;
    // 0x39fd34: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39FD34u;
    {
        const bool branch_taken_0x39fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fd34) {
            ctx->pc = 0x39FDC0u;
            goto label_39fdc0;
        }
    }
    ctx->pc = 0x39FD3Cu;
    // 0x39fd3c: 0x0  nop
    ctx->pc = 0x39fd3cu;
    // NOP
label_39fd40:
    // 0x39fd40: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x39fd40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fd44: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x39fd48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39fd4c: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x39fd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39fd50: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x39fd50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x39fd54: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39FD54u;
    {
        const bool branch_taken_0x39fd54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39fd54) {
            ctx->pc = 0x39FD90u;
            goto label_39fd90;
        }
    }
    ctx->pc = 0x39FD5Cu;
    // 0x39fd5c: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x39fd5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fd60: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x39fd60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x39fd64: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39FD64u;
    {
        const bool branch_taken_0x39fd64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD64u;
        // 0x39fd68: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fd64) {
            ctx->pc = 0x39FDB8u;
            goto label_39fdb8;
        }
    }
    ctx->pc = 0x39FD6Cu;
    // 0x39fd6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fd70: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x39fd70u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39fd74: 0x0  nop
    ctx->pc = 0x39fd74u;
    // NOP
    // 0x39fd78: 0x0  nop
    ctx->pc = 0x39fd78u;
    // NOP
    // 0x39fd7c: 0x2010  mfhi        $a0
    ctx->pc = 0x39fd7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x39fd80: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x39fd80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39fd84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39FD84u;
    {
        const bool branch_taken_0x39fd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD84u;
        // 0x39fd88: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fd84) {
            ctx->pc = 0x39FDB8u;
            goto label_39fdb8;
        }
    }
    ctx->pc = 0x39FD8Cu;
    // 0x39fd8c: 0x0  nop
    ctx->pc = 0x39fd8cu;
    // NOP
label_39fd90:
    // 0x39fd90: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x39fd90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x39fd94: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x39fd94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x39fd98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39FD98u;
    {
        const bool branch_taken_0x39fd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fd98) {
            ctx->pc = 0x39FDB8u;
            goto label_39fdb8;
        }
    }
    ctx->pc = 0x39FDA0u;
    // 0x39fda0: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x39fda0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x39fda4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fda8: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x39fda8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x39fdac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39FDACu;
    {
        const bool branch_taken_0x39fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDACu;
        // 0x39fdb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fdac) {
            ctx->pc = 0x39FDC0u;
            goto label_39fdc0;
        }
    }
    ctx->pc = 0x39FDB4u;
    // 0x39fdb4: 0x0  nop
    ctx->pc = 0x39fdb4u;
    // NOP
label_39fdb8:
    // 0x39fdb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fdbc: 0x0  nop
    ctx->pc = 0x39fdbcu;
    // NOP
label_39fdc0:
    // 0x39fdc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39FDC0u;
    {
        const bool branch_taken_0x39fdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDC0u;
        // 0x39fdc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fdc0) {
            ctx->pc = 0x39FDD0u;
            goto label_39fdd0;
        }
    }
    ctx->pc = 0x39FDC8u;
    // 0x39fdc8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x39FDC8u;
    SET_GPR_U32(ctx, 31, 0x39FDD0u);
    ctx->pc = 0x39FDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FDC8u;
    // 0x39fdcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x39FDC8u, 0x39FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FDD0u;
label_39fdd0:
    // 0x39fdd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39fdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39fdd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39fdd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39fdd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39fdd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39fddc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39fddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39fde0: 0x3e00008  jr          $ra
    ctx->pc = 0x39FDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDE0u;
        // 0x39fde4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FDE8u;
}
