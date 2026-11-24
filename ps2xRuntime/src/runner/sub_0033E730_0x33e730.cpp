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

// Function: sub_0033E730
// Address: 0x33e730 - 0x33e9e0
void sub_0033E730_0x33e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E730_0x33e730");
#endif

    switch (ctx->pc) {
        case 0x33e730u: goto label_33e730;
        case 0x33e734u: goto label_33e734;
        case 0x33e738u: goto label_33e738;
        case 0x33e73cu: goto label_33e73c;
        case 0x33e740u: goto label_33e740;
        case 0x33e744u: goto label_33e744;
        case 0x33e748u: goto label_33e748;
        case 0x33e74cu: goto label_33e74c;
        case 0x33e750u: goto label_33e750;
        case 0x33e754u: goto label_33e754;
        case 0x33e758u: goto label_33e758;
        case 0x33e75cu: goto label_33e75c;
        case 0x33e760u: goto label_33e760;
        case 0x33e764u: goto label_33e764;
        case 0x33e768u: goto label_33e768;
        case 0x33e76cu: goto label_33e76c;
        case 0x33e770u: goto label_33e770;
        case 0x33e774u: goto label_33e774;
        case 0x33e778u: goto label_33e778;
        case 0x33e77cu: goto label_33e77c;
        case 0x33e780u: goto label_33e780;
        case 0x33e784u: goto label_33e784;
        case 0x33e788u: goto label_33e788;
        case 0x33e78cu: goto label_33e78c;
        case 0x33e790u: goto label_33e790;
        case 0x33e794u: goto label_33e794;
        case 0x33e798u: goto label_33e798;
        case 0x33e79cu: goto label_33e79c;
        case 0x33e7a0u: goto label_33e7a0;
        case 0x33e7a4u: goto label_33e7a4;
        case 0x33e7a8u: goto label_33e7a8;
        case 0x33e7acu: goto label_33e7ac;
        case 0x33e7b0u: goto label_33e7b0;
        case 0x33e7b4u: goto label_33e7b4;
        case 0x33e7b8u: goto label_33e7b8;
        case 0x33e7bcu: goto label_33e7bc;
        case 0x33e7c0u: goto label_33e7c0;
        case 0x33e7c4u: goto label_33e7c4;
        case 0x33e7c8u: goto label_33e7c8;
        case 0x33e7ccu: goto label_33e7cc;
        case 0x33e7d0u: goto label_33e7d0;
        case 0x33e7d4u: goto label_33e7d4;
        case 0x33e7d8u: goto label_33e7d8;
        case 0x33e7dcu: goto label_33e7dc;
        case 0x33e7e0u: goto label_33e7e0;
        case 0x33e7e4u: goto label_33e7e4;
        case 0x33e7e8u: goto label_33e7e8;
        case 0x33e7ecu: goto label_33e7ec;
        case 0x33e7f0u: goto label_33e7f0;
        case 0x33e7f4u: goto label_33e7f4;
        case 0x33e7f8u: goto label_33e7f8;
        case 0x33e7fcu: goto label_33e7fc;
        case 0x33e800u: goto label_33e800;
        case 0x33e804u: goto label_33e804;
        case 0x33e808u: goto label_33e808;
        case 0x33e80cu: goto label_33e80c;
        case 0x33e810u: goto label_33e810;
        case 0x33e814u: goto label_33e814;
        case 0x33e818u: goto label_33e818;
        case 0x33e81cu: goto label_33e81c;
        case 0x33e820u: goto label_33e820;
        case 0x33e824u: goto label_33e824;
        case 0x33e828u: goto label_33e828;
        case 0x33e82cu: goto label_33e82c;
        case 0x33e830u: goto label_33e830;
        case 0x33e834u: goto label_33e834;
        case 0x33e838u: goto label_33e838;
        case 0x33e83cu: goto label_33e83c;
        case 0x33e840u: goto label_33e840;
        case 0x33e844u: goto label_33e844;
        case 0x33e848u: goto label_33e848;
        case 0x33e84cu: goto label_33e84c;
        case 0x33e850u: goto label_33e850;
        case 0x33e854u: goto label_33e854;
        case 0x33e858u: goto label_33e858;
        case 0x33e85cu: goto label_33e85c;
        case 0x33e860u: goto label_33e860;
        case 0x33e864u: goto label_33e864;
        case 0x33e868u: goto label_33e868;
        case 0x33e86cu: goto label_33e86c;
        case 0x33e870u: goto label_33e870;
        case 0x33e874u: goto label_33e874;
        case 0x33e878u: goto label_33e878;
        case 0x33e87cu: goto label_33e87c;
        case 0x33e880u: goto label_33e880;
        case 0x33e884u: goto label_33e884;
        case 0x33e888u: goto label_33e888;
        case 0x33e88cu: goto label_33e88c;
        case 0x33e890u: goto label_33e890;
        case 0x33e894u: goto label_33e894;
        case 0x33e898u: goto label_33e898;
        case 0x33e89cu: goto label_33e89c;
        case 0x33e8a0u: goto label_33e8a0;
        case 0x33e8a4u: goto label_33e8a4;
        case 0x33e8a8u: goto label_33e8a8;
        case 0x33e8acu: goto label_33e8ac;
        case 0x33e8b0u: goto label_33e8b0;
        case 0x33e8b4u: goto label_33e8b4;
        case 0x33e8b8u: goto label_33e8b8;
        case 0x33e8bcu: goto label_33e8bc;
        case 0x33e8c0u: goto label_33e8c0;
        case 0x33e8c4u: goto label_33e8c4;
        case 0x33e8c8u: goto label_33e8c8;
        case 0x33e8ccu: goto label_33e8cc;
        case 0x33e8d0u: goto label_33e8d0;
        case 0x33e8d4u: goto label_33e8d4;
        case 0x33e8d8u: goto label_33e8d8;
        case 0x33e8dcu: goto label_33e8dc;
        case 0x33e8e0u: goto label_33e8e0;
        case 0x33e8e4u: goto label_33e8e4;
        case 0x33e8e8u: goto label_33e8e8;
        case 0x33e8ecu: goto label_33e8ec;
        case 0x33e8f0u: goto label_33e8f0;
        case 0x33e8f4u: goto label_33e8f4;
        case 0x33e8f8u: goto label_33e8f8;
        case 0x33e8fcu: goto label_33e8fc;
        case 0x33e900u: goto label_33e900;
        case 0x33e904u: goto label_33e904;
        case 0x33e908u: goto label_33e908;
        case 0x33e90cu: goto label_33e90c;
        case 0x33e910u: goto label_33e910;
        case 0x33e914u: goto label_33e914;
        case 0x33e918u: goto label_33e918;
        case 0x33e91cu: goto label_33e91c;
        case 0x33e920u: goto label_33e920;
        case 0x33e924u: goto label_33e924;
        case 0x33e928u: goto label_33e928;
        case 0x33e92cu: goto label_33e92c;
        case 0x33e930u: goto label_33e930;
        case 0x33e934u: goto label_33e934;
        case 0x33e938u: goto label_33e938;
        case 0x33e93cu: goto label_33e93c;
        case 0x33e940u: goto label_33e940;
        case 0x33e944u: goto label_33e944;
        case 0x33e948u: goto label_33e948;
        case 0x33e94cu: goto label_33e94c;
        case 0x33e950u: goto label_33e950;
        case 0x33e954u: goto label_33e954;
        case 0x33e958u: goto label_33e958;
        case 0x33e95cu: goto label_33e95c;
        case 0x33e960u: goto label_33e960;
        case 0x33e964u: goto label_33e964;
        case 0x33e968u: goto label_33e968;
        case 0x33e96cu: goto label_33e96c;
        case 0x33e970u: goto label_33e970;
        case 0x33e974u: goto label_33e974;
        case 0x33e978u: goto label_33e978;
        case 0x33e97cu: goto label_33e97c;
        case 0x33e980u: goto label_33e980;
        case 0x33e984u: goto label_33e984;
        case 0x33e988u: goto label_33e988;
        case 0x33e98cu: goto label_33e98c;
        case 0x33e990u: goto label_33e990;
        case 0x33e994u: goto label_33e994;
        case 0x33e998u: goto label_33e998;
        case 0x33e99cu: goto label_33e99c;
        case 0x33e9a0u: goto label_33e9a0;
        case 0x33e9a4u: goto label_33e9a4;
        case 0x33e9a8u: goto label_33e9a8;
        case 0x33e9acu: goto label_33e9ac;
        case 0x33e9b0u: goto label_33e9b0;
        case 0x33e9b4u: goto label_33e9b4;
        case 0x33e9b8u: goto label_33e9b8;
        case 0x33e9bcu: goto label_33e9bc;
        case 0x33e9c0u: goto label_33e9c0;
        case 0x33e9c4u: goto label_33e9c4;
        case 0x33e9c8u: goto label_33e9c8;
        case 0x33e9ccu: goto label_33e9cc;
        case 0x33e9d0u: goto label_33e9d0;
        case 0x33e9d4u: goto label_33e9d4;
        case 0x33e9d8u: goto label_33e9d8;
        case 0x33e9dcu: goto label_33e9dc;
        default: break;
    }

    ctx->pc = 0x33e730u;

