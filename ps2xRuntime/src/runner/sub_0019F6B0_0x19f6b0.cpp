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

// Function: sub_0019F6B0
// Address: 0x19f6b0 - 0x19fc9c
void sub_0019F6B0_0x19f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F6B0_0x19f6b0");
#endif

    switch (ctx->pc) {
        case 0x19f740u: goto label_19f740;
        case 0x19f798u: goto label_19f798;
        case 0x19f810u: goto label_19f810;
        case 0x19f9a8u: goto label_19f9a8;
        case 0x19fb6cu: goto label_19fb6c;
        case 0x19fb80u: goto label_19fb80;
        case 0x19fbd8u: goto label_19fbd8;
        case 0x19fbe8u: goto label_19fbe8;
        default: break;
    }

    ctx->pc = 0x19f6b0u;

    // 0x19f6b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19f6b4: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x19f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x19f6b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19f6bc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x19f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19f6c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19f6c4: 0x25100  sll         $t2, $v0, 4
    ctx->pc = 0x19f6c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19f6c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19f6cc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x19f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x19f6d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f6d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f6dc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x19f6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19f6e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f6e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19f6e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6e8: 0xac910040  sw          $s1, 0x40($a0)
    ctx->pc = 0x19f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 17));
    // 0x19f6ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19f6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x19f6f0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x19f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x19f6f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f6f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6f8: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x19f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x19f6fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f700: 0x8cc9007c  lw          $t1, 0x7C($a2)
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x19f704: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x19f704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f708: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19f70c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19f70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f710: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x19f710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x19f714: 0x3c0641c0  lui         $a2, 0x41C0
    ctx->pc = 0x19f714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16832 << 16));
    // 0x19f718: 0xac88002c  sw          $t0, 0x2C($a0)
    ctx->pc = 0x19f718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 8));
    // 0x19f71c: 0x12a8021  addu        $s0, $t1, $t2
    ctx->pc = 0x19f71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x19f720: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x19f720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x19f724: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x19f724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x19f728: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x19f728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x19f72c: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x19f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x19f730: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x19f730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x19f734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19f734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f738: 0xc0a883c  jal         func_2A20F0
    ctx->pc = 0x19F738u;
    SET_GPR_U32(ctx, 31, 0x19F740u);
    ctx->pc = 0x19F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F738u;
    // 0x19f73c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20F0u, 0x19F738u, 0x19F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F740u;
label_19f740:
    // 0x19f740: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x19f740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19f744: 0x3c024b80  lui         $v0, 0x4B80
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19328 << 16));
    // 0x19f748: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19f748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19f74c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19f74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19f750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f754: 0x3c02cb80  lui         $v0, 0xCB80
    ctx->pc = 0x19f754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52096 << 16));
    // 0x19f758: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x19f758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x19f75c: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x19f75cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x19f760: 0xae63004c  sw          $v1, 0x4C($s3)
    ctx->pc = 0x19f760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 3));
    // 0x19f764: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x19f764u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x19f768: 0x9023cea4  lbu         $v1, -0x315C($at)
    ctx->pc = 0x19f768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x19f76c: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x19f76cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x19f770: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19f774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19f774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f77c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x19f77cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f780: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x19f780u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f784: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x19f784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x19f788: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x19f788u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19f78c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x19F78Cu;
    {
        const bool branch_taken_0x19f78c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F78Cu;
        // 0x19f790: 0x460041c6  mov.s       $f7, $f8 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f78c) {
            ctx->pc = 0x19F7F8u;
            goto label_19f7f8;
        }
    }
    ctx->pc = 0x19F794u;
    // 0x19f794: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x19f794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f798:
    // 0x19f798: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x19f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19f79c: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x19f79cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f7a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x19F7A0u;
    {
        const bool branch_taken_0x19f7a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f7a0) {
            ctx->pc = 0x19F7B0u;
            goto label_19f7b0;
        }
    }
    ctx->pc = 0x19F7A8u;
    // 0x19f7a8: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x19f7a8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x19f7ac: 0x0  nop
    ctx->pc = 0x19f7acu;
    // NOP
