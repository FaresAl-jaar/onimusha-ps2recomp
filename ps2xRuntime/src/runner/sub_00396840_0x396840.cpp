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

// Function: sub_00396840
// Address: 0x396840 - 0x3969f4
void sub_00396840_0x396840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396840_0x396840");
#endif

    switch (ctx->pc) {
        case 0x39685cu: goto label_39685c;
        case 0x396874u: goto label_396874;
        case 0x3968dcu: goto label_3968dc;
        case 0x3968e4u: goto label_3968e4;
        case 0x3968f4u: goto label_3968f4;
        case 0x396914u: goto label_396914;
        case 0x396924u: goto label_396924;
        case 0x396940u: goto label_396940;
        case 0x396948u: goto label_396948;
        case 0x396974u: goto label_396974;
        case 0x3969ccu: goto label_3969cc;
        case 0x3969dcu: goto label_3969dc;
        default: break;
    }

    ctx->pc = 0x396840u;

    // 0x396840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x396840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x396844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x396848: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x396848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39684c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39684cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396850: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x396850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x396854: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x396854u;
    SET_GPR_U32(ctx, 31, 0x39685Cu);
    ctx->pc = 0x396858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396854u;
    // 0x396858: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x396854u, 0x39685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39685Cu;
label_39685c:
    // 0x39685c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39685Cu;
    {
        const bool branch_taken_0x39685c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39685Cu;
        // 0x396860: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39685c) {
            ctx->pc = 0x396878u;
            goto label_396878;
        }
    }
    ctx->pc = 0x396864u;
    // 0x396864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x396864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39686c: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x39686Cu;
    SET_GPR_U32(ctx, 31, 0x396874u);
    ctx->pc = 0x396870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39686Cu;
    // 0x396870: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x39686Cu, 0x396874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396874u;
label_396874:
    // 0x396874: 0x0  nop
    ctx->pc = 0x396874u;
    // NOP
label_396878:
    // 0x396878: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x396878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x39687c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396880: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x396880u;
    {
        const bool branch_taken_0x396880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x396880) {
            ctx->pc = 0x3968A0u;
            goto label_3968a0;
        }
    }
    ctx->pc = 0x396888u;
    // 0x396888: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x396888u;
    {
        const bool branch_taken_0x396888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396888) {
            ctx->pc = 0x396898u;
            goto label_396898;
        }
    }
    ctx->pc = 0x396890u;
    // 0x396890: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x396890u;
    {
        const bool branch_taken_0x396890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396890) {
            ctx->pc = 0x3969E0u;
            goto label_3969e0;
        }
    }
    ctx->pc = 0x396898u;
label_396898:
    // 0x396898: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x396898u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39689c: 0x0  nop
    ctx->pc = 0x39689cu;
    // NOP
label_3968a0:
    // 0x3968a0: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x3968a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x3968a4: 0x86022b30  lh          $v0, 0x2B30($s0)
    ctx->pc = 0x3968a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3968a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3968a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3968ac: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x3968acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x3968b0: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x3968b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x3968b4: 0x28421000  slti        $v0, $v0, 0x1000
    ctx->pc = 0x3968b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x3968b8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3968B8u;
    {
        const bool branch_taken_0x3968b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3968b8) {
            ctx->pc = 0x396968u;
            goto label_396968;
        }
    }
    ctx->pc = 0x3968C0u;
    // 0x3968c0: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x3968c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3968c4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3968c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3968c8: 0x24422330  addiu       $v0, $v0, 0x2330
    ctx->pc = 0x3968c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9008));
    // 0x3968cc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3968ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3968d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3968d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3968d4: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3968D4u;
    SET_GPR_U32(ctx, 31, 0x3968DCu);
    ctx->pc = 0x3968D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3968D4u;
    // 0x3968d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3968D4u, 0x3968DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3968DCu;
label_3968dc:
    // 0x3968dc: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3968DCu;
    SET_GPR_U32(ctx, 31, 0x3968E4u);
    ctx->pc = 0x3968E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3968DCu;
    // 0x3968e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3968DCu, 0x3968E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3968E4u;
label_3968e4:
    // 0x3968e4: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3968e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3968e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3968e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3968ec: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3968ECu;
    SET_GPR_U32(ctx, 31, 0x3968F4u);
    ctx->pc = 0x3968F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3968ECu;
    // 0x3968f0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3968ECu, 0x3968F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3968F4u;
