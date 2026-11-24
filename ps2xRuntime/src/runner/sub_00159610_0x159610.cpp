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

// Function: sub_00159610
// Address: 0x159610 - 0x159908
void sub_00159610_0x159610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159610_0x159610");
#endif

    switch (ctx->pc) {
        case 0x159670u: goto label_159670;
        case 0x159684u: goto label_159684;
        case 0x1596b4u: goto label_1596b4;
        case 0x1596dcu: goto label_1596dc;
        case 0x1596e8u: goto label_1596e8;
        case 0x15971cu: goto label_15971c;
        case 0x159734u: goto label_159734;
        case 0x15973cu: goto label_15973c;
        case 0x159754u: goto label_159754;
        case 0x15979cu: goto label_15979c;
        case 0x1597e4u: goto label_1597e4;
        case 0x159884u: goto label_159884;
        case 0x1598c0u: goto label_1598c0;
        case 0x1598c8u: goto label_1598c8;
        case 0x1598d4u: goto label_1598d4;
        case 0x1598e4u: goto label_1598e4;
        default: break;
    }

    ctx->pc = 0x159610u;

    // 0x159610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159614: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15961c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159620: 0x842295a4  lh          $v0, -0x6A5C($at)
    ctx->pc = 0x159620u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A4u));
    // 0x159624: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x159624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x159628: 0x102000b1  beqz        $at, . + 4 + (0xB1 << 2)
    ctx->pc = 0x159628u;
    {
        const bool branch_taken_0x159628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159628u;
        // 0x15962c: 0x8f908610  lw          $s0, -0x79F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159628) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x159630u;
    // 0x159630: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x159630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x159634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x159634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x159638: 0x24635130  addiu       $v1, $v1, 0x5130
    ctx->pc = 0x159638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20784));
    // 0x15963c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159644: 0x400008  jr          $v0
    ctx->pc = 0x159644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159650u: goto label_159650;
            case 0x1596C8u: goto label_1596c8;
            case 0x159748u: goto label_159748;
            case 0x159790u: goto label_159790;
            case 0x1597D8u: goto label_1597d8;
            case 0x159820u: goto label_159820;
            case 0x159840u: goto label_159840;
            case 0x159870u: goto label_159870;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159644u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15964Cu;
    // 0x15964c: 0x0  nop
    ctx->pc = 0x15964cu;
    // NOP
label_159650:
    // 0x159650: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x159650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x159654: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x159654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x159658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15965c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15965cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159668: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x159668u;
    SET_GPR_U32(ctx, 31, 0x159670u);
    ctx->pc = 0x15966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159668u;
    // 0x15966c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x159668u, 0x159670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159670u;
label_159670:
    // 0x159670: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x159670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x159674: 0x24050344  addiu       $a1, $zero, 0x344
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 836));
    // 0x159678: 0x2484cf04  addiu       $a0, $a0, -0x30FC
    ctx->pc = 0x159678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954756));
    // 0x15967c: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x15967Cu;
    SET_GPR_U32(ctx, 31, 0x159684u);
    ctx->pc = 0x159680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15967Cu;
    // 0x159680: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x15967Cu, 0x159684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159684u;
label_159684:
    // 0x159684: 0xaf828610  sw          $v0, -0x79F0($gp)
    ctx->pc = 0x159684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936080), GPR_U32(ctx, 2));
    // 0x159688: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x159688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15968c: 0x8f828610  lw          $v0, -0x79F0($gp)
    ctx->pc = 0x15968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x159690: 0x3c070016  lui         $a3, 0x16
    ctx->pc = 0x159690u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)22 << 16));
    // 0x159694: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x159694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x159698: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x159698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x15969c: 0x24c6a3b0  addiu       $a2, $a2, -0x5C50
    ctx->pc = 0x15969cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943664));
    // 0x1596a0: 0x24e7a3c0  addiu       $a3, $a3, -0x5C40
    ctx->pc = 0x1596a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943680));
    // 0x1596a4: 0xac400328  sw          $zero, 0x328($v0)
    ctx->pc = 0x1596a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 0));
    // 0x1596a8: 0x8f828610  lw          $v0, -0x79F0($gp)
    ctx->pc = 0x1596a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x1596ac: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x1596ACu;
    SET_GPR_U32(ctx, 31, 0x1596B4u);
    ctx->pc = 0x1596B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596ACu;
    // 0x1596b0: 0xa0400338  sb          $zero, 0x338($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 824), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x1596ACu, 0x1596B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596B4u;
