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

// Function: sub_00236778
// Address: 0x236778 - 0x2368c4
void sub_00236778_0x236778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236778_0x236778");
#endif

    switch (ctx->pc) {
        case 0x236778u: goto label_236778;
        case 0x23677cu: goto label_23677c;
        case 0x236780u: goto label_236780;
        case 0x236784u: goto label_236784;
        case 0x236788u: goto label_236788;
        case 0x23678cu: goto label_23678c;
        case 0x236790u: goto label_236790;
        case 0x236794u: goto label_236794;
        case 0x236798u: goto label_236798;
        case 0x23679cu: goto label_23679c;
        case 0x2367a0u: goto label_2367a0;
        case 0x2367a4u: goto label_2367a4;
        case 0x2367a8u: goto label_2367a8;
        case 0x2367acu: goto label_2367ac;
        case 0x2367b0u: goto label_2367b0;
        case 0x2367b4u: goto label_2367b4;
        case 0x2367b8u: goto label_2367b8;
        case 0x2367bcu: goto label_2367bc;
        case 0x2367c0u: goto label_2367c0;
        case 0x2367c4u: goto label_2367c4;
        case 0x2367c8u: goto label_2367c8;
        case 0x2367ccu: goto label_2367cc;
        case 0x2367d0u: goto label_2367d0;
        case 0x2367d4u: goto label_2367d4;
        case 0x2367d8u: goto label_2367d8;
        case 0x2367dcu: goto label_2367dc;
        case 0x2367e0u: goto label_2367e0;
        case 0x2367e4u: goto label_2367e4;
        case 0x2367e8u: goto label_2367e8;
        case 0x2367ecu: goto label_2367ec;
        case 0x2367f0u: goto label_2367f0;
        case 0x2367f4u: goto label_2367f4;
        case 0x2367f8u: goto label_2367f8;
        case 0x2367fcu: goto label_2367fc;
        case 0x236800u: goto label_236800;
        case 0x236804u: goto label_236804;
        case 0x236808u: goto label_236808;
        case 0x23680cu: goto label_23680c;
        case 0x236810u: goto label_236810;
        case 0x236814u: goto label_236814;
        case 0x236818u: goto label_236818;
        case 0x23681cu: goto label_23681c;
        case 0x236820u: goto label_236820;
        case 0x236824u: goto label_236824;
        case 0x236828u: goto label_236828;
        case 0x23682cu: goto label_23682c;
        case 0x236830u: goto label_236830;
        case 0x236834u: goto label_236834;
        case 0x236838u: goto label_236838;
        case 0x23683cu: goto label_23683c;
        case 0x236840u: goto label_236840;
        case 0x236844u: goto label_236844;
        case 0x236848u: goto label_236848;
        case 0x23684cu: goto label_23684c;
        case 0x236850u: goto label_236850;
        case 0x236854u: goto label_236854;
        case 0x236858u: goto label_236858;
        case 0x23685cu: goto label_23685c;
        case 0x236860u: goto label_236860;
        case 0x236864u: goto label_236864;
        case 0x236868u: goto label_236868;
        case 0x23686cu: goto label_23686c;
        case 0x236870u: goto label_236870;
        case 0x236874u: goto label_236874;
        case 0x236878u: goto label_236878;
        case 0x23687cu: goto label_23687c;
        case 0x236880u: goto label_236880;
        case 0x236884u: goto label_236884;
        case 0x236888u: goto label_236888;
        case 0x23688cu: goto label_23688c;
        case 0x236890u: goto label_236890;
        case 0x236894u: goto label_236894;
        case 0x236898u: goto label_236898;
        case 0x23689cu: goto label_23689c;
        case 0x2368a0u: goto label_2368a0;
        case 0x2368a4u: goto label_2368a4;
        case 0x2368a8u: goto label_2368a8;
        case 0x2368acu: goto label_2368ac;
        case 0x2368b0u: goto label_2368b0;
        case 0x2368b4u: goto label_2368b4;
        case 0x2368b8u: goto label_2368b8;
        case 0x2368bcu: goto label_2368bc;
        case 0x2368c0u: goto label_2368c0;
        default: break;
    }

    ctx->pc = 0x236778u;