label_3968f4:
    // 0x3968f4: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3968f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3968f8: 0x3c0243f1  lui         $v0, 0x43F1
    ctx->pc = 0x3968f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17393 << 16));
    // 0x3968fc: 0x3442463b  ori         $v0, $v0, 0x463B
    ctx->pc = 0x3968fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17979);
    // 0x396900: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x396900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x396904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x396904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x396908: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x396908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39690c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x39690Cu;
    SET_GPR_U32(ctx, 31, 0x396914u);
    ctx->pc = 0x396910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39690Cu;
    // 0x396910: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x39690Cu, 0x396914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396914u;
label_396914:
    // 0x396914: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x396914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x396918: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x396918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39691c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x39691Cu;
    SET_GPR_U32(ctx, 31, 0x396924u);
    ctx->pc = 0x396920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39691Cu;
    // 0x396920: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x39691Cu, 0x396924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396924u;
label_396924:
    // 0x396924: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x396924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x396928: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x396928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39692c: 0x24422330  addiu       $v0, $v0, 0x2330
    ctx->pc = 0x39692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9008));
    // 0x396930: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x396930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x396934: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x396934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x396938: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x396938u;
    SET_GPR_U32(ctx, 31, 0x396940u);
    ctx->pc = 0x39693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396938u;
    // 0x39693c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x396938u, 0x396940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396940u;
label_396940:
    // 0x396940: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x396940u;
    SET_GPR_U32(ctx, 31, 0x396948u);
    ctx->pc = 0x396944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396940u;
    // 0x396944: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x396940u, 0x396948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396948u;
label_396948:
    // 0x396948: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x396948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x39694c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x39694cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x396950: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x396950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x396954: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x396954u;
    {
        const bool branch_taken_0x396954 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x396958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396954u;
        // 0x396958: 0xa60300c0  sh          $v1, 0xC0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396954) {
            ctx->pc = 0x396968u;
            goto label_396968;
        }
    }
    ctx->pc = 0x39695Cu;
    // 0x39695c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x39695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x396960: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x396960u;
    {
        const bool branch_taken_0x396960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396960u;
        // 0x396964: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396960) {
            ctx->pc = 0x3969E0u;
            goto label_3969e0;
        }
    }
    ctx->pc = 0x396968u;
label_396968:
    // 0x396968: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x396968u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x39696c: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x39696Cu;
    SET_GPR_U32(ctx, 31, 0x396974u);
    ctx->pc = 0x396970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39696Cu;
    // 0x396970: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x39696Cu, 0x396974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396974u;
label_396974:
    // 0x396974: 0x86062b30  lh          $a2, 0x2B30($s0)
    ctx->pc = 0x396974u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x396978: 0x3c0243f1  lui         $v0, 0x43F1
    ctx->pc = 0x396978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17393 << 16));
    // 0x39697c: 0x3443463b  ori         $v1, $v0, 0x463B
    ctx->pc = 0x39697cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17979);
    // 0x396980: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x396980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x396984: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x396984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x396988: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x396988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39698c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x39698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x396990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x396990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x396994: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x396994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x396998: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x396998u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39699c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3969a0: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3969a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3969a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3969a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3969a8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3969a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3969ac: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3969acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x3969b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3969b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3969b4: 0x0  nop
    ctx->pc = 0x3969b4u;
    // NOP
    // 0x3969b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3969b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3969bc: 0x0  nop
    ctx->pc = 0x3969bcu;
    // NOP
    // 0x3969c0: 0x0  nop
    ctx->pc = 0x3969c0u;
    // NOP
    // 0x3969c4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3969C4u;
    SET_GPR_U32(ctx, 31, 0x3969CCu);
    ctx->pc = 0x3969C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3969C4u;
    // 0x3969c8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3969C4u, 0x3969CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3969CCu;
label_3969cc:
    // 0x3969cc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3969ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3969d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3969d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3969d4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3969D4u;
    SET_GPR_U32(ctx, 31, 0x3969DCu);
    ctx->pc = 0x3969D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3969D4u;
    // 0x3969d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3969D4u, 0x3969DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3969DCu;
label_3969dc:
    // 0x3969dc: 0x0  nop
    ctx->pc = 0x3969dcu;
    // NOP
label_3969e0:
    // 0x3969e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3969e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3969e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3969e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3969e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3969e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3969ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3969ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3969F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969ECu;
        // 0x3969f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3969ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3969F4u;
}