label_1596b4:
    // 0x1596b4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1596b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1596b8: 0x842295a4  lh          $v0, -0x6A5C($at)
    ctx->pc = 0x1596b8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A4u));
    // 0x1596bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1596bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1596c0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1596c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1596c4: 0xa42295a4  sh          $v0, -0x6A5C($at)
    ctx->pc = 0x1596c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8095A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A4u, _value); } while (0);
label_1596c8:
    // 0x1596c8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x1596c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x1596cc: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x1596ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x1596d0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1596d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1596d4: 0xc0ce31c  jal         func_338C70
    ctx->pc = 0x1596D4u;
    SET_GPR_U32(ctx, 31, 0x1596DCu);
    ctx->pc = 0x1596D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596D4u;
    // 0x1596d8: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x1596D4u, 0x1596DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596DCu;
label_1596dc:
    // 0x1596dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1596dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596e0: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x1596E0u;
    SET_GPR_U32(ctx, 31, 0x1596E8u);
    ctx->pc = 0x1596E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1596E0u;
    // 0x1596e4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x1596E0u, 0x1596E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1596E8u;
label_1596e8:
    // 0x1596e8: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1596E8u;
    {
        const bool branch_taken_0x1596e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1596e8) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x1596F0u;
    // 0x1596f0: 0x1200007f  beqz        $s0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1596F0u;
    {
        const bool branch_taken_0x1596f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1596F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596F0u;
        // 0x1596f4: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596f0) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x1596F8u;
    // 0x1596f8: 0x8f838610  lw          $v1, -0x79F0($gp)
    ctx->pc = 0x1596f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x1596fc: 0x842295a4  lh          $v0, -0x6A5C($at)
    ctx->pc = 0x1596fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294940068)));
    // 0x159700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159704: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159708: 0xa42295a4  sh          $v0, -0x6A5C($at)
    ctx->pc = 0x159708u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8095A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A4u, _value); } while (0);
    // 0x15970c: 0x8c660190  lw          $a2, 0x190($v1)
    ctx->pc = 0x15970cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x159710: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x159710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159714: 0xc049522  jal         func_125488
    ctx->pc = 0x159714u;
    SET_GPR_U32(ctx, 31, 0x15971Cu);
    ctx->pc = 0x159718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159714u;
    // 0x159718: 0x3c0400b5  lui         $a0, 0xB5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)181 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x159714u, 0x15971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15971Cu;
label_15971c:
    // 0x15971c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15971cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x159720: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x159720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x159724: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x159724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x159728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x159728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15972c: 0xc05ee20  jal         func_17B880
    ctx->pc = 0x15972Cu;
    SET_GPR_U32(ctx, 31, 0x159734u);
    ctx->pc = 0x159730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15972Cu;
    // 0x159730: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B880u, 0x15972Cu, 0x159734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159734u;
label_159734:
    // 0x159734: 0xc043898  jal         func_10E260
    ctx->pc = 0x159734u;
    SET_GPR_U32(ctx, 31, 0x15973Cu);
    ctx->pc = 0x159738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159734u;
    // 0x159738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x159734u, 0x15973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15973Cu;
label_15973c:
    // 0x15973c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x15973Cu;
    {
        const bool branch_taken_0x15973c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15973c) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x159744u;
    // 0x159744: 0x0  nop
    ctx->pc = 0x159744u;
    // NOP
label_159748:
    // 0x159748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x159748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15974c: 0xc056644  jal         func_159910
    ctx->pc = 0x15974Cu;
    SET_GPR_U32(ctx, 31, 0x159754u);
    ctx->pc = 0x159750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15974Cu;
    // 0x159750: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159910u, 0x15974Cu, 0x159754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159754u;
