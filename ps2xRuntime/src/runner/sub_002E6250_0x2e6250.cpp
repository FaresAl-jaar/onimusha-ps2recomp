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

// Function: sub_002E6250
// Address: 0x2e6250 - 0x2e651c
void sub_002E6250_0x2e6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6250_0x2e6250");
#endif

    switch (ctx->pc) {
        case 0x2e62a4u: goto label_2e62a4;
        case 0x2e62bcu: goto label_2e62bc;
        case 0x2e62c4u: goto label_2e62c4;
        case 0x2e62e4u: goto label_2e62e4;
        case 0x2e6310u: goto label_2e6310;
        case 0x2e633cu: goto label_2e633c;
        case 0x2e6378u: goto label_2e6378;
        case 0x2e6390u: goto label_2e6390;
        case 0x2e63b0u: goto label_2e63b0;
        case 0x2e6470u: goto label_2e6470;
        case 0x2e64bcu: goto label_2e64bc;
        case 0x2e64d0u: goto label_2e64d0;
        case 0x2e64e4u: goto label_2e64e4;
        default: break;
    }

    ctx->pc = 0x2e6250u;

    // 0x2e6250: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e6254: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e6254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e6258: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e625c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e6260: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2e6260u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6264: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e6264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e6268: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e6268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e626c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e6270: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e6270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6274: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e6274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6278: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e6278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e627c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6280: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e6280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6284: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e6284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6288: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e6288u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e628c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e628cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e6290: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e6294: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2e6294u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2e6298: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2e6298u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2e629c: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2E629Cu;
    SET_GPR_U32(ctx, 31, 0x2E62A4u);
    ctx->pc = 0x2E62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E629Cu;
    // 0x2e62a0: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2E629Cu, 0x2E62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62A4u;
label_2e62a4:
    // 0x2e62a4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2e62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2e62a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e62a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62ac: 0x2484f5f0  addiu       $a0, $a0, -0xA10
    ctx->pc = 0x2e62acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964720));
    // 0x2e62b0: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x2e62b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2e62b4: 0xc0966d8  jal         func_259B60
    ctx->pc = 0x2E62B4u;
    SET_GPR_U32(ctx, 31, 0x2E62BCu);
    ctx->pc = 0x2E62B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62B4u;
    // 0x2e62b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B60u, 0x2E62B4u, 0x2E62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62BCu;
label_2e62bc:
    // 0x2e62bc: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2E62BCu;
    SET_GPR_U32(ctx, 31, 0x2E62C4u);
    ctx->pc = 0x2E62C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62BCu;
    // 0x2e62c0: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2E62BCu, 0x2E62C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62C4u;
label_2e62c4:
    // 0x2e62c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e62c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e62c8: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x2e62c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2e62cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e62ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e62d0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2e62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2e62d4: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x2e62d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x2e62d8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e62d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2e62dc: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2E62DCu;
    SET_GPR_U32(ctx, 31, 0x2E62E4u);
    ctx->pc = 0x2E62E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62DCu;
    // 0x2e62e0: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2E62DCu, 0x2E62E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62E4u;
label_2e62e4:
    // 0x2e62e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e62e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e62e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e62e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e62ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e62f0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e62f4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x2e62f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x2e62f8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e62f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e62fc: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x2e62fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2e6300: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e6300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e6304: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2e6304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e6308: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E6308u;
    SET_GPR_U32(ctx, 31, 0x2E6310u);
    ctx->pc = 0x2E630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6308u;
    // 0x2e630c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E6308u, 0x2E6310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6310u;
label_2e6310:
    // 0x2e6310: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2e6310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e6314: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x2e6314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2e6318: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2e6318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2e631c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2e631cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e6320: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2e6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e6324: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2e6324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2e6328: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2e6328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2e632c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e6330: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2e6330u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6334: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E6334u;
    SET_GPR_U32(ctx, 31, 0x2E633Cu);
    ctx->pc = 0x2E6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6334u;
    // 0x2e6338: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E6334u, 0x2E633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E633Cu;
label_2e633c:
    // 0x2e633c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2e633cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e6340: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2e6340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2e6344: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2e6344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2e6348: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2e6348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2e634c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e6350: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e6350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6354: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e6354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e6358: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e6358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e635c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2e635cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2e6360: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x2e6360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2e6364: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e6364u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2e6368: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e6368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e636c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e636cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6370: 0xc074dcc  jal         func_1D3730
    ctx->pc = 0x2E6370u;
    SET_GPR_U32(ctx, 31, 0x2E6378u);
    ctx->pc = 0x2E6374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6370u;
    // 0x2e6374: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3730u, 0x2E6370u, 0x2E6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6378u;
label_2e6378:
    // 0x2e6378: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2e6378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2e637c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e637cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6380: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e6384: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x2e6384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x2e6388: 0xc049522  jal         func_125488
    ctx->pc = 0x2E6388u;
    SET_GPR_U32(ctx, 31, 0x2E6390u);
    ctx->pc = 0x2E638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6388u;
    // 0x2e638c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2E6388u, 0x2E6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6390u;
