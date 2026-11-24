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

// Function: sub_002E6520
// Address: 0x2e6520 - 0x2e6820
void sub_002E6520_0x2e6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6520_0x2e6520");
#endif

    switch (ctx->pc) {
        case 0x2e6578u: goto label_2e6578;
        case 0x2e6590u: goto label_2e6590;
        case 0x2e6598u: goto label_2e6598;
        case 0x2e65b8u: goto label_2e65b8;
        case 0x2e65e4u: goto label_2e65e4;
        case 0x2e6610u: goto label_2e6610;
        case 0x2e664cu: goto label_2e664c;
        case 0x2e6664u: goto label_2e6664;
        case 0x2e6684u: goto label_2e6684;
        case 0x2e66a4u: goto label_2e66a4;
        case 0x2e66b8u: goto label_2e66b8;
        case 0x2e66f4u: goto label_2e66f4;
        case 0x2e6710u: goto label_2e6710;
        case 0x2e6760u: goto label_2e6760;
        case 0x2e67bcu: goto label_2e67bc;
        case 0x2e67d0u: goto label_2e67d0;
        case 0x2e67e4u: goto label_2e67e4;
        default: break;
    }

    ctx->pc = 0x2e6520u;

    // 0x2e6520: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e6520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e6524: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e6524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e6528: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e6528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e652c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e6530: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2e6530u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6534: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e6534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e6538: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e6538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e653c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e653cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6540: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e6540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e6544: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e6544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6548: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e6548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e654c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6550: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e6550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6554: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e6554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6558: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e6558u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e655c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e655cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6560: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e6560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e6564: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e6568: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2e6568u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2e656c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2e656cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2e6570: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2E6570u;
    SET_GPR_U32(ctx, 31, 0x2E6578u);
    ctx->pc = 0x2E6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6570u;
    // 0x2e6574: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2E6570u, 0x2E6578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6578u;
label_2e6578:
    // 0x2e6578: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2e6578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2e657c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e657cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6580: 0x2484f5f0  addiu       $a0, $a0, -0xA10
    ctx->pc = 0x2e6580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964720));
    // 0x2e6584: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x2e6584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2e6588: 0xc0966d8  jal         func_259B60
    ctx->pc = 0x2E6588u;
    SET_GPR_U32(ctx, 31, 0x2E6590u);
    ctx->pc = 0x2E658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6588u;
    // 0x2e658c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B60u, 0x2E6588u, 0x2E6590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6590u;
label_2e6590:
    // 0x2e6590: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2E6590u;
    SET_GPR_U32(ctx, 31, 0x2E6598u);
    ctx->pc = 0x2E6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6590u;
    // 0x2e6594: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2E6590u, 0x2E6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6598u;
label_2e6598:
    // 0x2e6598: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e6598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e659c: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x2e659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2e65a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e65a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e65a4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2e65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2e65a8: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x2e65a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x2e65ac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e65acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2e65b0: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2E65B0u;
    SET_GPR_U32(ctx, 31, 0x2E65B8u);
    ctx->pc = 0x2E65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65B0u;
    // 0x2e65b4: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2E65B0u, 0x2E65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65B8u;
label_2e65b8:
    // 0x2e65b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e65b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e65bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e65bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e65c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e65c4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e65c8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x2e65c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x2e65cc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e65ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e65d0: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x2e65d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2e65d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e65d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e65d8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2e65d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e65dc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E65DCu;
    SET_GPR_U32(ctx, 31, 0x2E65E4u);
    ctx->pc = 0x2E65E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65DCu;
    // 0x2e65e0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E65DCu, 0x2E65E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65E4u;
label_2e65e4:
    // 0x2e65e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2e65e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e65e8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x2e65e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2e65ec: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2e65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e65f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2e65f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e65f4: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x2e65f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2e65f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2e65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2e65fc: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2e65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2e6600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e6600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e6604: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2e6604u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6608: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E6608u;
    SET_GPR_U32(ctx, 31, 0x2E6610u);
    ctx->pc = 0x2E660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6608u;
    // 0x2e660c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E6608u, 0x2E6610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6610u;
