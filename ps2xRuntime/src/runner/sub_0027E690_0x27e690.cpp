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

// Function: sub_0027E690
// Address: 0x27e690 - 0x27e8d8
void sub_0027E690_0x27e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E690_0x27e690");
#endif

    switch (ctx->pc) {
        case 0x27e720u: goto label_27e720;
        case 0x27e790u: goto label_27e790;
        case 0x27e7b8u: goto label_27e7b8;
        default: break;
    }

    ctx->pc = 0x27e690u;

    // 0x27e690: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x27e690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x27e694: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x27e694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x27e698: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27e698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27e69c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e6a0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27e6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27e6a4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27e6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27e6a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27e6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27e6ac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x27e6acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27e6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27e6b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27e6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27e6b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27e6bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27e6bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27e6c4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x27e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27e6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27e6cc: 0x24830194  addiu       $v1, $a0, 0x194
    ctx->pc = 0x27e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x27e6d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e6d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27e6d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e6d8: 0xafa800cc  sw          $t0, 0xCC($sp)
    ctx->pc = 0x27e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 8));
    // 0x27e6dc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x27e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x27e6e0: 0x8c850194  lw          $a1, 0x194($a0)
    ctx->pc = 0x27e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x27e6e4: 0x10a00070  beqz        $a1, . + 4 + (0x70 << 2)
    ctx->pc = 0x27E6E4u;
    {
        const bool branch_taken_0x27e6e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E6E4u;
        // 0x27e6e8: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e6e4) {
            ctx->pc = 0x27E8A8u;
            goto label_27e8a8;
        }
    }
    ctx->pc = 0x27E6ECu;
    // 0x27e6ec: 0x8c8301a4  lw          $v1, 0x1A4($a0)
    ctx->pc = 0x27e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x27e6f0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x27e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x27e6f4: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x27e6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x27e6f8: 0x90be0004  lbu         $fp, 0x4($a1)
    ctx->pc = 0x27e6f8u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27e6fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27e700: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x27e700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x27e704: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x27e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x27e708: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x27e708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x27e70c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e710: 0x8c750008  lw          $s5, 0x8($v1)
    ctx->pc = 0x27e710u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27e714: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x27E714u;
    {
        const bool branch_taken_0x27e714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E714u;
        // 0x27e718: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e714) {
            ctx->pc = 0x27E848u;
            goto label_27e848;
        }
    }
    ctx->pc = 0x27E71Cu;
    // 0x27e71c: 0x0  nop
    ctx->pc = 0x27e71cu;
    // NOP
label_27e720:
    // 0x27e720: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x27e720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x27e724: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x27E724u;
    {
        const bool branch_taken_0x27e724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e724) {
            ctx->pc = 0x27E830u;
            goto label_27e830;
        }
    }
    ctx->pc = 0x27E72Cu;
    // 0x27e72c: 0x97868920  lhu         $a2, -0x76E0($gp)
    ctx->pc = 0x27e72cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x27e730: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x27e730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x27e734: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27e734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27e738: 0x24840950  addiu       $a0, $a0, 0x950
    ctx->pc = 0x27e738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
    // 0x27e73c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x27e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27e740: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x27e740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27e744: 0xa7828920  sh          $v0, -0x76E0($gp)
    ctx->pc = 0x27e744u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936864), (uint16_t)GPR_U32(ctx, 2));
    // 0x27e748: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27e748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27e74c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x27e74cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e750: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x27e750u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x27e754: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x27e754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x27e758: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x27e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x27e75c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27e760: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x27e760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27e764: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x27e764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x27e768: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27E768u;
    {
        const bool branch_taken_0x27e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E768u;
        // 0x27e76c: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e768) {
            ctx->pc = 0x27E798u;
            goto label_27e798;
        }
    }
    ctx->pc = 0x27E770u;
    // 0x27e770: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x27e770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x27e774: 0x2462ff80  addiu       $v0, $v1, -0x80
    ctx->pc = 0x27e774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x27e778: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x27e778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x27e77c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27e780: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27e780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e784: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x27e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x27e788: 0xc041442  jal         func_105108
    ctx->pc = 0x27E788u;
    SET_GPR_U32(ctx, 31, 0x27E790u);
    ctx->pc = 0x27E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E788u;
    // 0x27e78c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27E788u, 0x27E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E790u;
label_27e790:
    // 0x27e790: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27E790u;
    {
        const bool branch_taken_0x27e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e790) {
            ctx->pc = 0x27E7B8u;
            goto label_27e7b8;
        }
    }
    ctx->pc = 0x27E798u;
label_27e798:
    // 0x27e798: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x27e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27e79c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27e7a0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x27e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x27e7a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27e7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7a8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x27e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x27e7ac: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x27e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x27e7b0: 0xc041442  jal         func_105108
    ctx->pc = 0x27E7B0u;
    SET_GPR_U32(ctx, 31, 0x27E7B8u);
    ctx->pc = 0x27E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E7B0u;
    // 0x27e7b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x27E7B0u, 0x27E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E7B8u;
