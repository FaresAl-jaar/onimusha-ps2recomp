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

// Function: sub_003AB3B0
// Address: 0x3ab3b0 - 0x3ab710
void sub_003AB3B0_0x3ab3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB3B0_0x3ab3b0");
#endif

    switch (ctx->pc) {
        case 0x3ab410u: goto label_3ab410;
        case 0x3ab41cu: goto label_3ab41c;
        case 0x3ab44cu: goto label_3ab44c;
        case 0x3ab454u: goto label_3ab454;
        case 0x3ab46cu: goto label_3ab46c;
        case 0x3ab47cu: goto label_3ab47c;
        case 0x3ab4ccu: goto label_3ab4cc;
        case 0x3ab4dcu: goto label_3ab4dc;
        case 0x3ab524u: goto label_3ab524;
        case 0x3ab534u: goto label_3ab534;
        case 0x3ab574u: goto label_3ab574;
        case 0x3ab584u: goto label_3ab584;
        case 0x3ab5ccu: goto label_3ab5cc;
        case 0x3ab5dcu: goto label_3ab5dc;
        case 0x3ab624u: goto label_3ab624;
        case 0x3ab634u: goto label_3ab634;
        case 0x3ab67cu: goto label_3ab67c;
        case 0x3ab68cu: goto label_3ab68c;
        case 0x3ab6bcu: goto label_3ab6bc;
        case 0x3ab6ccu: goto label_3ab6cc;
        default: break;
    }

    ctx->pc = 0x3ab3b0u;

    // 0x3ab3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ab3b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ab3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ab3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ab3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ab3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab3c0: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x3ab3c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3ab3c4: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x3ab3c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3ab3c8: 0x102000cb  beqz        $at, . + 4 + (0xCB << 2)
    ctx->pc = 0x3AB3C8u;
    {
        const bool branch_taken_0x3ab3c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3C8u;
        // 0x3ab3cc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3c8) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB3D0u;
    // 0x3ab3d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3ab3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3ab3d4: 0x24632960  addiu       $v1, $v1, 0x2960
    ctx->pc = 0x3ab3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10592));
    // 0x3ab3d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ab3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ab3dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3ab3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ab3e0: 0x400008  jr          $v0
    ctx->pc = 0x3AB3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3AB3E8u: goto label_3ab3e8;
            case 0x3AB458u: goto label_3ab458;
            case 0x3AB4B8u: goto label_3ab4b8;
            case 0x3AB510u: goto label_3ab510;
            case 0x3AB560u: goto label_3ab560;
            case 0x3AB5B8u: goto label_3ab5b8;
            case 0x3AB610u: goto label_3ab610;
            case 0x3AB668u: goto label_3ab668;
            case 0x3AB6A8u: goto label_3ab6a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB3E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AB3E8u;
label_3ab3e8:
    // 0x3ab3e8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3ab3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ab3ec: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3ab3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab3f0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab3f4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3ab3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3ab3f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ab3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ab3fc: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab400: 0x24848c30  addiu       $a0, $a0, -0x73D0
    ctx->pc = 0x3ab400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937648));
    // 0x3ab404: 0xa4228c12  sh          $v0, -0x73EE($at)
    ctx->pc = 0x3ab404u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B8C12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B8C12u, _value); } while (0);
    // 0x3ab408: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3AB408u;
    SET_GPR_U32(ctx, 31, 0x3AB410u);
    ctx->pc = 0x3AB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB408u;
    // 0x3ab40c: 0x24a52930  addiu       $a1, $a1, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3AB408u, 0x3AB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB410u;
label_3ab410:
    // 0x3ab410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab414: 0xc0eaec8  jal         func_3ABB20
    ctx->pc = 0x3AB414u;
    SET_GPR_U32(ctx, 31, 0x3AB41Cu);
    ctx->pc = 0x3AB418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB414u;
    // 0x3ab418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABB20u, 0x3AB414u, 0x3AB41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB41Cu;
label_3ab41c:
    // 0x3ab41c: 0x82050008  lb          $a1, 0x8($s0)
    ctx->pc = 0x3ab41cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ab420: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3ab420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3ab424: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x3ab424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x3ab428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ab428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab42c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3ab42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3ab430: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ab430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3ab434: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ab434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3ab438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ab438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ab43c: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x3ab43cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ab440: 0x82050008  lb          $a1, 0x8($s0)
    ctx->pc = 0x3ab440u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ab444: 0xc0eae18  jal         func_3AB860
    ctx->pc = 0x3AB444u;
    SET_GPR_U32(ctx, 31, 0x3AB44Cu);
    ctx->pc = 0x3AB448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB444u;
    // 0x3ab448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB860u, 0x3AB444u, 0x3AB44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB44Cu;