label_19f7b0:
    // 0x19f7b0: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x19f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19f7b4: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x19f7b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f7b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x19F7B8u;
    {
        const bool branch_taken_0x19f7b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f7b8) {
            ctx->pc = 0x19F7C8u;
            goto label_19f7c8;
        }
    }
    ctx->pc = 0x19F7C0u;
    // 0x19f7c0: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x19f7c0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
    // 0x19f7c4: 0x0  nop
    ctx->pc = 0x19f7c4u;
    // NOP
label_19f7c8:
    // 0x19f7c8: 0x46054034  c.lt.s      $f8, $f5
    ctx->pc = 0x19f7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f7cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19F7CCu;
    {
        const bool branch_taken_0x19f7cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f7cc) {
            ctx->pc = 0x19F7D8u;
            goto label_19f7d8;
        }
    }
    ctx->pc = 0x19F7D4u;
    // 0x19f7d4: 0x46002a06  mov.s       $f8, $f5
    ctx->pc = 0x19f7d4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[5]);
label_19f7d8:
    // 0x19f7d8: 0x46043834  c.lt.s      $f7, $f4
    ctx->pc = 0x19f7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f7dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19F7DCu;
    {
        const bool branch_taken_0x19f7dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f7dc) {
            ctx->pc = 0x19F7E8u;
            goto label_19f7e8;
        }
    }
    ctx->pc = 0x19F7E4u;
    // 0x19f7e4: 0x460021c6  mov.s       $f7, $f4
    ctx->pc = 0x19f7e4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[4]);
label_19f7e8:
    // 0x19f7e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19f7ec: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x19f7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19f7f0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19F7F0u;
    {
        const bool branch_taken_0x19f7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7F0u;
        // 0x19f7f4: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7f0) {
            ctx->pc = 0x19F798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f798;
        }
    }
    ctx->pc = 0x19F7F8u;
label_19f7f8:
    // 0x19f7f8: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x19f7f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19f7fc: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x19F7FCu;
    {
        const bool branch_taken_0x19f7fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7FCu;
        // 0x19f800: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7fc) {
            ctx->pc = 0x19F870u;
            goto label_19f870;
        }
    }
    ctx->pc = 0x19F804u;
    // 0x19f804: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19f804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f808: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x19f808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x19f80c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x19f80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_19f810:
    // 0x19f810: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x19f810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x19f814: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x19f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19f818: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x19f818u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x19f81c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x19f81cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x19f820: 0x46003185  abs.s       $f6, $f6
    ctx->pc = 0x19f820u;
    ctx->f[6] = FPU_ABS_S(ctx->f[6]);
    // 0x19f824: 0x46043036  c.le.s      $f6, $f4
    ctx->pc = 0x19f824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f828: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F828u;
    {
        const bool branch_taken_0x19f828 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F828u;
        // 0x19f82c: 0x46002945  abs.s       $f5, $f5 (Delay Slot)
        ctx->f[5] = FPU_ABS_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f828) {
            ctx->pc = 0x19F840u;
            goto label_19f840;
        }
    }
    ctx->pc = 0x19F830u;
    // 0x19f830: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x19f830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f834: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19F834u;
    {
        const bool branch_taken_0x19f834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f834) {
            ctx->pc = 0x19F840u;
            goto label_19f840;
        }
    }
    ctx->pc = 0x19F83Cu;
    // 0x19f83c: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x19f83cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
label_19f840:
    // 0x19f840: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x19f840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f844: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x19F844u;
    {
        const bool branch_taken_0x19f844 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f844) {
            ctx->pc = 0x19F860u;
            goto label_19f860;
        }
    }
    ctx->pc = 0x19F84Cu;
    // 0x19f84c: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x19f84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f850: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x19F850u;
    {
        const bool branch_taken_0x19f850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f850) {
            ctx->pc = 0x19F860u;
            goto label_19f860;
        }
    }
    ctx->pc = 0x19F858u;
    // 0x19f858: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x19f858u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x19f85c: 0x0  nop
    ctx->pc = 0x19f85cu;
    // NOP
