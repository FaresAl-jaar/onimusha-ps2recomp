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

// Function: sub_00346750
// Address: 0x346750 - 0x3468e8
void sub_00346750_0x346750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346750_0x346750");
#endif

    switch (ctx->pc) {
        case 0x346750u: goto label_346750;
        case 0x346754u: goto label_346754;
        case 0x346758u: goto label_346758;
        case 0x34675cu: goto label_34675c;
        case 0x346760u: goto label_346760;
        case 0x346764u: goto label_346764;
        case 0x346768u: goto label_346768;
        case 0x34676cu: goto label_34676c;
        case 0x346770u: goto label_346770;
        case 0x346774u: goto label_346774;
        case 0x346778u: goto label_346778;
        case 0x34677cu: goto label_34677c;
        case 0x346780u: goto label_346780;
        case 0x346784u: goto label_346784;
        case 0x346788u: goto label_346788;
        case 0x34678cu: goto label_34678c;
        case 0x346790u: goto label_346790;
        case 0x346794u: goto label_346794;
        case 0x346798u: goto label_346798;
        case 0x34679cu: goto label_34679c;
        case 0x3467a0u: goto label_3467a0;
        case 0x3467a4u: goto label_3467a4;
        case 0x3467a8u: goto label_3467a8;
        case 0x3467acu: goto label_3467ac;
        case 0x3467b0u: goto label_3467b0;
        case 0x3467b4u: goto label_3467b4;
        case 0x3467b8u: goto label_3467b8;
        case 0x3467bcu: goto label_3467bc;
        case 0x3467c0u: goto label_3467c0;
        case 0x3467c4u: goto label_3467c4;
        case 0x3467c8u: goto label_3467c8;
        case 0x3467ccu: goto label_3467cc;
        case 0x3467d0u: goto label_3467d0;
        case 0x3467d4u: goto label_3467d4;
        case 0x3467d8u: goto label_3467d8;
        case 0x3467dcu: goto label_3467dc;
        case 0x3467e0u: goto label_3467e0;
        case 0x3467e4u: goto label_3467e4;
        case 0x3467e8u: goto label_3467e8;
        case 0x3467ecu: goto label_3467ec;
        case 0x3467f0u: goto label_3467f0;
        case 0x3467f4u: goto label_3467f4;
        case 0x3467f8u: goto label_3467f8;
        case 0x3467fcu: goto label_3467fc;
        case 0x346800u: goto label_346800;
        case 0x346804u: goto label_346804;
        case 0x346808u: goto label_346808;
        case 0x34680cu: goto label_34680c;
        case 0x346810u: goto label_346810;
        case 0x346814u: goto label_346814;
        case 0x346818u: goto label_346818;
        case 0x34681cu: goto label_34681c;
        case 0x346820u: goto label_346820;
        case 0x346824u: goto label_346824;
        case 0x346828u: goto label_346828;
        case 0x34682cu: goto label_34682c;
        case 0x346830u: goto label_346830;
        case 0x346834u: goto label_346834;
        case 0x346838u: goto label_346838;
        case 0x34683cu: goto label_34683c;
        case 0x346840u: goto label_346840;
        case 0x346844u: goto label_346844;
        case 0x346848u: goto label_346848;
        case 0x34684cu: goto label_34684c;
        case 0x346850u: goto label_346850;
        case 0x346854u: goto label_346854;
        case 0x346858u: goto label_346858;
        case 0x34685cu: goto label_34685c;
        case 0x346860u: goto label_346860;
        case 0x346864u: goto label_346864;
        case 0x346868u: goto label_346868;
        case 0x34686cu: goto label_34686c;
        case 0x346870u: goto label_346870;
        case 0x346874u: goto label_346874;
        case 0x346878u: goto label_346878;
        case 0x34687cu: goto label_34687c;
        case 0x346880u: goto label_346880;
        case 0x346884u: goto label_346884;
        case 0x346888u: goto label_346888;
        case 0x34688cu: goto label_34688c;
        case 0x346890u: goto label_346890;
        case 0x346894u: goto label_346894;
        case 0x346898u: goto label_346898;
        case 0x34689cu: goto label_34689c;
        case 0x3468a0u: goto label_3468a0;
        case 0x3468a4u: goto label_3468a4;
        case 0x3468a8u: goto label_3468a8;
        case 0x3468acu: goto label_3468ac;
        case 0x3468b0u: goto label_3468b0;
        case 0x3468b4u: goto label_3468b4;
        case 0x3468b8u: goto label_3468b8;
        case 0x3468bcu: goto label_3468bc;
        case 0x3468c0u: goto label_3468c0;
        case 0x3468c4u: goto label_3468c4;
        case 0x3468c8u: goto label_3468c8;
        case 0x3468ccu: goto label_3468cc;
        case 0x3468d0u: goto label_3468d0;
        case 0x3468d4u: goto label_3468d4;
        case 0x3468d8u: goto label_3468d8;
        case 0x3468dcu: goto label_3468dc;
        case 0x3468e0u: goto label_3468e0;
        case 0x3468e4u: goto label_3468e4;
        default: break;
    }

    ctx->pc = 0x346750u;