label_33e730:
    // 0x33e730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33e734:
    // 0x33e734: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_33e738:
    // 0x33e738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33e73c:
    // 0x33e73c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33e73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33e740:
    // 0x33e740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33e740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e744:
    // 0x33e744: 0xc097f7c  jal         func_25FDF0
label_33e748:
    if (ctx->pc == 0x33E748u) {
        ctx->pc = 0x33E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E744u;
        // 0x33e748: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E74Cu;
        goto label_33e74c;
    }
    ctx->pc = 0x33E744u;
    SET_GPR_U32(ctx, 31, 0x33E74Cu);
    ctx->pc = 0x33E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E744u;
    // 0x33e748: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDF0u, 0x33E744u, 0x33E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E74Cu;
label_33e74c:
    // 0x33e74c: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x33e74cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_33e750:
    // 0x33e750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33e750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e754:
    // 0x33e754: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33e754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e758:
    // 0x33e758: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x33e758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e75c:
    // 0x33e75c: 0x34420046  ori         $v0, $v0, 0x46
    ctx->pc = 0x33e75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
label_33e760:
    // 0x33e760: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x33e760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
label_33e764:
    // 0x33e764: 0xae2028d0  sw          $zero, 0x28D0($s1)
    ctx->pc = 0x33e764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10448), GPR_U32(ctx, 0));