label_19f860:
    // 0x19f860: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19f860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19f864: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x19f864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19f868: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19F868u;
    {
        const bool branch_taken_0x19f868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F868u;
        // 0x19f86c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f868) {
            ctx->pc = 0x19F810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f810;
        }
    }
    ctx->pc = 0x19F870u;
label_19f870:
    // 0x19f870: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x19f870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x19f874: 0x46014101  sub.s       $f4, $f8, $f1
    ctx->pc = 0x19f874u;
    ctx->f[4] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x19f878: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19f878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19f87c: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x19f87cu;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
    // 0x19f880: 0x46032183  div.s       $f6, $f4, $f3
    ctx->pc = 0x19f880u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x19f884: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x19f884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x19f888: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x19f888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19f88c: 0x0  nop
    ctx->pc = 0x19f88cu;
    // NOP
    // 0x19f890: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x19f890u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x19f894: 0x46052036  c.le.s      $f4, $f5
    ctx->pc = 0x19f894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f898: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F898u;
    {
        const bool branch_taken_0x19f898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f898) {
            ctx->pc = 0x19F8B0u;
            goto label_19f8b0;
        }
    }
    ctx->pc = 0x19F8A0u;
    // 0x19f8a0: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f8a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x19f8a4: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x19f8a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19f8a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19F8A8u;
    {
        const bool branch_taken_0x19f8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8A8u;
        // 0x19f8ac: 0x46003901  sub.s       $f4, $f7, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8a8) {
            ctx->pc = 0x19F8CCu;
            goto label_19f8cc;
        }
    }
    ctx->pc = 0x19F8B0u;
label_19f8b0:
    // 0x19f8b0: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x19f8b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x19f8b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f8b8: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f8b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x19f8bc: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x19f8bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19f8c0: 0x0  nop
    ctx->pc = 0x19f8c0u;
    // NOP
    // 0x19f8c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f8c8: 0x46003901  sub.s       $f4, $f7, $f0
    ctx->pc = 0x19f8c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_19f8cc:
    // 0x19f8cc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19f8d0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x19f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x19f8d4: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x19f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x19f8d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19f8dc: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x19f8dcu;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
    // 0x19f8e0: 0x46022183  div.s       $f6, $f4, $f2
    ctx->pc = 0x19f8e0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x19f8e4: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x19f8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x19f8e8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x19f8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19f8ec: 0x0  nop
    ctx->pc = 0x19f8ecu;
    // NOP
    // 0x19f8f0: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x19f8f0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x19f8f4: 0x46052036  c.le.s      $f4, $f5
    ctx->pc = 0x19f8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f8f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F8F8u;
    {
        const bool branch_taken_0x19f8f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f8f8) {
            ctx->pc = 0x19F910u;
            goto label_19f910;
        }
    }
    ctx->pc = 0x19F900u;
    // 0x19f900: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x19f904: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x19f904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19f908: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19F908u;
    {
        const bool branch_taken_0x19f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F908u;
        // 0x19f90c: 0x3c023f93  lui         $v0, 0x3F93 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16275 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f908) {
            ctx->pc = 0x19F92Cu;
            goto label_19f92c;
        }
    }
    ctx->pc = 0x19F910u;
label_19f910:
    // 0x19f910: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x19f910u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x19f914: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f918: 0x46002964  .word       0x46002964                   # cvt.w.s     $f5, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f918u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x19f91c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x19f91cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19f920: 0x0  nop
    ctx->pc = 0x19f920u;
    // NOP
    // 0x19f924: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19f924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19f928: 0x3c023f93  lui         $v0, 0x3F93
    ctx->pc = 0x19f928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16275 << 16));
