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

// Function: sub_0033F4C0
// Address: 0x33f4c0 - 0x33f7c4
void sub_0033F4C0_0x33f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F4C0_0x33f4c0");
#endif

    switch (ctx->pc) {
        case 0x33f4e8u: goto label_33f4e8;
        case 0x33f538u: goto label_33f538;
        case 0x33f5b0u: goto label_33f5b0;
        case 0x33f5d8u: goto label_33f5d8;
        case 0x33f60cu: goto label_33f60c;
        case 0x33f61cu: goto label_33f61c;
        case 0x33f690u: goto label_33f690;
        case 0x33f69cu: goto label_33f69c;
        case 0x33f6b4u: goto label_33f6b4;
        case 0x33f6e0u: goto label_33f6e0;
        case 0x33f6f0u: goto label_33f6f0;
        case 0x33f734u: goto label_33f734;
        case 0x33f740u: goto label_33f740;
        case 0x33f758u: goto label_33f758;
        case 0x33f784u: goto label_33f784;
        case 0x33f794u: goto label_33f794;
        case 0x33f7a8u: goto label_33f7a8;
        default: break;
    }

    ctx->pc = 0x33f4c0u;

    // 0x33f4c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33f4c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33f4c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x33f4cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33f4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33f4d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33f4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f4d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33f4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33f4d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33f4d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33f4dc: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x33f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x33f4e0: 0xc0c83e8  jal         func_320FA0
    ctx->pc = 0x33F4E0u;
    SET_GPR_U32(ctx, 31, 0x33F4E8u);
    ctx->pc = 0x33F4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F4E0u;
    // 0x33f4e4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320FA0u, 0x33F4E0u, 0x33F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F4E8u;
label_33f4e8:
    // 0x33f4e8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x33f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33f4ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x33f4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x33f4f0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x33f4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f4f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33f4f8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x33f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f4fc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x33f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f500: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x33f500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33f504: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x33f504u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x33f508: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x33f508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x33f50c: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x33f50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x33f510: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x33f510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x33f514: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x33f514u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x33f518: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33f518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33f51c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33F51Cu;
    {
        const bool branch_taken_0x33f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F51Cu;
        // 0x33f520: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f51c) {
            ctx->pc = 0x33F528u;
            goto label_33f528;
        }
    }
    ctx->pc = 0x33F524u;
    // 0x33f524: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33f524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f528:
    // 0x33f528: 0x1080009d  beqz        $a0, . + 4 + (0x9D << 2)
    ctx->pc = 0x33F528u;
    {
        const bool branch_taken_0x33f528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f528) {
            ctx->pc = 0x33F7A0u;
            goto label_33f7a0;
        }
    }
    ctx->pc = 0x33F530u;
    // 0x33f530: 0xc0c8220  jal         func_320880
    ctx->pc = 0x33F530u;
    SET_GPR_U32(ctx, 31, 0x33F538u);
    ctx->pc = 0x33F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F530u;
    // 0x33f534: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320880u, 0x33F530u, 0x33F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F538u;
label_33f538:
    // 0x33f538: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x33F538u;
    {
        const bool branch_taken_0x33f538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F538u;
        // 0x33f53c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f538) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F540u;
    // 0x33f540: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x33f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x33f544: 0x30654000  andi        $a1, $v1, 0x4000
    ctx->pc = 0x33f544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x33f548: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F548u;
    {
        const bool branch_taken_0x33f548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F548u;
        // 0x33f54c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f548) {
            ctx->pc = 0x33F558u;
            goto label_33f558;
        }
    }
    ctx->pc = 0x33F550u;
    // 0x33f550: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33F550u;
    {
        const bool branch_taken_0x33f550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F550u;
        // 0x33f554: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f550) {
            ctx->pc = 0x33F564u;
            goto label_33f564;
        }
    }
    ctx->pc = 0x33F558u;
label_33f558:
    // 0x33f558: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x33f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x33f55c: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x33f55cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x33f560: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33f560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33f564:
    // 0x33f564: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x33F564u;
    {
        const bool branch_taken_0x33f564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F564u;
        // 0x33f568: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f564) {
            ctx->pc = 0x33F628u;
            goto label_33f628;
        }
    }
    ctx->pc = 0x33F56Cu;
    // 0x33f56c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x33F56Cu;
    {
        const bool branch_taken_0x33f56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33f56c) {
            ctx->pc = 0x33F5E0u;
            goto label_33f5e0;
        }
    }
    ctx->pc = 0x33F574u;
    // 0x33f574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33f574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f578: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F578u;
    {
        const bool branch_taken_0x33f578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33f578) {
            ctx->pc = 0x33F588u;
            goto label_33f588;
        }
    }
    ctx->pc = 0x33F580u;
    // 0x33f580: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x33F580u;
    {
        const bool branch_taken_0x33f580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f580) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F588u;
