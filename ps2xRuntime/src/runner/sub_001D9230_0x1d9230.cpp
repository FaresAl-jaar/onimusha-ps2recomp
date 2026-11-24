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

// Function: sub_001D9230
// Address: 0x1d9230 - 0x1d9390
void sub_001D9230_0x1d9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9230_0x1d9230");
#endif

    switch (ctx->pc) {
        case 0x1d92acu: goto label_1d92ac;
        case 0x1d92d4u: goto label_1d92d4;
        case 0x1d92e4u: goto label_1d92e4;
        case 0x1d92ecu: goto label_1d92ec;
        case 0x1d9300u: goto label_1d9300;
        case 0x1d930cu: goto label_1d930c;
        case 0x1d932cu: goto label_1d932c;
        case 0x1d9358u: goto label_1d9358;
        default: break;
    }

    ctx->pc = 0x1d9230u;

    // 0x1d9230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d9230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d9234: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d9234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9238: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d9238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d923c: 0x3c023991  lui         $v0, 0x3991
    ctx->pc = 0x1d923cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14737 << 16));
    // 0x1d9240: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d9240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d9244: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d9244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d9248: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d9248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d924c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d924cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9250: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d9250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d9254: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d9254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9258: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d9258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d925c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d925cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9260: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d9260u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d9264: 0x3444a2ac  ori         $a0, $v0, 0xA2AC
    ctx->pc = 0x1d9264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41644);
    // 0x1d9268: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d9268u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d926c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d9270: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d9270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d9274: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d9274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9278: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d9278u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d927c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1d927cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d9280: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d9280u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d9284: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x1d9284u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1d9288: 0x46141543  div.s       $f21, $f2, $f20
    ctx->pc = 0x1d9288u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[20]); }
    // 0x1d928c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9290: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1d9290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9294: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d9294u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d9298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d929c: 0x0  nop
    ctx->pc = 0x1d929cu;
    // NOP
    // 0x1d92a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d92a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d92a4: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D92A4u;
    SET_GPR_U32(ctx, 31, 0x1D92ACu);
    ctx->pc = 0x1D92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92A4u;
    // 0x1d92a8: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D92A4u, 0x1D92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92ACu;
label_1d92ac:
    // 0x1d92ac: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1d92acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d92b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d92b4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1d92b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d92b8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1d92b8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1d92bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d92bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d92c0: 0x0  nop
    ctx->pc = 0x1d92c0u;
    // NOP
    // 0x1d92c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d92c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1d92c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d92c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d92cc: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D92CCu;
    SET_GPR_U32(ctx, 31, 0x1D92D4u);
    ctx->pc = 0x1D92D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92CCu;
    // 0x1d92d0: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D92CCu, 0x1D92D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92D4u;
label_1d92d4:
    // 0x1d92d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d92d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1d92d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d92d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92dc: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x1D92DCu;
    SET_GPR_U32(ctx, 31, 0x1D92E4u);
    ctx->pc = 0x1D92E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92DCu;
    // 0x1d92e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x1D92DCu, 0x1D92E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92E4u;
label_1d92e4:
    // 0x1d92e4: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x1D92E4u;
    SET_GPR_U32(ctx, 31, 0x1D92ECu);
    ctx->pc = 0x1D92E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92E4u;
    // 0x1d92e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x1D92E4u, 0x1D92ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92ECu;
label_1d92ec:
    // 0x1d92ec: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1d92ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1d92f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d92f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d92f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92f8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x1D92F8u;
    SET_GPR_U32(ctx, 31, 0x1D9300u);
    ctx->pc = 0x1D92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92F8u;
    // 0x1d92fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1D92F8u, 0x1D9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9300u;
label_1d9300:
    // 0x1d9300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9304: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x1D9304u;
    SET_GPR_U32(ctx, 31, 0x1D930Cu);
    ctx->pc = 0x1D9308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9304u;
    // 0x1d9308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x1D9304u, 0x1D930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D930Cu;
label_1d930c:
    // 0x1d930c: 0x4615bd40  add.s       $f21, $f23, $f21
    ctx->pc = 0x1d930cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    // 0x1d9310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9318: 0x4615b303  div.s       $f12, $f22, $f21
    ctx->pc = 0x1d9318u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[21]); }
    // 0x1d931c: 0x0  nop
    ctx->pc = 0x1d931cu;
    // NOP
    // 0x1d9320: 0x0  nop
    ctx->pc = 0x1d9320u;
    // NOP
    // 0x1d9324: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D9324u;
    SET_GPR_U32(ctx, 31, 0x1D932Cu);
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D9324u, 0x1D932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D932Cu;
label_1d932c:
    // 0x1d932c: 0x4617a042  mul.s       $f1, $f20, $f23
    ctx->pc = 0x1d932cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x1d9330: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1d9330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1d9334: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d9334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d9338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d933c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x1d933cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1d9340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d934c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d934cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d9350: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D9350u;
    SET_GPR_U32(ctx, 31, 0x1D9358u);
    ctx->pc = 0x1D9354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9350u;
    // 0x1d9354: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D9350u, 0x1D9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9358u;
label_1d9358:
    // 0x1d9358: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d935c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1d935cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1d9360: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1d9360u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x1d9364: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d9364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9368: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d9368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d936c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d936cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9370: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d9370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d9374: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d9374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9378: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d9378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d937c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d937cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9380: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d9380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d9384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9388: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9388u;
        // 0x1d938c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9390u;
}