label_33e768:
    // 0x33e768: 0xae2028d4  sw          $zero, 0x28D4($s1)
    ctx->pc = 0x33e768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10452), GPR_U32(ctx, 0));
label_33e76c:
    // 0x33e76c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x33e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33e770:
    // 0x33e770: 0xc060a74  jal         func_1829D0
label_33e774:
    if (ctx->pc == 0x33E774u) {
        ctx->pc = 0x33E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E770u;
        // 0x33e774: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E778u;
        goto label_33e778;
    }
    ctx->pc = 0x33E770u;
    SET_GPR_U32(ctx, 31, 0x33E778u);
    ctx->pc = 0x33E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E770u;
    // 0x33e774: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x33E770u, 0x33E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E778u;
label_33e778:
    // 0x33e778: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x33e778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_33e77c:
    // 0x33e77c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x33e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_33e780:
    // 0x33e780: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x33e780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_33e784:
    // 0x33e784: 0xc060b00  jal         func_182C00
label_33e788:
    if (ctx->pc == 0x33E788u) {
        ctx->pc = 0x33E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E784u;
        // 0x33e788: 0x3446fe01  ori         $a2, $v0, 0xFE01 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65025);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E78Cu;
        goto label_33e78c;
    }
    ctx->pc = 0x33E784u;
    SET_GPR_U32(ctx, 31, 0x33E78Cu);
    ctx->pc = 0x33E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E784u;
    // 0x33e788: 0x3446fe01  ori         $a2, $v0, 0xFE01 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x182C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182C00u, 0x33E784u, 0x33E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E78Cu;
label_33e78c:
    // 0x33e78c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x33e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33e790:
    // 0x33e790: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x33e790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_33e794:
    // 0x33e794: 0x3c0a0800  lui         $t2, 0x800
    ctx->pc = 0x33e794u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2048 << 16));
label_33e798:
    // 0x33e798: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33e798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_33e79c:
    // 0x33e79c: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x33e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_33e7a0:
    // 0x33e7a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33e7a4:
    // 0x33e7a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33e7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_33e7a8:
    // 0x33e7a8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x33e7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_33e7ac:
    // 0x33e7ac: 0x240800fe  addiu       $t0, $zero, 0xFE
    ctx->pc = 0x33e7acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_33e7b0:
    // 0x33e7b0: 0x8c69007c  lw          $t1, 0x7C($v1)
    ctx->pc = 0x33e7b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_33e7b4:
    // 0x33e7b4: 0x8d2322e4  lw          $v1, 0x22E4($t1)
    ctx->pc = 0x33e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8932)));