label_2e6390:
    // 0x2e6390: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x2e6390u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e6394: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E6394u;
    {
        const bool branch_taken_0x2e6394 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6394u;
        // 0x2e6398: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6394) {
            ctx->pc = 0x2E6490u;
            goto label_2e6490;
        }
    }
    ctx->pc = 0x2E639Cu;
    // 0x2e639c: 0x2a610009  slti        $at, $s3, 0x9
    ctx->pc = 0x2e639cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e63a0: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E63A0u;
    {
        const bool branch_taken_0x2e63a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E63A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63A0u;
        // 0x2e63a4: 0x2662fff8  addiu       $v0, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e63a0) {
            ctx->pc = 0x2E6460u;
            goto label_2e6460;
        }
    }
    ctx->pc = 0x2E63A8u;
    // 0x2e63a8: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x2e63a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x2e63ac: 0x0  nop
    ctx->pc = 0x2e63acu;
    // NOP
label_2e63b0:
    // 0x2e63b0: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2e63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2e63b4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2e63b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e63b8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2e63b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e63bc: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2e63bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2e63c0: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2e63c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2e63c4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2e63c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2e63c8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e63c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e63cc: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2e63ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e63d0: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x2e63d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2e63d4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2e63d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2e63d8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2e63d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2e63dc: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2e63dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e63e0: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x2e63e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2e63e4: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2e63e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2e63e8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2e63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2e63ec: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2e63ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2e63f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e63f4: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2e63f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e63f8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2e63f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2e63fc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2e63fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2e6400: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2e6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2e6404: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2e6404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e6408: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x2e6408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x2e640c: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2e640cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2e6410: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2e6410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2e6414: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2e6414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2e6418: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e6418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e641c: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2e641cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e6420: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x2e6420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x2e6424: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2e6424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2e6428: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2e6428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2e642c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2e642cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e6430: 0x24640007  addiu       $a0, $v1, 0x7
    ctx->pc = 0x2e6430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2e6434: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2e6434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2e6438: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x2e6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2e643c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2e643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e6440: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e6440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e6444: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2e6444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2e6448: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2e6448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e644c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2e644cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2e6450: 0x62202a  slt         $a0, $v1, $v0
    ctx->pc = 0x2e6450u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6454: 0x1480ffd6  bnez        $a0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2E6454u;
    {
        const bool branch_taken_0x2e6454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6454) {
            ctx->pc = 0x2E63B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e63b0;
        }
    }
    ctx->pc = 0x2E645Cu;
    // 0x2e645c: 0x0  nop
    ctx->pc = 0x2e645cu;
    // NOP
label_2e6460:
    // 0x2e6460: 0x73082a  slt         $at, $v1, $s3
    ctx->pc = 0x2e6460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e6464: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2E6464u;
    {
        const bool branch_taken_0x2e6464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6464u;
        // 0x2e6468: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6464) {
            ctx->pc = 0x2E6490u;
            goto label_2e6490;
        }
    }
    ctx->pc = 0x2E646Cu;
    // 0x2e646c: 0x0  nop
    ctx->pc = 0x2e646cu;
    // NOP
label_2e6470:
    // 0x2e6470: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x2e6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2e6474: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e6474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e6478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e6478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e647c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x2e647cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e6480: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x2e6480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e6484: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E6484u;
    {
        const bool branch_taken_0x2e6484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6484u;
        // 0x2e6488: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6484) {
            ctx->pc = 0x2E6470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6470;
        }
    }
    ctx->pc = 0x2E648Cu;
    // 0x2e648c: 0x0  nop
    ctx->pc = 0x2e648cu;
    // NOP
label_2e6490:
    // 0x2e6490: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2e6490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2e6494: 0x3c0a002e  lui         $t2, 0x2E
    ctx->pc = 0x2e6494u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)46 << 16));
    // 0x2e6498: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e6498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e649c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e649cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64a0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2e64a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64a4: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2e64a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64a8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2e64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e64ac: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x2e64acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x2e64b0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2e64b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e64b4: 0xc076060  jal         func_1D8180
    ctx->pc = 0x2E64B4u;
    SET_GPR_U32(ctx, 31, 0x2E64BCu);
    ctx->pc = 0x2E64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E64B4u;
    // 0x2e64b8: 0x254a5e50  addiu       $t2, $t2, 0x5E50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8180u, 0x2E64B4u, 0x2E64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64BCu;
label_2e64bc:
    // 0x2e64bc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2e64bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e64c0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E64C0u;
    {
        const bool branch_taken_0x2e64c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64C0u;
        // 0x2e64c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64c0) {
            ctx->pc = 0x2E64E8u;
            goto label_2e64e8;
        }
    }
    ctx->pc = 0x2E64C8u;
    // 0x2e64c8: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2E64C8u;
    SET_GPR_U32(ctx, 31, 0x2E64D0u);
    ctx->pc = 0x2E64CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E64C8u;
    // 0x2e64cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2E64C8u, 0x2E64D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64D0u;
label_2e64d0:
    // 0x2e64d0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2e64d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e64d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e64d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e64d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64dc: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2E64DCu;
    SET_GPR_U32(ctx, 31, 0x2E64E4u);
    ctx->pc = 0x2E64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E64DCu;
    // 0x2e64e0: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2E64DCu, 0x2E64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E64E4u;
label_2e64e4:
    // 0x2e64e4: 0x0  nop
    ctx->pc = 0x2e64e4u;
    // NOP
label_2e64e8:
    // 0x2e64e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e64e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e64ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e64ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e64f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e64f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e64f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e64f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e64f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e64f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e64fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e64fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6500: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6504: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6508: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e6508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e650c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e650cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6510: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e6510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6514: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6514u;
        // 0x2e6518: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E651Cu;
}