label_346750:
    // 0x346750: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x346750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_346754:
    // 0x346754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x346754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_346758:
    // 0x346758: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x346758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_34675c:
    // 0x34675c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34675cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_346760:
    // 0x346760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346764:
    // 0x346764: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x346764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_346768:
    // 0x346768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34676c:
    // 0x34676c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x34676cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_346770:
    // 0x346770: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x346770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_346774:
    // 0x346774: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x346774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_346778:
    // 0x346778: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x346778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34677c:
    // 0x34677c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34677cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346780:
    // 0x346780: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x346780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346784:
    // 0x346784: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x346784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346788:
    // 0x346788: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x346788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_34678c:
    // 0x34678c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x34678cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_346790:
    // 0x346790: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x346790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_346794:
    // 0x346794: 0xc0a4408  jal         func_291020
label_346798:
    if (ctx->pc == 0x346798u) {
        ctx->pc = 0x346798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346794u;
        // 0x346798: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34679Cu;
        goto label_34679c;
    }
    ctx->pc = 0x346794u;
    SET_GPR_U32(ctx, 31, 0x34679Cu);
    ctx->pc = 0x346798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346794u;
    // 0x346798: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x346794u, 0x34679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34679Cu;
label_34679c:
    // 0x34679c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3467a0:
    // 0x3467a0: 0xc0a43fc  jal         func_290FF0
label_3467a4:
    if (ctx->pc == 0x3467A4u) {
        ctx->pc = 0x3467A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467A0u;
        // 0x3467a4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3467A8u;
        goto label_3467a8;
    }
    ctx->pc = 0x3467A0u;
    SET_GPR_U32(ctx, 31, 0x3467A8u);
    ctx->pc = 0x3467A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3467A0u;
    // 0x3467a4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3467A0u, 0x3467A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467A8u;
label_3467a8:
    // 0x3467a8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3467a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3467ac:
    // 0x3467ac: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3467acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3467b0:
    // 0x3467b0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3467b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3467b4:
    // 0x3467b4: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3467b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3467b8:
    // 0x3467b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3467b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3467bc:
    // 0x3467bc: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3467bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3467c0:
    // 0x3467c0: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3467c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3467c4:
    // 0x3467c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3467c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3467c8:
    // 0x3467c8: 0xc0510e0  jal         func_144380
label_3467cc:
    if (ctx->pc == 0x3467CCu) {
        ctx->pc = 0x3467CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467C8u;
        // 0x3467cc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3467D0u;
        goto label_3467d0;
    }
    ctx->pc = 0x3467C8u;
    SET_GPR_U32(ctx, 31, 0x3467D0u);
    ctx->pc = 0x3467CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3467C8u;
    // 0x3467cc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3467C8u, 0x3467D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467D0u;
label_3467d0:
    // 0x3467d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3467d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3467d4:
    // 0x3467d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3467d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3467d8:
    // 0x3467d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3467d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3467dc:
    // 0x3467dc: 0xc0996b8  jal         func_265AE0
label_3467e0:
    if (ctx->pc == 0x3467E0u) {
        ctx->pc = 0x3467E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3467DCu;
        // 0x3467e0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3467E4u;
        goto label_3467e4;
    }
    ctx->pc = 0x3467DCu;
    SET_GPR_U32(ctx, 31, 0x3467E4u);
    ctx->pc = 0x3467E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3467DCu;
    // 0x3467e0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AE0u, 0x3467DCu, 0x3467E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467E4u;
label_3467e4:
    // 0x3467e4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x3467e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3467e8:
    // 0x3467e8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3467e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_3467ec:
    // 0x3467ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3467ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_3467f0:
    // 0x3467f0: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x3467f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
label_3467f4:
    // 0x3467f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3467f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3467f8:
    // 0x3467f8: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x3467f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
label_3467fc:
    // 0x3467fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3467fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_346800:
    // 0x346800: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x346800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_346804:
    // 0x346804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_346808:
    // 0x346808: 0x0  nop
    ctx->pc = 0x346808u;
    // NOP
label_34680c:
    // 0x34680c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x34680cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_346810:
    // 0x346810: 0xc099778  jal         func_265DE0
label_346814:
    if (ctx->pc == 0x346814u) {
        ctx->pc = 0x346814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346810u;
        // 0x346814: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346818u;
        goto label_346818;
    }
    ctx->pc = 0x346810u;
    SET_GPR_U32(ctx, 31, 0x346818u);
    ctx->pc = 0x346814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346810u;
    // 0x346814: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x346810u, 0x346818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346818u;
label_346818:
    // 0x346818: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x346818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_34681c:
    // 0x34681c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x34681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_346820:
    // 0x346820: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x346820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_346824:
    // 0x346824: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x346824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_346828:
    // 0x346828: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x346828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
label_34682c:
    // 0x34682c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x34682cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_346830:
    // 0x346830: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x346830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_346834:
    // 0x346834: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x346834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_346838:
    // 0x346838: 0xc0997ac  jal         func_265EB0