label_159754:
    // 0x159754: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x159754u;
    {
        const bool branch_taken_0x159754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159754) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x15975Cu;
    // 0x15975c: 0x82020338  lb          $v0, 0x338($s0)
    ctx->pc = 0x15975cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x159760: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159760u;
    {
        const bool branch_taken_0x159760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159760u;
        // 0x159764: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159760) {
            ctx->pc = 0x159778u;
            goto label_159778;
        }
    }
    ctx->pc = 0x159768u;
    // 0x159768: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15976c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x15976Cu;
    {
        const bool branch_taken_0x15976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15976Cu;
        // 0x159770: 0xa42295a4  sh          $v0, -0x6A5C($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940068), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15976c) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x159774u;
    // 0x159774: 0x0  nop
    ctx->pc = 0x159774u;
    // NOP
label_159778:
    // 0x159778: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15977c: 0x842295a4  lh          $v0, -0x6A5C($at)
    ctx->pc = 0x15977cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A4u));
    // 0x159780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159784: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159788: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x159788u;
    {
        const bool branch_taken_0x159788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159788u;
        // 0x15978c: 0xa42295a4  sh          $v0, -0x6A5C($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940068), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159788) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x159790u;
label_159790:
    // 0x159790: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x159790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x159794: 0xc05670c  jal         func_159C30
    ctx->pc = 0x159794u;
    SET_GPR_U32(ctx, 31, 0x15979Cu);
    ctx->pc = 0x159798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159794u;
    // 0x159798: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C30u, 0x159794u, 0x15979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15979Cu;
label_15979c:
    // 0x15979c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x15979Cu;
    {
        const bool branch_taken_0x15979c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15979c) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x1597A4u;
    // 0x1597a4: 0x82020338  lb          $v0, 0x338($s0)
    ctx->pc = 0x1597a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x1597a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1597A8u;
    {
        const bool branch_taken_0x1597a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597A8u;
        // 0x1597ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597a8) {
            ctx->pc = 0x1597C0u;
            goto label_1597c0;
        }
    }
    ctx->pc = 0x1597B0u;
    // 0x1597b0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1597b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1597b4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1597B4u;
    {
        const bool branch_taken_0x1597b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597B4u;
        // 0x1597b8: 0xa42295a4  sh          $v0, -0x6A5C($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940068), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597b4) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x1597BCu;
    // 0x1597bc: 0x0  nop
    ctx->pc = 0x1597bcu;
    // NOP
label_1597c0:
    // 0x1597c0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1597c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1597c4: 0x842295a4  lh          $v0, -0x6A5C($at)
    ctx->pc = 0x1597c4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A4u));
    // 0x1597c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1597c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1597cc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1597ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1597d0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1597D0u;
    {
        const bool branch_taken_0x1597d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597D0u;
        // 0x1597d4: 0xa42295a4  sh          $v0, -0x6A5C($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940068), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597d0) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x1597D8u;
label_1597d8:
    // 0x1597d8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1597d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1597dc: 0xc056644  jal         func_159910
    ctx->pc = 0x1597DCu;
    SET_GPR_U32(ctx, 31, 0x1597E4u);
    ctx->pc = 0x1597E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1597DCu;
    // 0x1597e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159910u, 0x1597DCu, 0x1597E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1597E4u;
label_1597e4:
    // 0x1597e4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1597E4u;
    {
        const bool branch_taken_0x1597e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1597e4) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x1597ECu;
    // 0x1597ec: 0x82020338  lb          $v0, 0x338($s0)
    ctx->pc = 0x1597ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x1597f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1597F0u;
    {
        const bool branch_taken_0x1597f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F0u;
        // 0x1597f4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597f0) {
            ctx->pc = 0x159808u;
            goto label_159808;
        }
    }
    ctx->pc = 0x1597F8u;
    // 0x1597f8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1597f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1597fc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1597FCu;
    {
        const bool branch_taken_0x1597fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597FCu;
        // 0x159800: 0xa42295a4  sh          $v0, -0x6A5C($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940068), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597fc) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x159804u;
    // 0x159804: 0x0  nop
    ctx->pc = 0x159804u;
    // NOP
label_159808:
    // 0x159808: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15980c: 0x842295a4  lh          $v0, -0x6A5C($at)
    ctx->pc = 0x15980cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A4u));
    // 0x159810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159814: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159818: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x159818u;
    {
        const bool branch_taken_0x159818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159818u;
        // 0x15981c: 0xa42295a4  sh          $v0, -0x6A5C($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940068), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159818) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x159820u;
label_159820:
    // 0x159820: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x159820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x159824: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x159824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    // 0x159828: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15982c: 0x842295a4  lh          $v0, -0x6A5C($at)
    ctx->pc = 0x15982cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A4u));
    // 0x159830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159834: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159838: 0xa42295a4  sh          $v0, -0x6A5C($at)
    ctx->pc = 0x159838u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8095A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A4u, _value); } while (0);
    // 0x15983c: 0x0  nop
    ctx->pc = 0x15983cu;
    // NOP