label_33e7b8:
    // 0x33e7b8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x33e7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_33e7bc:
    // 0x33e7bc: 0xad2322e4  sw          $v1, 0x22E4($t1)
    ctx->pc = 0x33e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8932), GPR_U32(ctx, 3));
label_33e7c0:
    // 0x33e7c0: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x33e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33e7c4:
    // 0x33e7c4: 0x8c69007c  lw          $t1, 0x7C($v1)
    ctx->pc = 0x33e7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_33e7c8:
    // 0x33e7c8: 0x8d2324d4  lw          $v1, 0x24D4($t1)
    ctx->pc = 0x33e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 9428)));
label_33e7cc:
    // 0x33e7cc: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x33e7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_33e7d0:
    // 0x33e7d0: 0xad2324d4  sw          $v1, 0x24D4($t1)
    ctx->pc = 0x33e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 9428), GPR_U32(ctx, 3));
label_33e7d4:
    // 0x33e7d4: 0xae2204c4  sw          $v0, 0x4C4($s1)
    ctx->pc = 0x33e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1220), GPR_U32(ctx, 2));
label_33e7d8:
    // 0x33e7d8: 0xae2204c8  sw          $v0, 0x4C8($s1)
    ctx->pc = 0x33e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1224), GPR_U32(ctx, 2));
label_33e7dc:
    // 0x33e7dc: 0xc050ed4  jal         func_143B50
label_33e7e0:
    if (ctx->pc == 0x33E7E0u) {
        ctx->pc = 0x33E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7DCu;
        // 0x33e7e0: 0xae2204cc  sw          $v0, 0x4CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E7E4u;
        goto label_33e7e4;
    }
    ctx->pc = 0x33E7DCu;
    SET_GPR_U32(ctx, 31, 0x33E7E4u);
    ctx->pc = 0x33E7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E7DCu;
    // 0x33e7e0: 0xae2204cc  sw          $v0, 0x4CC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1228), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x33E7DCu, 0x33E7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7E4u;
label_33e7e4:
    // 0x33e7e4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_33e7e8:
    if (ctx->pc == 0x33E7E8u) {
        ctx->pc = 0x33E7ECu;
        goto label_33e7ec;
    }
    ctx->pc = 0x33E7E4u;
    {
        const bool branch_taken_0x33e7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e7e4) {
            ctx->pc = 0x33E8A8u;
            goto label_33e8a8;
        }
    }
    ctx->pc = 0x33E7ECu;
label_33e7ec:
    // 0x33e7ec: 0x922608e8  lbu         $a2, 0x8E8($s1)
    ctx->pc = 0x33e7ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_33e7f0:
    // 0x33e7f0: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x33e7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_33e7f4:
    // 0x33e7f4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x33e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_33e7f8:
    // 0x33e7f8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x33e7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_33e7fc:
    // 0x33e7fc: 0x24e7c5e0  addiu       $a3, $a3, -0x3A20
    ctx->pc = 0x33e7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952416));
label_33e800:
    // 0x33e800: 0xc0b2fa4  jal         func_2CBE90
label_33e804:
    if (ctx->pc == 0x33E804u) {
        ctx->pc = 0x33E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E800u;
        // 0x33e804: 0x24080580  addiu       $t0, $zero, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E808u;
        goto label_33e808;
    }
    ctx->pc = 0x33E800u;
    SET_GPR_U32(ctx, 31, 0x33E808u);
    ctx->pc = 0x33E804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E800u;
    // 0x33e804: 0x24080580  addiu       $t0, $zero, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE90u, 0x33E800u, 0x33E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E808u;
label_33e808:
    // 0x33e808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33e808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e80c:
    // 0x33e80c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_33e810:
    if (ctx->pc == 0x33E810u) {
        ctx->pc = 0x33E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E80Cu;
        // 0x33e810: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E814u;
        goto label_33e814;
    }
    ctx->pc = 0x33E80Cu;
    {
        const bool branch_taken_0x33e80c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E80Cu;
        // 0x33e810: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e80c) {
            ctx->pc = 0x33E8A8u;
            goto label_33e8a8;
        }
    }
    ctx->pc = 0x33E814u;