label_236778:
    // 0x236778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23677c:
    // 0x23677c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_236780:
    // 0x236780: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x236780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_236784:
    // 0x236784: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x236784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236788:
    // 0x236788: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x236788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_23678c:
    // 0x23678c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23678cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236790:
    // 0x236790: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x236790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_236794:
    // 0x236794: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x236794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_236798:
    // 0x236798: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x236798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_23679c:
    // 0x23679c: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x23679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_2367a0:
    // 0x2367a0: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x2367a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2367a4:
    // 0x2367a4: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x2367a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2367a8:
    // 0x2367a8: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_2367ac:
    if (ctx->pc == 0x2367ACu) {
        ctx->pc = 0x2367ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367A8u;
        // 0x2367ac: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367B0u;
        goto label_2367b0;
    }
    ctx->pc = 0x2367A8u;
    {
        const bool branch_taken_0x2367a8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2367ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367A8u;
        // 0x2367ac: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2367a8) {
            ctx->pc = 0x236814u;
            goto label_236814;
        }
    }
    ctx->pc = 0x2367B0u;
label_2367b0:
    // 0x2367b0: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x2367b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2367b4:
    // 0x2367b4: 0x0  nop
    ctx->pc = 0x2367b4u;
    // NOP
label_2367b8:
    // 0x2367b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2367b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2367bc:
    // 0x2367bc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x2367bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_2367c0:
    // 0x2367c0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2367c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2367c4:
    // 0x2367c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2367c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2367c8:
    // 0x2367c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2367c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2367cc:
    // 0x2367cc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2367ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2367d0:
    // 0x2367d0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2367d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2367d4:
    // 0x2367d4: 0x40f809  jalr        $v0
label_2367d8:
    if (ctx->pc == 0x2367D8u) {
        ctx->pc = 0x2367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D4u;
        // 0x2367d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2367DCu;
        goto label_2367dc;
    }
    ctx->pc = 0x2367D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2367DCu);
        ctx->pc = 0x2367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367D4u;
        // 0x2367d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2367D4u, 0x2367DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2367DCu;
label_2367dc:
    // 0x2367dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2367dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2367e0:
    // 0x2367e0: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2367e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2367e4:
    // 0x2367e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2367e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2367e8:
    // 0x2367e8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2367e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2367ec:
    // 0x2367ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2367ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2367f0:
    // 0x2367f0: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x2367f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2367f4:
    // 0x2367f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2367f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2367f8:
    // 0x2367f8: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x2367f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_2367fc:
    // 0x2367fc: 0x60f809  jalr        $v1
label_236800:
    if (ctx->pc == 0x236800u) {
        ctx->pc = 0x236800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367FCu;
        // 0x236800: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236804u;
        goto label_236804;
    }
    ctx->pc = 0x2367FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236804u);
        ctx->pc = 0x236800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2367FCu;
        // 0x236800: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2367FCu, 0x236804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236804u;
label_236804:
    // 0x236804: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x236804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_236808:
    // 0x236808: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x236808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23680c:
    // 0x23680c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_236810:
    if (ctx->pc == 0x236810u) {
        ctx->pc = 0x236810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23680Cu;
        // 0x236810: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236814u;
        goto label_236814;
    }
    ctx->pc = 0x23680Cu;
    {
        const bool branch_taken_0x23680c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23680Cu;
        // 0x236810: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23680c) {
            ctx->pc = 0x2367B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2367b8;
        }
    }
    ctx->pc = 0x236814u;
label_236814:
    // 0x236814: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x236814u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_236818:
    // 0x236818: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x236818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23681c:
    // 0x23681c: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x23681cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_236820:
    // 0x236820: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x236820u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_236824:
    // 0x236824: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
label_236828:
    if (ctx->pc == 0x236828u) {
        ctx->pc = 0x236828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236824u;
        // 0x236828: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23682Cu;
        goto label_23682c;
    }
    ctx->pc = 0x236824u;
    {
        const bool branch_taken_0x236824 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x236828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236824u;
        // 0x236828: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236824) {
            ctx->pc = 0x2368A8u;
            goto label_2368a8;
        }
    }
    ctx->pc = 0x23682Cu;