label_3ab44c:
    // 0x3ab44c: 0xc0eadc4  jal         func_3AB710
    ctx->pc = 0x3AB44Cu;
    SET_GPR_U32(ctx, 31, 0x3AB454u);
    ctx->pc = 0x3AB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB44Cu;
    // 0x3ab450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB710u, 0x3AB44Cu, 0x3AB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB454u;
label_3ab454:
    // 0x3ab454: 0x0  nop
    ctx->pc = 0x3ab454u;
    // NOP
label_3ab458:
    // 0x3ab458: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab458u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab45c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab464: 0xc052840  jal         func_14A100
    ctx->pc = 0x3AB464u;
    SET_GPR_U32(ctx, 31, 0x3AB46Cu);
    ctx->pc = 0x3AB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB464u;
    // 0x3ab468: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A100u, 0x3AB464u, 0x3AB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB46Cu;
label_3ab46c:
    // 0x3ab46c: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x3AB46Cu;
    {
        const bool branch_taken_0x3ab46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB46Cu;
        // 0x3ab470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab46c) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB474u;
    // 0x3ab474: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB474u;
    SET_GPR_U32(ctx, 31, 0x3AB47Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB474u, 0x3AB47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB47Cu;
label_3ab47c:
    // 0x3ab47c: 0x440009e  bltz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x3AB47Cu;
    {
        const bool branch_taken_0x3ab47c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab47c) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB484u;
    // 0x3ab484: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x3ab484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab488: 0x24025eb0  addiu       $v0, $zero, 0x5EB0
    ctx->pc = 0x3ab488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    // 0x3ab48c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab490: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ab490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ab494: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x3ab494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ab498: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x3ab498u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ab49c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3ab49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ab4a0: 0xac208c18  sw          $zero, -0x73E8($at)
    ctx->pc = 0x3ab4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937624), GPR_U32(ctx, 0));
    // 0x3ab4a4: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab4a8: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x3ab4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x3ab4ac: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x3AB4ACu;
    {
        const bool branch_taken_0x3ab4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4ACu;
        // 0x3ab4b0: 0xac228c14  sw          $v0, -0x73EC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4ac) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB4B4u;
    // 0x3ab4b4: 0x0  nop
    ctx->pc = 0x3ab4b4u;
    // NOP
label_3ab4b8:
    // 0x3ab4b8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab4b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab4bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab4c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab4c4: 0xc052910  jal         func_14A440
    ctx->pc = 0x3AB4C4u;
    SET_GPR_U32(ctx, 31, 0x3AB4CCu);
    ctx->pc = 0x3AB4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB4C4u;
    // 0x3ab4c8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x3AB4C4u, 0x3AB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB4CCu;
label_3ab4cc:
    // 0x3ab4cc: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x3AB4CCu;
    {
        const bool branch_taken_0x3ab4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4CCu;
        // 0x3ab4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4cc) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB4D4u;
    // 0x3ab4d4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB4D4u;
    SET_GPR_U32(ctx, 31, 0x3AB4DCu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB4D4u, 0x3AB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB4DCu;
label_3ab4dc:
    // 0x3ab4dc: 0x4400086  bltz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x3AB4DCu;
    {
        const bool branch_taken_0x3ab4dc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab4dc) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB4E4u;
    // 0x3ab4e4: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3ab4e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab4e8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3ab4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3ab4ec: 0x24639da0  addiu       $v1, $v1, -0x6260
    ctx->pc = 0x3ab4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942112));
    // 0x3ab4f0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab4f4: 0x24025eb0  addiu       $v0, $zero, 0x5EB0
    ctx->pc = 0x3ab4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24240));
    // 0x3ab4f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ab4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ab4fc: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x3ab4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ab500: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3ab500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3ab504: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab508: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x3AB508u;
    {
        const bool branch_taken_0x3ab508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB508u;
        // 0x3ab50c: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab508) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB510u;
label_3ab510:
    // 0x3ab510: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab510u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab514: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab51c: 0xc0529d4  jal         func_14A750
    ctx->pc = 0x3AB51Cu;
    SET_GPR_U32(ctx, 31, 0x3AB524u);
    ctx->pc = 0x3AB520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB51Cu;
    // 0x3ab520: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A750u, 0x3AB51Cu, 0x3AB524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB524u;
label_3ab524:
    // 0x3ab524: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x3AB524u;
    {
        const bool branch_taken_0x3ab524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB524u;
        // 0x3ab528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab524) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB52Cu;
    // 0x3ab52c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB52Cu;
    SET_GPR_U32(ctx, 31, 0x3AB534u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB52Cu, 0x3AB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB534u;
label_3ab534:
    // 0x3ab534: 0x4400070  bltz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x3AB534u;
    {
        const bool branch_taken_0x3ab534 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab534) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB53Cu;
    // 0x3ab53c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3ab53cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab540: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ab548: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3ab548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab54c: 0xac208c14  sw          $zero, -0x73EC($at)
    ctx->pc = 0x3ab54cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B8C14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C14u, _value); } while (0);
    // 0x3ab550: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab554: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3AB554u;
    {
        const bool branch_taken_0x3ab554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB554u;
        // 0x3ab558: 0xac208c18  sw          $zero, -0x73E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab554) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB55Cu;
    // 0x3ab55c: 0x0  nop
    ctx->pc = 0x3ab55cu;
    // NOP
label_3ab560:
    // 0x3ab560: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab560u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab564: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab56c: 0xc052910  jal         func_14A440
    ctx->pc = 0x3AB56Cu;
    SET_GPR_U32(ctx, 31, 0x3AB574u);
    ctx->pc = 0x3AB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB56Cu;
    // 0x3ab570: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x3AB56Cu, 0x3AB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB574u;
label_3ab574:
    // 0x3ab574: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3AB574u;
    {
        const bool branch_taken_0x3ab574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB574u;
        // 0x3ab578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab574) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB57Cu;
    // 0x3ab57c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB57Cu;
    SET_GPR_U32(ctx, 31, 0x3AB584u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB57Cu, 0x3AB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB584u;
label_3ab584:
    // 0x3ab584: 0x440005c  bltz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x3AB584u;
    {
        const bool branch_taken_0x3ab584 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab584) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB58Cu;
    // 0x3ab58c: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3ab58cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab590: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3ab590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3ab594: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x3ab594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
    // 0x3ab598: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab59c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x3ab59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3ab5a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ab5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ab5a4: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x3ab5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ab5a8: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3ab5a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3ab5ac: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab5b0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3AB5B0u;
    {
        const bool branch_taken_0x3ab5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5B0u;
        // 0x3ab5b4: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5b0) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB5B8u;
label_3ab5b8:
    // 0x3ab5b8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab5b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab5bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab5c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab5c4: 0xc0529d4  jal         func_14A750
    ctx->pc = 0x3AB5C4u;
    SET_GPR_U32(ctx, 31, 0x3AB5CCu);
    ctx->pc = 0x3AB5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB5C4u;
    // 0x3ab5c8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A750u, 0x3AB5C4u, 0x3AB5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB5CCu;
label_3ab5cc:
    // 0x3ab5cc: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3AB5CCu;
    {
        const bool branch_taken_0x3ab5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5CCu;
        // 0x3ab5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5cc) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB5D4u;
    // 0x3ab5d4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB5D4u;
    SET_GPR_U32(ctx, 31, 0x3AB5DCu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB5D4u, 0x3AB5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB5DCu;
label_3ab5dc:
    // 0x3ab5dc: 0x4400046  bltz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3AB5DCu;
    {
        const bool branch_taken_0x3ab5dc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab5dc) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB5E4u;
    // 0x3ab5e4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x3ab5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab5e8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3ab5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3ab5ec: 0x3442b370  ori         $v0, $v0, 0xB370
    ctx->pc = 0x3ab5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45936);
    // 0x3ab5f0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab5f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ab5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ab5f8: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x3ab5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ab5fc: 0xac228c14  sw          $v0, -0x73EC($at)
    ctx->pc = 0x3ab5fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B8C14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C14u, _value); } while (0);
    // 0x3ab600: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab604: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3AB604u;
    {
        const bool branch_taken_0x3ab604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB604u;
        // 0x3ab608: 0xac208c18  sw          $zero, -0x73E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab604) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB60Cu;
    // 0x3ab60c: 0x0  nop
    ctx->pc = 0x3ab60cu;
    // NOP
label_3ab610:
    // 0x3ab610: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab610u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab614: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab61c: 0xc052910  jal         func_14A440
    ctx->pc = 0x3AB61Cu;
    SET_GPR_U32(ctx, 31, 0x3AB624u);
    ctx->pc = 0x3AB620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB61Cu;
    // 0x3ab620: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x3AB61Cu, 0x3AB624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB624u;
label_3ab624:
    // 0x3ab624: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3AB624u;
    {
        const bool branch_taken_0x3ab624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB624u;
        // 0x3ab628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab624) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB62Cu;
    // 0x3ab62c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB62Cu;
    SET_GPR_U32(ctx, 31, 0x3AB634u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB62Cu, 0x3AB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB634u;
label_3ab634:
    // 0x3ab634: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3AB634u;
    {
        const bool branch_taken_0x3ab634 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab634) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB63Cu;
    // 0x3ab63c: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3ab63cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab640: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3ab640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3ab644: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x3ab644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
    // 0x3ab648: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab64c: 0x24020330  addiu       $v0, $zero, 0x330
    ctx->pc = 0x3ab64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x3ab650: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ab650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ab654: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x3ab654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ab658: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3ab658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3ab65c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3ab65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3ab660: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3AB660u;
    {
        const bool branch_taken_0x3ab660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB660u;
        // 0x3ab664: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab660) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB668u;
label_3ab668:
    // 0x3ab668: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab668u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab66c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab674: 0xc0529d4  jal         func_14A750
    ctx->pc = 0x3AB674u;
    SET_GPR_U32(ctx, 31, 0x3AB67Cu);
    ctx->pc = 0x3AB678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB674u;
    // 0x3ab678: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A750u, 0x3AB674u, 0x3AB67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB67Cu;
label_3ab67c:
    // 0x3ab67c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3AB67Cu;
    {
        const bool branch_taken_0x3ab67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB67Cu;
        // 0x3ab680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab67c) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB684u;
    // 0x3ab684: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB684u;
    SET_GPR_U32(ctx, 31, 0x3AB68Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB684u, 0x3AB68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB68Cu;
label_3ab68c:
    // 0x3ab68c: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AB68Cu;
    {
        const bool branch_taken_0x3ab68c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab68c) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB694u;
    // 0x3ab694: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3ab694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3ab698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ab69c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3AB69Cu;
    {
        const bool branch_taken_0x3ab69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB69Cu;
        // 0x3ab6a0: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab69c) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB6A4u;
    // 0x3ab6a4: 0x0  nop
    ctx->pc = 0x3ab6a4u;
    // NOP
label_3ab6a8:
    // 0x3ab6a8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ab6a8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ab6ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ab6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ab6b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ab6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab6b4: 0xc0528b4  jal         func_14A2D0
    ctx->pc = 0x3AB6B4u;
    SET_GPR_U32(ctx, 31, 0x3AB6BCu);
    ctx->pc = 0x3AB6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB6B4u;
    // 0x3ab6b8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2D0u, 0x3AB6B4u, 0x3AB6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB6BCu;
label_3ab6bc:
    // 0x3ab6bc: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3AB6BCu;
    {
        const bool branch_taken_0x3ab6bc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6BCu;
        // 0x3ab6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6bc) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB6C4u;
    // 0x3ab6c4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AB6C4u;
    SET_GPR_U32(ctx, 31, 0x3AB6CCu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AB6C4u, 0x3AB6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB6CCu;
label_3ab6cc:
    // 0x3ab6cc: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AB6CCu;
    {
        const bool branch_taken_0x3ab6cc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ab6cc) {
            ctx->pc = 0x3AB6F8u;
            goto label_3ab6f8;
        }
    }
    ctx->pc = 0x3AB6D4u;
    // 0x3ab6d4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3ab6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab6d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ab6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ab6dc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3ab6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3ab6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ab6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab6e4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ab6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ab6e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3ab6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3ab6ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB6ECu;
    {
        const bool branch_taken_0x3ab6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6ECu;
        // 0x3ab6f0: 0xac23ceb8  sw          $v1, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6ec) {
            ctx->pc = 0x3AB700u;
            goto label_3ab700;
        }
    }
    ctx->pc = 0x3AB6F4u;
    // 0x3ab6f4: 0x0  nop
    ctx->pc = 0x3ab6f4u;
    // NOP
label_3ab6f8:
    // 0x3ab6f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ab6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab6fc: 0x0  nop
    ctx->pc = 0x3ab6fcu;
    // NOP
label_3ab700:
    // 0x3ab700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ab704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab708: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB708u;
        // 0x3ab70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB710u;
}