label_33e814:
    // 0x33e814: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33e818:
    // 0x33e818: 0xa2030504  sb          $v1, 0x504($s0)
    ctx->pc = 0x33e818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1284), (uint8_t)GPR_U32(ctx, 3));
label_33e81c:
    // 0x33e81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33e820:
    // 0x33e820: 0xa2020162  sb          $v0, 0x162($s0)
    ctx->pc = 0x33e820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 354), (uint8_t)GPR_U32(ctx, 2));
label_33e824:
    // 0x33e824: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33e824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e828:
    // 0x33e828: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x33e828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_33e82c:
    // 0x33e82c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33e82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33e830:
    // 0x33e830: 0x320f809  jalr        $t9
label_33e834:
    if (ctx->pc == 0x33E834u) {
        ctx->pc = 0x33E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E830u;
        // 0x33e834: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E838u;
        goto label_33e838;
    }
    ctx->pc = 0x33E830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33E838u);
        ctx->pc = 0x33E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E830u;
        // 0x33e834: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E830u, 0x33E838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E838u;
label_33e838:
    // 0x33e838: 0x26240194  addiu       $a0, $s1, 0x194
    ctx->pc = 0x33e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 404));
label_33e83c:
    // 0x33e83c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e840:
    // 0x33e840: 0xc09ae58  jal         func_26B960
label_33e844:
    if (ctx->pc == 0x33E844u) {
        ctx->pc = 0x33E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E840u;
        // 0x33e844: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E848u;
        goto label_33e848;
    }
    ctx->pc = 0x33E840u;
    SET_GPR_U32(ctx, 31, 0x33E848u);
    ctx->pc = 0x33E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E840u;
    // 0x33e844: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B960u, 0x33E840u, 0x33E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E848u;
label_33e848:
    // 0x33e848: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x33e848u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_33e84c:
    // 0x33e84c: 0x26240194  addiu       $a0, $s1, 0x194
    ctx->pc = 0x33e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 404));
label_33e850:
    // 0x33e850: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x33e850u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_33e854:
    // 0x33e854: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x33e854u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_33e858:
    // 0x33e858: 0xc09ae2c  jal         func_26B8B0
label_33e85c:
    if (ctx->pc == 0x33E85Cu) {
        ctx->pc = 0x33E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E858u;
        // 0x33e85c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E860u;
        goto label_33e860;
    }
    ctx->pc = 0x33E858u;
    SET_GPR_U32(ctx, 31, 0x33E860u);
    ctx->pc = 0x33E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E858u;
    // 0x33e85c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B8B0u, 0x33E858u, 0x33E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E860u;
label_33e860:
    // 0x33e860: 0xa2000508  sb          $zero, 0x508($s0)
    ctx->pc = 0x33e860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1288), (uint8_t)GPR_U32(ctx, 0));
label_33e864:
    // 0x33e864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33e864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e868:
    // 0x33e868: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x33e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_33e86c:
    // 0x33e86c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x33e86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_33e870:
    // 0x33e870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33e870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33e874:
    // 0x33e874: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x33e874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33e878:
    // 0x33e878: 0x320f809  jalr        $t9
label_33e87c:
    if (ctx->pc == 0x33E87Cu) {
        ctx->pc = 0x33E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E878u;
        // 0x33e87c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E880u;
        goto label_33e880;
    }
    ctx->pc = 0x33E878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33E880u);
        ctx->pc = 0x33E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E878u;
        // 0x33e87c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E878u, 0x33E880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E880u;
label_33e880:
    // 0x33e880: 0xae300860  sw          $s0, 0x860($s1)
    ctx->pc = 0x33e880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2144), GPR_U32(ctx, 16));
label_33e884:
    // 0x33e884: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x33e884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_33e888:
    // 0x33e888: 0x87848324  lh          $a0, -0x7CDC($gp)
    ctx->pc = 0x33e888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935332)));
label_33e88c:
    // 0x33e88c: 0x93838326  lbu         $v1, -0x7CDA($gp)
    ctx->pc = 0x33e88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935334)));