label_19f92c:
    // 0x19f92c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19f930: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x19f930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x19f934: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x19f934u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
    // 0x19f938: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x19f938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19f93c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f93cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f940: 0xe6630038  swc1        $f3, 0x38($s3)
    ctx->pc = 0x19f940u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x19f944: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x19f944u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x19f948: 0xe6640038  swc1        $f4, 0x38($s3)
    ctx->pc = 0x19f948u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x19f94c: 0xae720050  sw          $s2, 0x50($s3)
    ctx->pc = 0x19f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 18));
    // 0x19f950: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x19f950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f958: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x19f958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19f95c: 0xae720054  sw          $s2, 0x54($s3)
    ctx->pc = 0x19f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 18));
    // 0x19f960: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x19f960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x19f964: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x19f964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x19f968: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x19f968u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f96c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19f970: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x19f970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19f974: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x19f974u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f978: 0x10200077  beqz        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x19F978u;
    {
        const bool branch_taken_0x19f978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F978u;
        // 0x19f97c: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f978) {
            ctx->pc = 0x19FB58u;
            goto label_19fb58;
        }
    }
    ctx->pc = 0x19F980u;
    // 0x19f980: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19f980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19f984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f988: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x19f988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19f98c: 0x0  nop
    ctx->pc = 0x19f98cu;
    // NOP
    // 0x19f990: 0x460321c2  mul.s       $f7, $f4, $f3
    ctx->pc = 0x19f990u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x19f994: 0x46022182  mul.s       $f6, $f4, $f2
    ctx->pc = 0x19f994u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x19f998: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x19f998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x19f99c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f9a0: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x19f9a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x19f9a4: 0x0  nop
    ctx->pc = 0x19f9a4u;
    // NOP
label_19f9a8:
    // 0x19f9a8: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x19f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19f9ac: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x19f9acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x19f9b0: 0x46043900  add.s       $f4, $f7, $f4
    ctx->pc = 0x19f9b0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x19f9b4: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x19f9b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f9b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19F9B8u;
    {
        const bool branch_taken_0x19f9b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f9b8) {
            ctx->pc = 0x19F9D0u;
            goto label_19f9d0;
        }
    }
    ctx->pc = 0x19F9C0u;
    // 0x19f9c0: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f9c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19f9c4: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x19f9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19f9c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19F9C8u;
    {
        const bool branch_taken_0x19f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9c8) {
            ctx->pc = 0x19F9E4u;
            goto label_19f9e4;
        }
    }
    ctx->pc = 0x19F9D0u;
label_19f9d0:
    // 0x19f9d0: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x19f9d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x19f9d4: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f9d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19f9d8: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x19f9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19f9dc: 0x0  nop
    ctx->pc = 0x19f9dcu;
    // NOP
    // 0x19f9e0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x19f9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_19f9e4:
    // 0x19f9e4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F9E4u;
    {
        const bool branch_taken_0x19f9e4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x19F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9E4u;
        // 0x19f9e8: 0x54042  srl         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9e4) {
            ctx->pc = 0x19F9F8u;
            goto label_19f9f8;
        }
    }
    ctx->pc = 0x19F9ECu;
    // 0x19f9ec: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x19f9ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19f9f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F9F0u;
    {
        const bool branch_taken_0x19f9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F0u;
        // 0x19f9f4: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9f0) {
            ctx->pc = 0x19FA10u;
            goto label_19fa10;
        }
    }
    ctx->pc = 0x19F9F8u;