label_27e7b8:
    // 0x27e7b8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x27e7b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27e7bc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E7BCu;
    {
        const bool branch_taken_0x27e7bc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7BCu;
        // 0x27e7c0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7bc) {
            ctx->pc = 0x27E7D0u;
            goto label_27e7d0;
        }
    }
    ctx->pc = 0x27E7C4u;
    // 0x27e7c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e7c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e7c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27E7C8u;
    {
        const bool branch_taken_0x27e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E7C8u;
        // 0x27e7cc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e7c8) {
            ctx->pc = 0x27E7E8u;
            goto label_27e7e8;
        }
    }
    ctx->pc = 0x27E7D0u;
label_27e7d0:
    // 0x27e7d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27e7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27e7d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27e7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27e7d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27e7d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e7dc: 0x0  nop
    ctx->pc = 0x27e7dcu;
    // NOP
    // 0x27e7e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e7e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e7e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27e7e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27e7e8:
    // 0x27e7e8: 0x27a300dc  addiu       $v1, $sp, 0xDC
    ctx->pc = 0x27e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x27e7ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e7f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27e7f4: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x27e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x27e7f8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x27e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x27e7fc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x27e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27e800: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x27e800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x27e804: 0xa2370005  sb          $s7, 0x5($s1)
    ctx->pc = 0x27e804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 23));
    // 0x27e808: 0xa2360004  sb          $s6, 0x4($s1)
    ctx->pc = 0x27e808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 22));
    // 0x27e80c: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x27e80cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e810: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27e810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27e814: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x27e814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x27e818: 0xa2240040  sb          $a0, 0x40($s1)
    ctx->pc = 0x27e818u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x27e81c: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x27e81cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27e820: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x27e820u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x27e824: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x27e824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e828: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x27e828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x27e82c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x27e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_27e830:
    // 0x27e830: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27e830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27e834: 0x25e182a  slt         $v1, $s2, $fp
    ctx->pc = 0x27e834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x27e838: 0x15a842  srl         $s5, $s5, 1
    ctx->pc = 0x27e838u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x27e83c: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x27E83Cu;
    {
        const bool branch_taken_0x27e83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E83Cu;
        // 0x27e840: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e83c) {
            ctx->pc = 0x27E720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e720;
        }
    }
    ctx->pc = 0x27E844u;
    // 0x27e844: 0x0  nop
    ctx->pc = 0x27e844u;
    // NOP
label_27e848:
    // 0x27e848: 0x8e6306b4  lw          $v1, 0x6B4($s3)
    ctx->pc = 0x27e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1716)));
    // 0x27e84c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x27e84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x27e850: 0xae6306b4  sw          $v1, 0x6B4($s3)
    ctx->pc = 0x27e850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1716), GPR_U32(ctx, 3));
    // 0x27e854: 0x928300c1  lbu         $v1, 0xC1($s4)
    ctx->pc = 0x27e854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 193)));
    // 0x27e858: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E858u;
    {
        const bool branch_taken_0x27e858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e858) {
            ctx->pc = 0x27E8A8u;
            goto label_27e8a8;
        }
    }
    ctx->pc = 0x27E860u;
    // 0x27e860: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x27e860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x27e864: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x27e864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x27e868: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x27E868u;
    {
        const bool branch_taken_0x27e868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e868) {
            ctx->pc = 0x27E8A8u;
            goto label_27e8a8;
        }
    }
    ctx->pc = 0x27E870u;
    // 0x27e870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e874: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x27e874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x27e878: 0xa0600081  sb          $zero, 0x81($v1)
    ctx->pc = 0x27e878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x27e87c: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x27e87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x27e880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e884: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x27e884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x27e888: 0xa0770082  sb          $s7, 0x82($v1)
    ctx->pc = 0x27e888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 130), (uint8_t)GPR_U32(ctx, 23));
    // 0x27e88c: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x27e88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x27e890: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e894: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x27e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x27e898: 0xa0760083  sb          $s6, 0x83($v1)
    ctx->pc = 0x27e898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 22));
    // 0x27e89c: 0x928300c0  lbu         $v1, 0xC0($s4)
    ctx->pc = 0x27e89cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x27e8a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27e8a4: 0xa28300c0  sb          $v1, 0xC0($s4)
    ctx->pc = 0x27e8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 192), (uint8_t)GPR_U32(ctx, 3));
label_27e8a8:
    // 0x27e8a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27e8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27e8ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27e8acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27e8b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27e8b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27e8b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27e8b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27e8b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27e8b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27e8bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27e8bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e8c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27e8c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e8c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27e8c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e8c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x27E8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E8D0u;
        // 0x27e8d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E8D8u;
}