label_33e890:
    // 0x33e890: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x33e890u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_33e894:
    // 0x33e894: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x33e894u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_33e898:
    // 0x33e898: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x33e898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_33e89c:
    // 0x33e89c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x33e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_33e8a0:
    // 0x33e8a0: 0x8063004c  lb          $v1, 0x4C($v1)
    ctx->pc = 0x33e8a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
label_33e8a4:
    // 0x33e8a4: 0xa203050e  sb          $v1, 0x50E($s0)
    ctx->pc = 0x33e8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1294), (uint8_t)GPR_U32(ctx, 3));
label_33e8a8:
    // 0x33e8a8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x33e8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_33e8ac:
    // 0x33e8ac: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x33e8acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_33e8b0:
    // 0x33e8b0: 0x24030497  addiu       $v1, $zero, 0x497
    ctx->pc = 0x33e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1175));
label_33e8b4:
    // 0x33e8b4: 0x14830044  bne         $a0, $v1, . + 4 + (0x44 << 2)
label_33e8b8:
    if (ctx->pc == 0x33E8B8u) {
        ctx->pc = 0x33E8BCu;
        goto label_33e8bc;
    }
    ctx->pc = 0x33E8B4u;
    {
        const bool branch_taken_0x33e8b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33e8b4) {
            ctx->pc = 0x33E9C8u;
            goto label_33e9c8;
        }
    }
    ctx->pc = 0x33E8BCu;
label_33e8bc:
    // 0x33e8bc: 0xc0d8d1c  jal         func_363470
label_33e8c0:
    if (ctx->pc == 0x33E8C0u) {
        ctx->pc = 0x33E8C4u;
        goto label_33e8c4;
    }
    ctx->pc = 0x33E8BCu;
    SET_GPR_U32(ctx, 31, 0x33E8C4u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x33E8BCu, 0x33E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E8C4u;
label_33e8c4:
    // 0x33e8c4: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x33e8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
label_33e8c8:
    // 0x33e8c8: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x33e8c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
label_33e8cc:
    // 0x33e8cc: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x33e8ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_33e8d0:
    // 0x33e8d0: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
label_33e8d4:
    if (ctx->pc == 0x33E8D4u) {
        ctx->pc = 0x33E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8D0u;
        // 0x33e8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E8D8u;
        goto label_33e8d8;
    }
    ctx->pc = 0x33E8D0u;
    {
        const bool branch_taken_0x33e8d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8D0u;
        // 0x33e8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8d0) {
            ctx->pc = 0x33E9C8u;
            goto label_33e9c8;
        }
    }
    ctx->pc = 0x33E8D8u;
label_33e8d8:
    // 0x33e8d8: 0xc096fb8  jal         func_25BEE0
label_33e8dc:
    if (ctx->pc == 0x33E8DCu) {
        ctx->pc = 0x33E8E0u;
        goto label_33e8e0;
    }
    ctx->pc = 0x33E8D8u;
    SET_GPR_U32(ctx, 31, 0x33E8E0u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x33E8D8u, 0x33E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E8E0u;
label_33e8e0:
    // 0x33e8e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e8e4:
    // 0x33e8e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e8e8:
    // 0x33e8e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33e8ec:
    // 0x33e8ec: 0xc0a9970  jal         func_2A65C0
label_33e8f0:
    if (ctx->pc == 0x33E8F0u) {
        ctx->pc = 0x33E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8ECu;
        // 0x33e8f0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E8F4u;
        goto label_33e8f4;
    }
    ctx->pc = 0x33E8ECu;
    SET_GPR_U32(ctx, 31, 0x33E8F4u);
    ctx->pc = 0x33E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E8ECu;
    // 0x33e8f0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65C0u, 0x33E8ECu, 0x33E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E8F4u;
label_33e8f4:
    // 0x33e8f4: 0xc096fb8  jal         func_25BEE0
label_33e8f8:
    if (ctx->pc == 0x33E8F8u) {
        ctx->pc = 0x33E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8F4u;
        // 0x33e8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E8FCu;
        goto label_33e8fc;
    }
    ctx->pc = 0x33E8F4u;
    SET_GPR_U32(ctx, 31, 0x33E8FCu);
    ctx->pc = 0x33E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E8F4u;
    // 0x33e8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x33E8F4u, 0x33E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E8FCu;
label_33e8fc:
    // 0x33e8fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33e8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e900:
    // 0x33e900: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33e900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e904:
    // 0x33e904: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33e904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33e908:
    // 0x33e908: 0xc0a9968  jal         func_2A65A0
label_33e90c:
    if (ctx->pc == 0x33E90Cu) {
        ctx->pc = 0x33E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E908u;
        // 0x33e90c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E910u;
        goto label_33e910;
    }
    ctx->pc = 0x33E908u;
    SET_GPR_U32(ctx, 31, 0x33E910u);
    ctx->pc = 0x33E90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E908u;
    // 0x33e90c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x33E908u, 0x33E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E910u;
label_33e910:
    // 0x33e910: 0x8e242960  lw          $a0, 0x2960($s1)
    ctx->pc = 0x33e910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10592)));