label_33f588:
    // 0x33f588: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33f588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33f58c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x33f58cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33f590: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x33f590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f594: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33f594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33f598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33f598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33f59c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f5a0: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x33F5A0u;
    {
        const bool branch_taken_0x33f5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5a0) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F5A8u;
    // 0x33f5a8: 0xc098f88  jal         func_263E20
    ctx->pc = 0x33F5A8u;
    SET_GPR_U32(ctx, 31, 0x33F5B0u);
    ctx->pc = 0x263E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263E20u, 0x33F5A8u, 0x33F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F5B0u;
label_33f5b0:
    // 0x33f5b0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33f5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33f5b4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f5b8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x33f5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33f5bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f5c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33f5c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x33f5c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f5c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f5cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f5d0: 0xc0cfb00  jal         func_33EC00
    ctx->pc = 0x33F5D0u;
    SET_GPR_U32(ctx, 31, 0x33F5D8u);
    ctx->pc = 0x33F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F5D0u;
    // 0x33f5d4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EC00u, 0x33F5D0u, 0x33F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F5D8u;
label_33f5d8:
    // 0x33f5d8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x33F5D8u;
    {
        const bool branch_taken_0x33f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5d8) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F5E0u;
label_33f5e0:
    // 0x33f5e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33f5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33f5e4: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x33f5e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33f5e8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x33f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f5ec: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x33f5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x33f5f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33f5f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33f5f8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x33f5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f5fc: 0x1200006a  beqz        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x33F5FCu;
    {
        const bool branch_taken_0x33f5fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F5FCu;
        // 0x33f600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f5fc) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F604u;
    // 0x33f604: 0xc098f88  jal         func_263E20
    ctx->pc = 0x33F604u;
    SET_GPR_U32(ctx, 31, 0x33F60Cu);
    ctx->pc = 0x263E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263E20u, 0x33F604u, 0x33F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F60Cu;
label_33f60c:
    // 0x33f60c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f610: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x33f610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33f614: 0xc0cfb00  jal         func_33EC00
    ctx->pc = 0x33F614u;
    SET_GPR_U32(ctx, 31, 0x33F61Cu);
    ctx->pc = 0x33F618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F614u;
    // 0x33f618: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EC00u, 0x33F614u, 0x33F61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F61Cu;
label_33f61c:
    // 0x33f61c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x33F61Cu;
    {
        const bool branch_taken_0x33f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f61c) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F624u;
    // 0x33f624: 0x0  nop
    ctx->pc = 0x33f624u;
    // NOP
label_33f628:
    // 0x33f628: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x33F628u;
    {
        const bool branch_taken_0x33f628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F628u;
        // 0x33f62c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f628) {
            ctx->pc = 0x33F6F8u;
            goto label_33f6f8;
        }
    }
    ctx->pc = 0x33F630u;
    // 0x33f630: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x33f630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f634: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x33f634u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x33f638: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x33f638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33f63c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f640: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x33f640u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f644: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33F644u;
    {
        const bool branch_taken_0x33f644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F644u;
        // 0x33f648: 0x38c30001  xori        $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f644) {
            ctx->pc = 0x33F6C0u;
            goto label_33f6c0;
        }
    }
    ctx->pc = 0x33F64Cu;
    // 0x33f64c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f650: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f654: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x33f654u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f658: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x33F658u;
    {
        const bool branch_taken_0x33f658 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f658) {
            ctx->pc = 0x33F6C0u;
            goto label_33f6c0;
        }
    }
    ctx->pc = 0x33F660u;
    // 0x33f660: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x33f660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x33f664: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x33f664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x33f668: 0x8e2429c8  lw          $a0, 0x29C8($s1)
    ctx->pc = 0x33f668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10696)));
    // 0x33f66c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x33f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x33f670: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x33f670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x33f674: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33f674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x33f678: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x33f678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x33f67c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33f67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33f680: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x33F680u;
    {
        const bool branch_taken_0x33f680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F680u;
        // 0x33f684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f680) {
            ctx->pc = 0x33F6C0u;
            goto label_33f6c0;
        }
    }
    ctx->pc = 0x33F688u;
    // 0x33f688: 0xc098f88  jal         func_263E20
    ctx->pc = 0x33F688u;
    SET_GPR_U32(ctx, 31, 0x33F690u);
    ctx->pc = 0x263E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263E20u, 0x33F688u, 0x33F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F690u;
label_33f690:
    // 0x33f690: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33f690u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x33f694: 0xc098f88  jal         func_263E20
    ctx->pc = 0x33F694u;
    SET_GPR_U32(ctx, 31, 0x33F69Cu);
    ctx->pc = 0x33F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F694u;
    // 0x33f698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263E20u, 0x33F694u, 0x33F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F69Cu;
label_33f69c:
    // 0x33f69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f6a0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x33f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33f6a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x33f6a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x33f6a8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x33f6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x33f6ac: 0xc0cfb34  jal         func_33ECD0
    ctx->pc = 0x33F6ACu;
    SET_GPR_U32(ctx, 31, 0x33F6B4u);
    ctx->pc = 0x33F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F6ACu;
    // 0x33f6b0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ECD0u, 0x33F6ACu, 0x33F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F6B4u;
label_33f6b4:
    // 0x33f6b4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x33F6B4u;
    {
        const bool branch_taken_0x33f6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6b4) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F6BCu;
    // 0x33f6bc: 0x0  nop
    ctx->pc = 0x33f6bcu;
    // NOP