label_159840:
    // 0x159840: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x159840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x159844: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159844u;
    {
        const bool branch_taken_0x159844 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x159844) {
            ctx->pc = 0x159858u;
            goto label_159858;
        }
    }
    ctx->pc = 0x15984Cu;
    // 0x15984c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159850: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x159850u;
    {
        const bool branch_taken_0x159850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159850u;
        // 0x159854: 0xae02032c  sw          $v0, 0x32C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159850) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x159858u;
label_159858:
    // 0x159858: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15985c: 0x842295a4  lh          $v0, -0x6A5C($at)
    ctx->pc = 0x15985cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8095A4u));
    // 0x159860: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159864: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159868: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x159868u;
    {
        const bool branch_taken_0x159868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159868u;
        // 0x15986c: 0xa42295a4  sh          $v0, -0x6A5C($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294940068), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159868) {
            ctx->pc = 0x1598F0u;
            goto label_1598f0;
        }
    }
    ctx->pc = 0x159870u;
label_159870:
    // 0x159870: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x159870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x159874: 0x3c020110  lui         $v0, 0x110
    ctx->pc = 0x159874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)272 << 16));
    // 0x159878: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x159878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x15987c: 0xc05e390  jal         func_178E40
    ctx->pc = 0x15987Cu;
    SET_GPR_U32(ctx, 31, 0x159884u);
    ctx->pc = 0x159880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15987Cu;
    // 0x159880: 0x34456000  ori         $a1, $v0, 0x6000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x15987Cu, 0x159884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159884u;
label_159884:
    // 0x159884: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x159884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x159888: 0x8c221814  lw          $v0, 0x1814($at)
    ctx->pc = 0x159888u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x811814u));
    // 0x15988c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x159890: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x159890u;
    {
        const bool branch_taken_0x159890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159890u;
        // 0x159894: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159890) {
            ctx->pc = 0x1598B0u;
            goto label_1598b0;
        }
    }
    ctx->pc = 0x159898u;
    // 0x159898: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x159898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x15989c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x15989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x1598a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1598a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1598a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1598a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1598a8: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x1598a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x1598ac: 0x0  nop
    ctx->pc = 0x1598acu;
    // NOP
label_1598b0:
    // 0x1598b0: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x1598b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x1598b4: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x1598b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x1598b8: 0xc056e04  jal         func_15B810
    ctx->pc = 0x1598B8u;
    SET_GPR_U32(ctx, 31, 0x1598C0u);
    ctx->pc = 0x1598BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598B8u;
    // 0x1598bc: 0x240501b6  addiu       $a1, $zero, 0x1B6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x1598B8u, 0x1598C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598C0u;
label_1598c0:
    // 0x1598c0: 0xc0aba24  jal         func_2AE890
    ctx->pc = 0x1598C0u;
    SET_GPR_U32(ctx, 31, 0x1598C8u);
    ctx->pc = 0x1598C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598C0u;
    // 0x1598c4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE890u, 0x1598C0u, 0x1598C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598C8u;
label_1598c8:
    // 0x1598c8: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x1598cc: 0xc054ddc  jal         func_153770
    ctx->pc = 0x1598CCu;
    SET_GPR_U32(ctx, 31, 0x1598D4u);
    ctx->pc = 0x1598D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598CCu;
    // 0x1598d0: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153770u, 0x1598CCu, 0x1598D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598D4u;
label_1598d4:
    // 0x1598d4: 0x8f858610  lw          $a1, -0x79F0($gp)
    ctx->pc = 0x1598d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x1598d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1598d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1598dc: 0xc04bfbc  jal         func_12FEF0
    ctx->pc = 0x1598DCu;
    SET_GPR_U32(ctx, 31, 0x1598E4u);
    ctx->pc = 0x1598E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598DCu;
    // 0x1598e0: 0x2484cf04  addiu       $a0, $a0, -0x30FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEF0u, 0x1598DCu, 0x1598E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598E4u;
label_1598e4:
    // 0x1598e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1598E4u;
    {
        const bool branch_taken_0x1598e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598E4u;
        // 0x1598e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598e4) {
            ctx->pc = 0x1598F8u;
            goto label_1598f8;
        }
    }
    ctx->pc = 0x1598ECu;
    // 0x1598ec: 0x0  nop
    ctx->pc = 0x1598ecu;
    // NOP
label_1598f0:
    // 0x1598f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1598f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598f4: 0x0  nop
    ctx->pc = 0x1598f4u;
    // NOP
label_1598f8:
    // 0x1598f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1598f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1598fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1598fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159900: 0x3e00008  jr          $ra
    ctx->pc = 0x159900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159900u;
        // 0x159904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159908u;
}