label_33e914:
    // 0x33e914: 0xc096c3c  jal         func_25B0F0
label_33e918:
    if (ctx->pc == 0x33E918u) {
        ctx->pc = 0x33E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E914u;
        // 0x33e918: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E91Cu;
        goto label_33e91c;
    }
    ctx->pc = 0x33E914u;
    SET_GPR_U32(ctx, 31, 0x33E91Cu);
    ctx->pc = 0x33E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E914u;
    // 0x33e918: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x33E914u, 0x33E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E91Cu;
label_33e91c:
    // 0x33e91c: 0xae302960  sw          $s0, 0x2960($s1)
    ctx->pc = 0x33e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10592), GPR_U32(ctx, 16));
label_33e920:
    // 0x33e920: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x33e920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_33e924:
    // 0x33e924: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_33e928:
    if (ctx->pc == 0x33E928u) {
        ctx->pc = 0x33E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E924u;
        // 0x33e928: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E92Cu;
        goto label_33e92c;
    }
    ctx->pc = 0x33E924u;
    {
        const bool branch_taken_0x33e924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E924u;
        // 0x33e928: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e924) {
            ctx->pc = 0x33E938u;
            goto label_33e938;
        }
    }
    ctx->pc = 0x33E92Cu;
label_33e92c:
    // 0x33e92c: 0xc0a8574  jal         func_2A15D0
label_33e930:
    if (ctx->pc == 0x33E930u) {
        ctx->pc = 0x33E934u;
        goto label_33e934;
    }
    ctx->pc = 0x33E92Cu;
    SET_GPR_U32(ctx, 31, 0x33E934u);
    ctx->pc = 0x2A15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A15D0u, 0x33E92Cu, 0x33E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E934u;
label_33e934:
    // 0x33e934: 0x0  nop
    ctx->pc = 0x33e934u;
    // NOP
label_33e938:
    // 0x33e938: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33e938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e93c:
    // 0x33e93c: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x33e93cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_33e940:
    // 0x33e940: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x33e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_33e944:
    // 0x33e944: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33e948:
    if (ctx->pc == 0x33E948u) {
        ctx->pc = 0x33E94Cu;
        goto label_33e94c;
    }
    ctx->pc = 0x33E944u;
    {
        const bool branch_taken_0x33e944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e944) {
            ctx->pc = 0x33E960u;
            goto label_33e960;
        }
    }
    ctx->pc = 0x33E94Cu;
label_33e94c:
    // 0x33e94c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x33e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_33e950:
    // 0x33e950: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_33e954:
    if (ctx->pc == 0x33E954u) {
        ctx->pc = 0x33E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E950u;
        // 0x33e954: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E958u;
        goto label_33e958;
    }
    ctx->pc = 0x33E950u;
    {
        const bool branch_taken_0x33e950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E950u;
        // 0x33e954: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e950) {
            ctx->pc = 0x33E960u;
            goto label_33e960;
        }
    }
    ctx->pc = 0x33E958u;
label_33e958:
    // 0x33e958: 0xc0a8574  jal         func_2A15D0
label_33e95c:
    if (ctx->pc == 0x33E95Cu) {
        ctx->pc = 0x33E960u;
        goto label_33e960;
    }
    ctx->pc = 0x33E958u;
    SET_GPR_U32(ctx, 31, 0x33E960u);
    ctx->pc = 0x2A15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A15D0u, 0x33E958u, 0x33E960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E960u;
label_33e960:
    // 0x33e960: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33e960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33e964:
    // 0x33e964: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x33e964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_33e968:
    // 0x33e968: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_33e96c:
    if (ctx->pc == 0x33E96Cu) {
        ctx->pc = 0x33E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E968u;
        // 0x33e96c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E970u;
        goto label_33e970;
    }
    ctx->pc = 0x33E968u;
    {
        const bool branch_taken_0x33e968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E968u;
        // 0x33e96c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e968) {
            ctx->pc = 0x33E940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e940;
        }
    }
    ctx->pc = 0x33E970u;
