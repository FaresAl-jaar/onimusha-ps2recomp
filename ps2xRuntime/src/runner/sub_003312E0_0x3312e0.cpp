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

// Function: sub_003312E0
// Address: 0x3312e0 - 0x331454
void sub_003312E0_0x3312e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003312E0_0x3312e0");
#endif

    switch (ctx->pc) {
        case 0x331330u: goto label_331330;
        case 0x33138cu: goto label_33138c;
        case 0x3313c8u: goto label_3313c8;
        case 0x3313fcu: goto label_3313fc;
        case 0x331430u: goto label_331430;
        default: break;
    }

    ctx->pc = 0x3312e0u;

    // 0x3312e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3312e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3312e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3312e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3312e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3312e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3312ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3312ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3312f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3312f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3312f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3312f8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3312f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3312fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x331300: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x331300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x331304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x331308: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x331308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33130c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x331310: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x331310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x331314: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x331314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x331318: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x331318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33131c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x33131Cu;
    {
        const bool branch_taken_0x33131c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33131Cu;
        // 0x331320: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33131c) {
            ctx->pc = 0x331430u;
            goto label_331430;
        }
    }
    ctx->pc = 0x331324u;
    // 0x331324: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x331324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x331328: 0xc0bd174  jal         func_2F45D0
    ctx->pc = 0x331328u;
    SET_GPR_U32(ctx, 31, 0x331330u);
    ctx->pc = 0x33132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331328u;
    // 0x33132c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45D0u, 0x331328u, 0x331330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331330u;
label_331330:
    // 0x331330: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331334: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x331334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x331338: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x331338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33133c: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x33133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x331340: 0x8024172e  lb          $a0, 0x172E($at)
    ctx->pc = 0x331340u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x92172Eu));
    // 0x331344: 0x246315bd  addiu       $v1, $v1, 0x15BD
    ctx->pc = 0x331344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5565));
    // 0x331348: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x331348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33134c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x331350: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x331350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331354: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x331354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x331358: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x331358u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x33135c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x331360: 0x14820027  bne         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x331360u;
    {
        const bool branch_taken_0x331360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x331364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331360u;
        // 0x331364: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331360) {
            ctx->pc = 0x331400u;
            goto label_331400;
        }
    }
    ctx->pc = 0x331368u;
    // 0x331368: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x331368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x33136c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x331370: 0x244215d0  addiu       $v0, $v0, 0x15D0
    ctx->pc = 0x331370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5584));
    // 0x331374: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x331374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331378: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x331378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33137c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x331380: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x331380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x331384: 0xc0bd174  jal         func_2F45D0
    ctx->pc = 0x331384u;
    SET_GPR_U32(ctx, 31, 0x33138Cu);
    ctx->pc = 0x331388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331384u;
    // 0x331388: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45D0u, 0x331384u, 0x33138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33138Cu;
label_33138c:
    // 0x33138c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33138cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331390: 0x250082a  slt         $at, $s2, $s0
    ctx->pc = 0x331390u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x331394: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x331394u;
    {
        const bool branch_taken_0x331394 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x331398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331394u;
        // 0x331398: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331394) {
            ctx->pc = 0x3313C8u;
            goto label_3313c8;
        }
    }
    ctx->pc = 0x33139Cu;
    // 0x33139c: 0x26a20008  addiu       $v0, $s5, 0x8
    ctx->pc = 0x33139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x3313a0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3313a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3313a4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3313a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3313a8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3313a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3313ac: 0x3286ffff  andi        $a2, $s4, 0xFFFF
    ctx->pc = 0x3313acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x3313b0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3313b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3313b4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3313b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3313b8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3313b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3313bc: 0x2529ce00  addiu       $t1, $t1, -0x3200
    ctx->pc = 0x3313bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954496));
    // 0x3313c0: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3313C0u;
    SET_GPR_U32(ctx, 31, 0x3313C8u);
    ctx->pc = 0x3313C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313C0u;
    // 0x3313c4: 0x64110005  daddiu      $s1, $zero, 0x5 (Delay Slot)
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3313C0u, 0x3313C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313C8u;
label_3313c8:
    // 0x3313c8: 0x212082a  slt         $at, $s0, $s2
    ctx->pc = 0x3313c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3313cc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3313CCu;
    {
        const bool branch_taken_0x3313cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3313D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313CCu;
        // 0x3313d0: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3313cc) {
            ctx->pc = 0x331400u;
            goto label_331400;
        }
    }
    ctx->pc = 0x3313D4u;
    // 0x3313d4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3313d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3313d8: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3313d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3313dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3313dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3313e0: 0x3286ffff  andi        $a2, $s4, 0xFFFF
    ctx->pc = 0x3313e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x3313e4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3313e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3313e8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3313e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3313ec: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3313ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3313f0: 0x2529ce08  addiu       $t1, $t1, -0x31F8
    ctx->pc = 0x3313f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954504));
    // 0x3313f4: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3313F4u;
    SET_GPR_U32(ctx, 31, 0x3313FCu);
    ctx->pc = 0x3313F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313F4u;
    // 0x3313f8: 0x64110002  daddiu      $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3313F4u, 0x3313FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313FCu;
label_3313fc:
    // 0x3313fc: 0x0  nop
    ctx->pc = 0x3313fcu;
    // NOP
label_331400:
    // 0x331400: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x331400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x331404: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x331404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x331408: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x331408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33140c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33140cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x331410: 0x3286ffff  andi        $a2, $s4, 0xFFFF
    ctx->pc = 0x331410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x331414: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x331414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x331418: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x331418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33141c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x33141cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331420: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x331420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x331424: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x331424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x331428: 0xc095f88  jal         func_257E20
    ctx->pc = 0x331428u;
    SET_GPR_U32(ctx, 31, 0x331430u);
    ctx->pc = 0x33142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331428u;
    // 0x33142c: 0x2529ce10  addiu       $t1, $t1, -0x31F0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x331428u, 0x331430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331430u;
label_331430:
    // 0x331430: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x331430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x331434: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x331434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331438: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x331438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33143c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33143cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33144c: 0x3e00008  jr          $ra
    ctx->pc = 0x33144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33144Cu;
        // 0x331450: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331454u;
}