label_33f6c0:
    // 0x33f6c0: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x33F6C0u;
    {
        const bool branch_taken_0x33f6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F6C0u;
        // 0x33f6c4: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6c0) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F6C8u;
    // 0x33f6c8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x33f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f6cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f6d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f6d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x33f6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33f6d8: 0xc098f88  jal         func_263E20
    ctx->pc = 0x33F6D8u;
    SET_GPR_U32(ctx, 31, 0x33F6E0u);
    ctx->pc = 0x33F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F6D8u;
    // 0x33f6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263E20u, 0x33F6D8u, 0x33F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F6E0u;
label_33f6e0:
    // 0x33f6e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f6e4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x33f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33f6e8: 0xc0cfb00  jal         func_33EC00
    ctx->pc = 0x33F6E8u;
    SET_GPR_U32(ctx, 31, 0x33F6F0u);
    ctx->pc = 0x33F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F6E8u;
    // 0x33f6ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EC00u, 0x33F6E8u, 0x33F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F6F0u;
label_33f6f0:
    // 0x33f6f0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x33F6F0u;
    {
        const bool branch_taken_0x33f6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f6f0) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F6F8u;
label_33f6f8:
    // 0x33f6f8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33f6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33f6fc: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x33f6fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33f700: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x33f700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f704: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x33f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x33f708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33f708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f70c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f710: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x33f710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f714: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33F714u;
    {
        const bool branch_taken_0x33f714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F714u;
        // 0x33f718: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f714) {
            ctx->pc = 0x33F760u;
            goto label_33f760;
        }
    }
    ctx->pc = 0x33F71Cu;
    // 0x33f71c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f720: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x33f720u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f724: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x33F724u;
    {
        const bool branch_taken_0x33f724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f724) {
            ctx->pc = 0x33F760u;
            goto label_33f760;
        }
    }
    ctx->pc = 0x33F72Cu;
    // 0x33f72c: 0xc098f88  jal         func_263E20
    ctx->pc = 0x33F72Cu;
    SET_GPR_U32(ctx, 31, 0x33F734u);
    ctx->pc = 0x33F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F72Cu;
    // 0x33f730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263E20u, 0x33F72Cu, 0x33F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F734u;
label_33f734:
    // 0x33f734: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33f734u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x33f738: 0xc098f88  jal         func_263E20
    ctx->pc = 0x33F738u;
    SET_GPR_U32(ctx, 31, 0x33F740u);
    ctx->pc = 0x33F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F738u;
    // 0x33f73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263E20u, 0x33F738u, 0x33F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F740u;
label_33f740:
    // 0x33f740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f744: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x33f744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x33f748: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x33f748u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x33f74c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x33f74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33f750: 0xc0cfb34  jal         func_33ECD0
    ctx->pc = 0x33F750u;
    SET_GPR_U32(ctx, 31, 0x33F758u);
    ctx->pc = 0x33F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F750u;
    // 0x33f754: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ECD0u, 0x33F750u, 0x33F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F758u;
label_33f758:
    // 0x33f758: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F758u;
    {
        const bool branch_taken_0x33f758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f758) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F760u;
label_33f760:
    // 0x33f760: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x33f760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x33f764: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33f764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33f768: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x33f768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33f76c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33f770: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x33f770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f774: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x33F774u;
    {
        const bool branch_taken_0x33f774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F774u;
        // 0x33f778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f774) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F77Cu;
    // 0x33f77c: 0xc098f88  jal         func_263E20
    ctx->pc = 0x33F77Cu;
    SET_GPR_U32(ctx, 31, 0x33F784u);
    ctx->pc = 0x263E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263E20u, 0x33F77Cu, 0x33F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F784u;
label_33f784:
    // 0x33f784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f788: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x33f788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33f78c: 0xc0cfb00  jal         func_33EC00
    ctx->pc = 0x33F78Cu;
    SET_GPR_U32(ctx, 31, 0x33F794u);
    ctx->pc = 0x33F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F78Cu;
    // 0x33f790: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EC00u, 0x33F78Cu, 0x33F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F794u;
label_33f794:
    // 0x33f794: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33F794u;
    {
        const bool branch_taken_0x33f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f794) {
            ctx->pc = 0x33F7A8u;
            goto label_33f7a8;
        }
    }
    ctx->pc = 0x33F79Cu;
    // 0x33f79c: 0x0  nop
    ctx->pc = 0x33f79cu;
    // NOP
label_33f7a0:
    // 0x33f7a0: 0xc0cfce4  jal         func_33F390
    ctx->pc = 0x33F7A0u;
    SET_GPR_U32(ctx, 31, 0x33F7A8u);
    ctx->pc = 0x33F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F7A0u;
    // 0x33f7a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F390u, 0x33F7A0u, 0x33F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7A8u;
label_33f7a8:
    // 0x33f7a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33f7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33f7ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33f7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f7b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33f7b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33f7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f7b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33f7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x33F7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7BCu;
        // 0x33f7c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F7C4u;
}