label_33e970:
    // 0x33e970: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x33e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_33e974:
    // 0x33e974: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33e974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e978:
    // 0x33e978: 0xc069000  jal         func_1A4000
label_33e97c:
    if (ctx->pc == 0x33E97Cu) {
        ctx->pc = 0x33E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E978u;
        // 0x33e97c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E980u;
        goto label_33e980;
    }
    ctx->pc = 0x33E978u;
    SET_GPR_U32(ctx, 31, 0x33E980u);
    ctx->pc = 0x33E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E978u;
    // 0x33e97c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4000u, 0x33E978u, 0x33E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E980u;
label_33e980:
    // 0x33e980: 0xc068fe0  jal         func_1A3F80
label_33e984:
    if (ctx->pc == 0x33E984u) {
        ctx->pc = 0x33E988u;
        goto label_33e988;
    }
    ctx->pc = 0x33E980u;
    SET_GPR_U32(ctx, 31, 0x33E988u);
    ctx->pc = 0x1A3F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F80u, 0x33E980u, 0x33E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E988u;
label_33e988:
    // 0x33e988: 0xc069078  jal         func_1A41E0
label_33e98c:
    if (ctx->pc == 0x33E98Cu) {
        ctx->pc = 0x33E990u;
        goto label_33e990;
    }
    ctx->pc = 0x33E988u;
    SET_GPR_U32(ctx, 31, 0x33E990u);
    ctx->pc = 0x1A41E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41E0u, 0x33E988u, 0x33E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E990u;
label_33e990:
    // 0x33e990: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33e990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_33e994:
    // 0x33e994: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33e994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e998:
    // 0x33e998: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x33e998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
label_33e99c:
    // 0x33e99c: 0xc0cea70  jal         func_33A9C0
label_33e9a0:
    if (ctx->pc == 0x33E9A0u) {
        ctx->pc = 0x33E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E99Cu;
        // 0x33e9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E9A4u;
        goto label_33e9a4;
    }
    ctx->pc = 0x33E99Cu;
    SET_GPR_U32(ctx, 31, 0x33E9A4u);
    ctx->pc = 0x33E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E99Cu;
    // 0x33e9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A9C0u, 0x33E99Cu, 0x33E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E9A4u;
label_33e9a4:
    // 0x33e9a4: 0x8e2406cc  lw          $a0, 0x6CC($s1)
    ctx->pc = 0x33e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_33e9a8:
    // 0x33e9a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e9ac:
    // 0x33e9ac: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x33e9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_33e9b0:
    // 0x33e9b0: 0xae2406cc  sw          $a0, 0x6CC($s1)
    ctx->pc = 0x33e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 4));
label_33e9b4:
    // 0x33e9b4: 0x8e2406cc  lw          $a0, 0x6CC($s1)
    ctx->pc = 0x33e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_33e9b8:
    // 0x33e9b8: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x33e9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_33e9bc:
    // 0x33e9bc: 0xae2406cc  sw          $a0, 0x6CC($s1)
    ctx->pc = 0x33e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 4));
label_33e9c0:
    // 0x33e9c0: 0xa2232ad8  sb          $v1, 0x2AD8($s1)
    ctx->pc = 0x33e9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10968), (uint8_t)GPR_U32(ctx, 3));
label_33e9c4:
    // 0x33e9c4: 0x0  nop
    ctx->pc = 0x33e9c4u;
    // NOP
label_33e9c8:
    // 0x33e9c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33e9cc:
    // 0x33e9cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33e9d0:
    // 0x33e9d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33e9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33e9d4:
    // 0x33e9d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33e9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33e9d8:
    // 0x33e9d8: 0x3e00008  jr          $ra
label_33e9dc:
    if (ctx->pc == 0x33E9DCu) {
        ctx->pc = 0x33E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9D8u;
        // 0x33e9dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E9E0u;
        goto label_fallthrough_0x33e9d8;
    }
    ctx->pc = 0x33E9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9D8u;
        // 0x33e9dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33e9d8:
    ctx->pc = 0x33E9E0u;
}