label_19f9f8:
    // 0x19f9f8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x19f9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19f9fc: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x19f9fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x19fa00: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x19fa00u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19fa04: 0x0  nop
    ctx->pc = 0x19fa04u;
    // NOP
    // 0x19fa08: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x19fa08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x19fa0c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x19fa0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_19fa10:
    // 0x19fa10: 0x0  nop
    ctx->pc = 0x19fa10u;
    // NOP
    // 0x19fa14: 0x0  nop
    ctx->pc = 0x19fa14u;
    // NOP
    // 0x19fa18: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x19fa18u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x19fa1c: 0x0  nop
    ctx->pc = 0x19fa1cu;
    // NOP
    // 0x19fa20: 0x0  nop
    ctx->pc = 0x19fa20u;
    // NOP
    // 0x19fa24: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x19fa24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fa28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19FA28u;
    {
        const bool branch_taken_0x19fa28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fa28) {
            ctx->pc = 0x19FA40u;
            goto label_19fa40;
        }
    }
    ctx->pc = 0x19FA30u;
    // 0x19fa30: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19fa30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19fa34: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x19fa34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19fa38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FA38u;
    {
        const bool branch_taken_0x19fa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA38u;
        // 0x19fa3c: 0xc4c40004  lwc1        $f4, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa38) {
            ctx->pc = 0x19FA58u;
            goto label_19fa58;
        }
    }
    ctx->pc = 0x19FA40u;
label_19fa40:
    // 0x19fa40: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x19fa40u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x19fa44: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19fa44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19fa48: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x19fa48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19fa4c: 0x0  nop
    ctx->pc = 0x19fa4cu;
    // NOP
    // 0x19fa50: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x19fa50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x19fa54: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x19fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19fa58:
    // 0x19fa58: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x19fa58u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x19fa5c: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x19fa5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x19fa60: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x19fa60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fa64: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19FA64u;
    {
        const bool branch_taken_0x19fa64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fa64) {
            ctx->pc = 0x19FA7Cu;
            goto label_19fa7c;
        }
    }
    ctx->pc = 0x19FA6Cu;
    // 0x19fa6c: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19fa6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19fa70: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x19fa70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19fa74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19FA74u;
    {
        const bool branch_taken_0x19fa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa74) {
            ctx->pc = 0x19FA90u;
            goto label_19fa90;
        }
    }
    ctx->pc = 0x19FA7Cu;
label_19fa7c:
    // 0x19fa7c: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x19fa7cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x19fa80: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19fa80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19fa84: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x19fa84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19fa88: 0x0  nop
    ctx->pc = 0x19fa88u;
    // NOP
    // 0x19fa8c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x19fa8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_19fa90:
    // 0x19fa90: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FA90u;
    {
        const bool branch_taken_0x19fa90 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x19FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA90u;
        // 0x19fa94: 0x84842  srl         $t1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa90) {
            ctx->pc = 0x19FAA4u;
            goto label_19faa4;
        }
    }
    ctx->pc = 0x19FA98u;
    // 0x19fa98: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x19fa98u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19fa9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FA9Cu;
    {
        const bool branch_taken_0x19fa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA9Cu;
        // 0x19faa0: 0x46802120  cvt.s.w     $f4, $f4 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa9c) {
            ctx->pc = 0x19FABCu;
            goto label_19fabc;
        }
    }
    ctx->pc = 0x19FAA4u;
label_19faa4:
    // 0x19faa4: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x19faa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x19faa8: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x19faa8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x19faac: 0x44892000  mtc1        $t1, $f4
    ctx->pc = 0x19faacu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19fab0: 0x0  nop
    ctx->pc = 0x19fab0u;
    // NOP
    // 0x19fab4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x19fab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x19fab8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x19fab8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_19fabc:
    // 0x19fabc: 0x0  nop
    ctx->pc = 0x19fabcu;
    // NOP
    // 0x19fac0: 0x0  nop
    ctx->pc = 0x19fac0u;
    // NOP
    // 0x19fac4: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x19fac4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x19fac8: 0x0  nop
    ctx->pc = 0x19fac8u;
    // NOP
    // 0x19facc: 0x0  nop
    ctx->pc = 0x19faccu;
    // NOP
    // 0x19fad0: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x19fad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19fad4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19FAD4u;
    {
        const bool branch_taken_0x19fad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fad4) {
            ctx->pc = 0x19FAECu;
            goto label_19faec;
        }
    }
    ctx->pc = 0x19FADCu;
    // 0x19fadc: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19fadcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19fae0: 0x440a2000  mfc1        $t2, $f4
    ctx->pc = 0x19fae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x19fae4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FAE4u;
    {
        const bool branch_taken_0x19fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAE4u;
        // 0x19fae8: 0x8e690030  lw          $t1, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fae4) {
            ctx->pc = 0x19FB04u;
            goto label_19fb04;
        }
    }
    ctx->pc = 0x19FAECu;