label_34683c:
    if (ctx->pc == 0x34683Cu) {
        ctx->pc = 0x34683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346838u;
        // 0x34683c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346840u;
        goto label_346840;
    }
    ctx->pc = 0x346838u;
    SET_GPR_U32(ctx, 31, 0x346840u);
    ctx->pc = 0x34683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346838u;
    // 0x34683c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x346838u, 0x346840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346840u;
label_346840:
    // 0x346840: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x346840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_346844:
    // 0x346844: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x346844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_346848:
    // 0x346848: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x346848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_34684c:
    // 0x34684c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x34684cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_346850:
    // 0x346850: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x346850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_346854:
    // 0x346854: 0xc0414ca  jal         func_105328
label_346858:
    if (ctx->pc == 0x346858u) {
        ctx->pc = 0x346858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346854u;
        // 0x346858: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34685Cu;
        goto label_34685c;
    }
    ctx->pc = 0x346854u;
    SET_GPR_U32(ctx, 31, 0x34685Cu);
    ctx->pc = 0x346858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346854u;
    // 0x346858: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x346854u, 0x34685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34685Cu;
label_34685c:
    // 0x34685c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x34685cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_346860:
    // 0x346860: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x346860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_346864:
    // 0x346864: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x346864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_346868:
    // 0x346868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34686c:
    // 0x34686c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34686cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_346870:
    // 0x346870: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x346870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
label_346874:
    // 0x346874: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x346874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_346878:
    // 0x346878: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x346878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_34687c:
    // 0x34687c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34687cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_346880:
    // 0x346880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_346884:
    // 0x346884: 0x0  nop
    ctx->pc = 0x346884u;
    // NOP
label_346888:
    // 0x346888: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x346888u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_34688c:
    // 0x34688c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34688cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_346890:
    // 0x346890: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x346890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_346894:
    // 0x346894: 0x0  nop
    ctx->pc = 0x346894u;
    // NOP
label_346898:
    // 0x346898: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x346898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_34689c:
    // 0x34689c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34689cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3468a0:
    // 0x3468a0: 0xc0d0484  jal         func_341210
label_3468a4:
    if (ctx->pc == 0x3468A4u) {
        ctx->pc = 0x3468A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468A0u;
        // 0x3468a4: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3468A8u;
        goto label_3468a8;
    }
    ctx->pc = 0x3468A0u;
    SET_GPR_U32(ctx, 31, 0x3468A8u);
    ctx->pc = 0x3468A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3468A0u;
    // 0x3468a4: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3468A0u, 0x3468A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3468A8u;
label_3468a8:
    // 0x3468a8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3468a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3468ac:
    // 0x3468ac: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3468acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3468b0:
    // 0x3468b0: 0x320f809  jalr        $t9
label_3468b4:
    if (ctx->pc == 0x3468B4u) {
        ctx->pc = 0x3468B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468B0u;
        // 0x3468b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3468B8u;
        goto label_3468b8;
    }
    ctx->pc = 0x3468B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3468B8u);
        ctx->pc = 0x3468B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468B0u;
        // 0x3468b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3468B0u, 0x3468B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3468B8u;
label_3468b8:
    // 0x3468b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3468b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3468bc:
    // 0x3468bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3468bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3468c0:
    // 0x3468c0: 0xc0d0490  jal         func_341240
label_3468c4:
    if (ctx->pc == 0x3468C4u) {
        ctx->pc = 0x3468C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468C0u;
        // 0x3468c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3468C8u;
        goto label_3468c8;
    }
    ctx->pc = 0x3468C0u;
    SET_GPR_U32(ctx, 31, 0x3468C8u);
    ctx->pc = 0x3468C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3468C0u;
    // 0x3468c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341240u, 0x3468C0u, 0x3468C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3468C8u;
label_3468c8:
    // 0x3468c8: 0xc0e44e0  jal         func_391380
label_3468cc:
    if (ctx->pc == 0x3468CCu) {
        ctx->pc = 0x3468CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468C8u;
        // 0x3468cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3468D0u;
        goto label_3468d0;
    }
    ctx->pc = 0x3468C8u;
    SET_GPR_U32(ctx, 31, 0x3468D0u);
    ctx->pc = 0x3468CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3468C8u;
    // 0x3468cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391380u, 0x3468C8u, 0x3468D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3468D0u;
label_3468d0:
    // 0x3468d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3468d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3468d4:
    // 0x3468d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3468d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3468d8:
    // 0x3468d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3468d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3468dc:
    // 0x3468dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3468dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3468e0:
    // 0x3468e0: 0x3e00008  jr          $ra
label_3468e4:
    if (ctx->pc == 0x3468E4u) {
        ctx->pc = 0x3468E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468E0u;
        // 0x3468e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3468E8u;
        goto label_fallthrough_0x3468e0;
    }
    ctx->pc = 0x3468E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3468E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468E0u;
        // 0x3468e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3468E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3468e0:
    ctx->pc = 0x3468E8u;
}
