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

// Function: sub_002E6080
// Address: 0x2e6080 - 0x2e6248
void sub_002E6080_0x2e6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6080_0x2e6080");
#endif

    switch (ctx->pc) {
        case 0x2e60ccu: goto label_2e60cc;
        case 0x2e60e4u: goto label_2e60e4;
        case 0x2e60ecu: goto label_2e60ec;
        case 0x2e610cu: goto label_2e610c;
        case 0x2e6138u: goto label_2e6138;
        case 0x2e6164u: goto label_2e6164;
        case 0x2e61a0u: goto label_2e61a0;
        case 0x2e61c4u: goto label_2e61c4;
        case 0x2e61f0u: goto label_2e61f0;
        case 0x2e6204u: goto label_2e6204;
        case 0x2e6218u: goto label_2e6218;
        default: break;
    }

    ctx->pc = 0x2e6080u;

    // 0x2e6080: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e6080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e6084: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e6084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e6088: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e6088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e608c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e6090: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2e6090u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6094: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e6094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e6098: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2e6098u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e609c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e60a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e60a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e60a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e60a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e60a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e60acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e60b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e60b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e60b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e60b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e60b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e60bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e60bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e60c0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2e60c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2e60c4: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2E60C4u;
    SET_GPR_U32(ctx, 31, 0x2E60CCu);
    ctx->pc = 0x2E60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60C4u;
    // 0x2e60c8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2E60C4u, 0x2E60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60CCu;
label_2e60cc:
    // 0x2e60cc: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2e60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2e60d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e60d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60d4: 0x2484f5f0  addiu       $a0, $a0, -0xA10
    ctx->pc = 0x2e60d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964720));
    // 0x2e60d8: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x2e60d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2e60dc: 0xc0966d8  jal         func_259B60
    ctx->pc = 0x2E60DCu;
    SET_GPR_U32(ctx, 31, 0x2E60E4u);
    ctx->pc = 0x2E60E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60DCu;
    // 0x2e60e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B60u, 0x2E60DCu, 0x2E60E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60E4u;
label_2e60e4:
    // 0x2e60e4: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2E60E4u;
    SET_GPR_U32(ctx, 31, 0x2E60ECu);
    ctx->pc = 0x2E60E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60E4u;
    // 0x2e60e8: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2E60E4u, 0x2E60ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60ECu;
label_2e60ec:
    // 0x2e60ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e60ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e60f0: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x2e60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2e60f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e60f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e60f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2e60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2e60fc: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x2e60fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x2e6100: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e6100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2e6104: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2E6104u;
    SET_GPR_U32(ctx, 31, 0x2E610Cu);
    ctx->pc = 0x2E6108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6104u;
    // 0x2e6108: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2E6104u, 0x2E610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E610Cu;
label_2e610c:
    // 0x2e610c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e610cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e6110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e6110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6114: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e6114u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e6118: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e6118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e611c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x2e611cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x2e6120: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e6120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e6124: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x2e6124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2e6128: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e6128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e612c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2e612cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e6130: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E6130u;
    SET_GPR_U32(ctx, 31, 0x2E6138u);
    ctx->pc = 0x2E6134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6130u;
    // 0x2e6134: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E6130u, 0x2E6138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6138u;
label_2e6138:
    // 0x2e6138: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2e6138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e613c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2e613cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2e6140: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2e6140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2e6144: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2e6144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e6148: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2e6148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e614c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2e614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2e6150: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2e6150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2e6154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e6154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e6158: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2e6158u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e615c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E615Cu;
    SET_GPR_U32(ctx, 31, 0x2E6164u);
    ctx->pc = 0x2E6160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E615Cu;
    // 0x2e6160: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E615Cu, 0x2E6164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6164u;
label_2e6164:
    // 0x2e6164: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2e6164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e6168: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2e6168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2e616c: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x2e616cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2e6170: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e6170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6174: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2e6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e6178: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e6178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e617c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e617cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e6180: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e6180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e6184: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x2e6184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2e6188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e618c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e618cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2e6190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6194: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2e6194u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2e6198: 0xc074dcc  jal         func_1D3730
    ctx->pc = 0x2E6198u;
    SET_GPR_U32(ctx, 31, 0x2E61A0u);
    ctx->pc = 0x2E619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6198u;
    // 0x2e619c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3730u, 0x2E6198u, 0x2E61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61A0u;
label_2e61a0:
    // 0x2e61a0: 0x4614ab40  add.s       $f13, $f21, $f20
    ctx->pc = 0x2e61a0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2e61a4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2e61a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2e61a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e61a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e61acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e61b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e61b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e61b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e61b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e61b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2e61bc: 0xc074dcc  jal         func_1D3730
    ctx->pc = 0x2E61BCu;
    SET_GPR_U32(ctx, 31, 0x2E61C4u);
    ctx->pc = 0x2E61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61BCu;
    // 0x2e61c0: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3730u, 0x2E61BCu, 0x2E61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61C4u;
label_2e61c4:
    // 0x2e61c4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2e61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2e61c8: 0x3c0a002e  lui         $t2, 0x2E
    ctx->pc = 0x2e61c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)46 << 16));
    // 0x2e61cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e61ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2e61d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61d4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e61d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61d8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2e61d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61dc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x2e61dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x2e61e0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2e61e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e61e4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2e61e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e61e8: 0xc076060  jal         func_1D8180
    ctx->pc = 0x2E61E8u;
    SET_GPR_U32(ctx, 31, 0x2E61F0u);
    ctx->pc = 0x2E61ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61E8u;
    // 0x2e61ec: 0x254a5e50  addiu       $t2, $t2, 0x5E50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8180u, 0x2E61E8u, 0x2E61F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61F0u;
label_2e61f0:
    // 0x2e61f0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2e61f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e61f4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E61F4u;
    {
        const bool branch_taken_0x2e61f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61F4u;
        // 0x2e61f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61f4) {
            ctx->pc = 0x2E6218u;
            goto label_2e6218;
        }
    }
    ctx->pc = 0x2E61FCu;
    // 0x2e61fc: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2E61FCu;
    SET_GPR_U32(ctx, 31, 0x2E6204u);
    ctx->pc = 0x2E6200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61FCu;
    // 0x2e6200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2E61FCu, 0x2E6204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6204u;
label_2e6204:
    // 0x2e6204: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2e6204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e6208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e6208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e620c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e620cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6210: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2E6210u;
    SET_GPR_U32(ctx, 31, 0x2E6218u);
    ctx->pc = 0x2E6214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6210u;
    // 0x2e6214: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2E6210u, 0x2E6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6218u;
label_2e6218:
    // 0x2e6218: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e6218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e621c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e621cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e6220: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e6220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e6224: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e6224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e6228: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e622c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e622cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6230: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6234: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e6234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6238: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e6238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e623c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e623cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6240: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6240u;
        // 0x2e6244: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6248u;
}