label_19faec:
    // 0x19faec: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x19faecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x19faf0: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19faf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19faf4: 0x440a2000  mfc1        $t2, $f4
    ctx->pc = 0x19faf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x19faf8: 0x0  nop
    ctx->pc = 0x19faf8u;
    // NOP
    // 0x19fafc: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x19fafcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x19fb00: 0x8e690030  lw          $t1, 0x30($s3)
    ctx->pc = 0x19fb00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_19fb04:
    // 0x19fb04: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x19fb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x19fb08: 0x8e680050  lw          $t0, 0x50($s3)
    ctx->pc = 0x19fb08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x19fb0c: 0x8e6b002c  lw          $t3, 0x2C($s3)
    ctx->pc = 0x19fb0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x19fb10: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x19fb10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x19fb14: 0x12a5023  subu        $t2, $t1, $t2
    ctx->pc = 0x19fb14u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x19fb18: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x19fb18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x19fb1c: 0x14b4818  mult        $t1, $t2, $t3
    ctx->pc = 0x19fb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x19fb20: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x19fb20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x19fb24: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x19fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x19fb28: 0x8e69002c  lw          $t1, 0x2C($s3)
    ctx->pc = 0x19fb28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x19fb2c: 0x8e680054  lw          $t0, 0x54($s3)
    ctx->pc = 0x19fb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x19fb30: 0x71494818  mult1       $t1, $t2, $t1
    ctx->pc = 0x19fb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x19fb34: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x19fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x19fb38: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19fb3c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x19fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x19fb40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x19fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x19fb44: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x19fb44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19fb48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19fb4c: 0x65282b  sltu        $a1, $v1, $a1
    ctx->pc = 0x19fb4cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19fb50: 0x14a0ff95  bnez        $a1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x19FB50u;
    {
        const bool branch_taken_0x19fb50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB50u;
        // 0x19fb54: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb50) {
            ctx->pc = 0x19F9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9a8;
        }
    }
    ctx->pc = 0x19FB58u;
label_19fb58:
    // 0x19fb58: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x19fb5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19fb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb64: 0xc0a883c  jal         func_2A20F0
    ctx->pc = 0x19FB64u;
    SET_GPR_U32(ctx, 31, 0x19FB6Cu);
    ctx->pc = 0x19FB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB64u;
    // 0x19fb68: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20F0u, 0x19FB64u, 0x19FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB6Cu;
label_19fb6c:
    // 0x19fb6c: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x19fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x19fb70: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x19fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19fb74: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x19fb74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19fb78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb7c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x19fb7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19fb80:
    // 0x19fb80: 0xac720010  sw          $s2, 0x10($v1)
    ctx->pc = 0x19fb80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
    // 0x19fb84: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x19fb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x19fb88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb8c: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x19fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x19fb90: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x19fb90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x19fb94: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x19fb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19fb98: 0x2459021  addu        $s2, $s2, $a1
    ctx->pc = 0x19fb98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x19fb9c: 0xac720018  sw          $s2, 0x18($v1)
    ctx->pc = 0x19fb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 18));
    // 0x19fba0: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x19fba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x19fba4: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x19fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x19fba8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x19fba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x19fbac: 0x70a62818  mult1       $a1, $a1, $a2
    ctx->pc = 0x19fbacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19fbb0: 0x2459021  addu        $s2, $s2, $a1
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x19fbb4: 0xac720020  sw          $s2, 0x20($v1)
    ctx->pc = 0x19fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 18));
    // 0x19fbb8: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x19fbbc: 0x8e660030  lw          $a2, 0x30($s3)
    ctx->pc = 0x19fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x19fbc0: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x19fbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x19fbc4: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x19fbc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19fbc8: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x19fbc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19fbcc: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x19FBCCu;
    {
        const bool branch_taken_0x19fbcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBCCu;
        // 0x19fbd0: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbcc) {
            ctx->pc = 0x19FC68u;
            goto label_19fc68;
        }
    }
    ctx->pc = 0x19FBD4u;
    // 0x19fbd4: 0x0  nop
    ctx->pc = 0x19fbd4u;
    // NOP