label_23682c:
    // 0x23682c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x23682cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_236830:
    // 0x236830: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_236834:
    if (ctx->pc == 0x236834u) {
        ctx->pc = 0x236834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236830u;
        // 0x236834: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236838u;
        goto label_236838;
    }
    ctx->pc = 0x236830u;
    {
        const bool branch_taken_0x236830 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x236834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236830u;
        // 0x236834: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236830) {
            ctx->pc = 0x236898u;
            goto label_236898;
        }
    }
    ctx->pc = 0x236838u;
label_236838:
    // 0x236838: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x236838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_23683c:
    // 0x23683c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23683cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236840:
    // 0x236840: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x236840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236844:
    // 0x236844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236848:
    // 0x236848: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x236848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23684c:
    // 0x23684c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_236850:
    // 0x236850: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x236850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_236854:
    // 0x236854: 0x40f809  jalr        $v0
label_236858:
    if (ctx->pc == 0x236858u) {
        ctx->pc = 0x236858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236854u;
        // 0x236858: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23685Cu;
        goto label_23685c;
    }
    ctx->pc = 0x236854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23685Cu);
        ctx->pc = 0x236858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236854u;
        // 0x236858: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236854u, 0x23685Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23685Cu;
label_23685c:
    // 0x23685c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236860:
    // 0x236860: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x236860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_236864:
    // 0x236864: 0xc049590  jal         func_125640
label_236868:
    if (ctx->pc == 0x236868u) {
        ctx->pc = 0x236868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236864u;
        // 0x236868: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23686Cu;
        goto label_23686c;
    }
    ctx->pc = 0x236864u;
    SET_GPR_U32(ctx, 31, 0x23686Cu);
    ctx->pc = 0x236868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236864u;
    // 0x236868: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x236864u, 0x23686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23686Cu;
label_23686c:
    // 0x23686c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23686cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236870:
    // 0x236870: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236874:
    // 0x236874: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x236874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236878:
    // 0x236878: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x236878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23687c:
    // 0x23687c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x23687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_236880:
    // 0x236880: 0x60f809  jalr        $v1
label_236884:
    if (ctx->pc == 0x236884u) {
        ctx->pc = 0x236884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236880u;
        // 0x236884: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236888u;
        goto label_236888;
    }
    ctx->pc = 0x236880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236888u);
        ctx->pc = 0x236884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236880u;
        // 0x236884: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236880u, 0x236888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236888u;
label_236888:
    // 0x236888: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x236888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_23688c:
    // 0x23688c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x23688cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_236890:
    // 0x236890: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_236894:
    if (ctx->pc == 0x236894u) {
        ctx->pc = 0x236894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236890u;
        // 0x236894: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236898u;
        goto label_236898;
    }
    ctx->pc = 0x236890u;
    {
        const bool branch_taken_0x236890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236890) {
            ctx->pc = 0x236894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236890u;
            // 0x236894: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236840;
        }
    }
    ctx->pc = 0x236898u;
label_236898:
    // 0x236898: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x236898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_23689c:
    // 0x23689c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x23689cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2368a0:
    // 0x2368a0: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x2368a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_2368a4:
    // 0x2368a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2368a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2368a8:
    // 0x2368a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2368a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2368ac:
    // 0x2368ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2368acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2368b0:
    // 0x2368b0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2368b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2368b4:
    // 0x2368b4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2368b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2368b8:
    // 0x2368b8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2368b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2368bc:
    // 0x2368bc: 0x3e00008  jr          $ra
label_2368c0:
    if (ctx->pc == 0x2368C0u) {
        ctx->pc = 0x2368C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368BCu;
        // 0x2368c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368C4u;
        goto label_fallthrough_0x2368bc;
    }
    ctx->pc = 0x2368BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2368C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368BCu;
        // 0x2368c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2368BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2368bc:
    ctx->pc = 0x2368C4u;
}