label_2e6610:
    // 0x2e6610: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2e6610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e6614: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2e6614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2e6618: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e6618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e661c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2e661cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2e6620: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2e6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2e6624: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e6624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6628: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e6628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e662c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e662cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e6630: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2e6630u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2e6634: 0x41b021  addu        $s6, $v0, $at
    ctx->pc = 0x2e6634u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2e6638: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e6638u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2e663c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2e663cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e6640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6644: 0xc074dcc  jal         func_1D3730
    ctx->pc = 0x2E6644u;
    SET_GPR_U32(ctx, 31, 0x2E664Cu);
    ctx->pc = 0x2E6648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6644u;
    // 0x2e6648: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3730u, 0x2E6644u, 0x2E664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E664Cu;
label_2e664c:
    // 0x2e664c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e664cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e6650: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e6650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6654: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2e6654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2e6658: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x2e6658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x2e665c: 0xc049522  jal         func_125488
    ctx->pc = 0x2E665Cu;
    SET_GPR_U32(ctx, 31, 0x2E6664u);
    ctx->pc = 0x2E6660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E665Cu;
    // 0x2e6660: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x2E665Cu, 0x2E6664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6664u;
label_2e6664:
    // 0x2e6664: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2e6664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e6668: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e6668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e666c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e666cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e6670: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2e6670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e6674: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e6674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6678: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2e6678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e667c: 0xc0767f4  jal         func_1D9FD0
    ctx->pc = 0x2E667Cu;
    SET_GPR_U32(ctx, 31, 0x2E6684u);
    ctx->pc = 0x2E6680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E667Cu;
    // 0x2e6680: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD0u, 0x2E667Cu, 0x2E6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6684u;
label_2e6684:
    // 0x2e6684: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x2e6684u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e6688: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e6688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e668c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e668cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e6690: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e6690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e6694: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2e6694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e6698: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x2e6698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e669c: 0xc0767f4  jal         func_1D9FD0
    ctx->pc = 0x2E669Cu;
    SET_GPR_U32(ctx, 31, 0x2E66A4u);
    ctx->pc = 0x2E66A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E669Cu;
    // 0x2e66a0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD0u, 0x2E669Cu, 0x2E66A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66A4u;
label_2e66a4:
    // 0x2e66a4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x2e66a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e66a8: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2e66a8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x2e66ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e66acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e66b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e66b4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2e66b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2e66b8:
    // 0x2e66b8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2e66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2e66bc: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x2e66bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e66c0: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x2e66c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2e66c4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e66c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e66c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e66cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e66ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e66d0: 0x0  nop
    ctx->pc = 0x2e66d0u;
    // NOP
    // 0x2e66d4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2e66d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2e66d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e66d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e66dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e66dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e66e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e66e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e66e4: 0x0  nop
    ctx->pc = 0x2e66e4u;
    // NOP
    // 0x2e66e8: 0x0  nop
    ctx->pc = 0x2e66e8u;
    // NOP
    // 0x2e66ec: 0xc076328  jal         func_1D8CA0
    ctx->pc = 0x2E66ECu;
    SET_GPR_U32(ctx, 31, 0x2E66F4u);
    ctx->pc = 0x2E66F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E66ECu;
    // 0x2e66f0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8CA0u, 0x2E66ECu, 0x2E66F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66F4u;
label_2e66f4:
    // 0x2e66f4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2e66f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e66f8: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x2e66f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2e66fc: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E66FCu;
    {
        const bool branch_taken_0x2e66fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66FCu;
        // 0x2e6700: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66fc) {
            ctx->pc = 0x2E6780u;
            goto label_2e6780;
        }
    }
    ctx->pc = 0x2E6704u;
    // 0x2e6704: 0x2aa10009  slti        $at, $s5, 0x9
    ctx->pc = 0x2e6704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e6708: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E6708u;
    {
        const bool branch_taken_0x2e6708 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6708u;
        // 0x2e670c: 0x26a3fff8  addiu       $v1, $s5, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6708) {
            ctx->pc = 0x2E6750u;
            goto label_2e6750;
        }
    }
    ctx->pc = 0x2E6710u;