label_19fbd8:
    // 0x19fbd8: 0x7082b  sltu        $at, $zero, $a3
    ctx->pc = 0x19fbd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x19fbdc: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x19FBDCu;
    {
        const bool branch_taken_0x19fbdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBDCu;
        // 0x19fbe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbdc) {
            ctx->pc = 0x19FC50u;
            goto label_19fc50;
        }
    }
    ctx->pc = 0x19FBE4u;
    // 0x19fbe4: 0x0  nop
    ctx->pc = 0x19fbe4u;
    // NOP
label_19fbe8:
    // 0x19fbe8: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x19fbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19fbec: 0x873818  mult        $a3, $a0, $a3
    ctx->pc = 0x19fbecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x19fbf0: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x19fbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x19fbf4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x19fbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x19fbf8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19fbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19fbfc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x19fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x19fc00: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x19fc00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x19fc04: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x19fc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19fc08: 0x70873818  mult1       $a3, $a0, $a3
    ctx->pc = 0x19fc08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x19fc0c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x19fc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x19fc10: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x19fc10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x19fc14: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19fc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19fc18: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x19fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x19fc1c: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x19fc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x19fc20: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x19fc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19fc24: 0x873818  mult        $a3, $a0, $a3
    ctx->pc = 0x19fc24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x19fc28: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x19fc28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x19fc2c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x19fc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x19fc30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19fc34: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19fc38: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x19fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x19fc3c: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x19fc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x19fc40: 0xa7302b  sltu        $a2, $a1, $a3
    ctx->pc = 0x19fc40u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x19fc44: 0x14c0ffe8  bnez        $a2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19FC44u;
    {
        const bool branch_taken_0x19fc44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc44) {
            ctx->pc = 0x19FBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fbe8;
        }
    }
    ctx->pc = 0x19FC4Cu;
    // 0x19fc4c: 0x0  nop
    ctx->pc = 0x19fc4cu;
    // NOP
label_19fc50:
    // 0x19fc50: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x19fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x19fc54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19fc58: 0x85282b  sltu        $a1, $a0, $a1
    ctx->pc = 0x19fc58u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19fc5c: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x19FC5Cu;
    {
        const bool branch_taken_0x19fc5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc5c) {
            ctx->pc = 0x19FBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19FC64u;
    // 0x19fc64: 0x0  nop
    ctx->pc = 0x19fc64u;
    // NOP
label_19fc68:
    // 0x19fc68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19fc6c: 0x2c440002  sltiu       $a0, $v0, 0x2
    ctx->pc = 0x19fc6cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19fc70: 0x1480ffc3  bnez        $a0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x19FC70u;
    {
        const bool branch_taken_0x19fc70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC70u;
        // 0x19fc74: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc70) {
            ctx->pc = 0x19FB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fb80;
        }
    }
    ctx->pc = 0x19FC78u;
    // 0x19fc78: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19fc78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19fc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fc80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19fc80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fc84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19fc84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fc88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19fc88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fc8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19fc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fc90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fc94: 0x3e00008  jr          $ra
    ctx->pc = 0x19FC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC94u;
        // 0x19fc98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FC9Cu;
}