label_2e6710:
    // 0x2e6710: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2e6710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6714: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2e6714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e6718: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2e6718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e671c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x2e671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2e6720: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2e6720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e6724: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2e6724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e6728: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x2e6728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2e672c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2e672cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e6730: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2e6730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e6734: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x2e6734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2e6738: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2e6738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2e673c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2e673cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e6740: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x2e6740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x2e6744: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E6744u;
    {
        const bool branch_taken_0x2e6744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6744u;
        // 0x2e6748: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6744) {
            ctx->pc = 0x2E6710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6710;
        }
    }
    ctx->pc = 0x2E674Cu;
    // 0x2e674c: 0x0  nop
    ctx->pc = 0x2e674cu;
    // NOP
label_2e6750:
    // 0x2e6750: 0x95082a  slt         $at, $a0, $s5
    ctx->pc = 0x2e6750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2e6754: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2E6754u;
    {
        const bool branch_taken_0x2e6754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6754) {
            ctx->pc = 0x2E6780u;
            goto label_2e6780;
        }
    }
    ctx->pc = 0x2E675Cu;
    // 0x2e675c: 0x0  nop
    ctx->pc = 0x2e675cu;
    // NOP
label_2e6760:
    // 0x2e6760: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e6760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e6764: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2e6764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2e6768: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x2e6768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2e676c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2e676cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e6770: 0x0  nop
    ctx->pc = 0x2e6770u;
    // NOP
    // 0x2e6774: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E6774u;
    {
        const bool branch_taken_0x2e6774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6774) {
            ctx->pc = 0x2E6760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6760;
        }
    }
    ctx->pc = 0x2E677Cu;
    // 0x2e677c: 0x0  nop
    ctx->pc = 0x2e677cu;
    // NOP
label_2e6780:
    // 0x2e6780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e6780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e6784: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2e6784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e6788: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2E6788u;
    {
        const bool branch_taken_0x2e6788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6788u;
        // 0x2e678c: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6788) {
            ctx->pc = 0x2E66B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e66b8;
        }
    }
    ctx->pc = 0x2E6790u;
    // 0x2e6790: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2e6790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e6794: 0x3c0a002e  lui         $t2, 0x2E
    ctx->pc = 0x2e6794u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)46 << 16));
    // 0x2e6798: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e6798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e679c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2e679cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67a0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2e67a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67a4: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x2e67a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2e67a8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x2e67a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x2e67ac: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2e67acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e67b0: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2e67b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e67b4: 0xc076060  jal         func_1D8180
    ctx->pc = 0x2E67B4u;
    SET_GPR_U32(ctx, 31, 0x2E67BCu);
    ctx->pc = 0x2E67B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67B4u;
    // 0x2e67b8: 0x254a5e50  addiu       $t2, $t2, 0x5E50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8180u, 0x2E67B4u, 0x2E67BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67BCu;
label_2e67bc:
    // 0x2e67bc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2e67bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e67c0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E67C0u;
    {
        const bool branch_taken_0x2e67c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67C0u;
        // 0x2e67c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67c0) {
            ctx->pc = 0x2E67E8u;
            goto label_2e67e8;
        }
    }
    ctx->pc = 0x2E67C8u;
    // 0x2e67c8: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2E67C8u;
    SET_GPR_U32(ctx, 31, 0x2E67D0u);
    ctx->pc = 0x2E67CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67C8u;
    // 0x2e67cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2E67C8u, 0x2E67D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67D0u;
label_2e67d0:
    // 0x2e67d0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2e67d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e67d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e67d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e67d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67dc: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2E67DCu;
    SET_GPR_U32(ctx, 31, 0x2E67E4u);
    ctx->pc = 0x2E67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67DCu;
    // 0x2e67e0: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2E67DCu, 0x2E67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67E4u;
label_2e67e4:
    // 0x2e67e4: 0x0  nop
    ctx->pc = 0x2e67e4u;
    // NOP
label_2e67e8:
    // 0x2e67e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e67e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e67ec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e67ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e67f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e67f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e67f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e67f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e67f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e67f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e67fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e67fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e6800: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6804: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e6804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6808: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e680c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e680cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6810: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e6810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6814: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e6814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6818: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6818u;
        // 0x2e681c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6820u;
}
