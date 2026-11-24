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

// Function: sub_00361900
// Address: 0x361900 - 0x361a10
void sub_00361900_0x361900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361900_0x361900");
#endif

    switch (ctx->pc) {
        case 0x361960u: goto label_361960;
        case 0x3619e8u: goto label_3619e8;
        case 0x3619f8u: goto label_3619f8;
        case 0x361a00u: goto label_361a00;
        default: break;
    }

    ctx->pc = 0x361900u;

    // 0x361900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x361900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x361904: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x361904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x361908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x361908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36190c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361910: 0x9085065c  lbu         $a1, 0x65C($a0)
    ctx->pc = 0x361910u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x361914: 0x10a20036  beq         $a1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x361914u;
    {
        const bool branch_taken_0x361914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x361918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361914u;
        // 0x361918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361914) {
            ctx->pc = 0x3619F0u;
            goto label_3619f0;
        }
    }
    ctx->pc = 0x36191Cu;
    // 0x36191c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361920: 0x10a2002f  beq         $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x361920u;
    {
        const bool branch_taken_0x361920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x361924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361920u;
        // 0x361924: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361920) {
            ctx->pc = 0x3619E0u;
            goto label_3619e0;
        }
    }
    ctx->pc = 0x361928u;
    // 0x361928: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x361928u;
    {
        const bool branch_taken_0x361928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x361928) {
            ctx->pc = 0x361938u;
            goto label_361938;
        }
    }
    ctx->pc = 0x361930u;
    // 0x361930: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x361930u;
    {
        const bool branch_taken_0x361930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361930) {
            ctx->pc = 0x3619F8u;
            goto label_3619f8;
        }
    }
    ctx->pc = 0x361938u;
label_361938:
    // 0x361938: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x361938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x36193c: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x36193Cu;
    {
        const bool branch_taken_0x36193c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x36193c) {
            ctx->pc = 0x361980u;
            goto label_361980;
        }
    }
    ctx->pc = 0x361944u;
    // 0x361944: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361944u;
    {
        const bool branch_taken_0x361944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361944) {
            ctx->pc = 0x361958u;
            goto label_361958;
        }
    }
    ctx->pc = 0x36194Cu;
    // 0x36194c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x36194Cu;
    {
        const bool branch_taken_0x36194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36194c) {
            ctx->pc = 0x3619F8u;
            goto label_3619f8;
        }
    }
    ctx->pc = 0x361954u;
    // 0x361954: 0x0  nop
    ctx->pc = 0x361954u;
    // NOP
label_361958:
    // 0x361958: 0xc0d85d8  jal         func_361760
    ctx->pc = 0x361958u;
    SET_GPR_U32(ctx, 31, 0x361960u);
    ctx->pc = 0x361760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361760u, 0x361958u, 0x361960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361960u;
label_361960:
    // 0x361960: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x361960u;
    {
        const bool branch_taken_0x361960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361960) {
            ctx->pc = 0x3619F8u;
            goto label_3619f8;
        }
    }
    ctx->pc = 0x361968u;
    // 0x361968: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x361968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x36196c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x361970: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x361970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x361974: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x361974u;
    {
        const bool branch_taken_0x361974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361974u;
        // 0x361978: 0xa6002b32  sh          $zero, 0x2B32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361974) {
            ctx->pc = 0x3619F8u;
            goto label_3619f8;
        }
    }
    ctx->pc = 0x36197Cu;
    // 0x36197c: 0x0  nop
    ctx->pc = 0x36197cu;
    // NOP
label_361980:
    // 0x361980: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x361980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x361984: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x361984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x361988: 0x96042b32  lhu         $a0, 0x2B32($s0)
    ctx->pc = 0x361988u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
    // 0x36198c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x36198cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x361990: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x361990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x361994: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x361994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x361998: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x361998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36199c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x36199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3619a0: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x3619a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3619a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3619a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3619a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3619a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3619ac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3619acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3619b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3619b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3619b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3619b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3619b8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3619b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3619bc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3619bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3619c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3619c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3619c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3619c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3619c8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x3619c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3619cc: 0x96022b32  lhu         $v0, 0x2B32($s0)
    ctx->pc = 0x3619ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
    // 0x3619d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3619d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3619d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3619D4u;
    {
        const bool branch_taken_0x3619d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3619D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3619D4u;
        // 0x3619d8: 0xa6022b32  sh          $v0, 0x2B32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3619d4) {
            ctx->pc = 0x3619F8u;
            goto label_3619f8;
        }
    }
    ctx->pc = 0x3619DCu;
    // 0x3619dc: 0x0  nop
    ctx->pc = 0x3619dcu;
    // NOP
label_3619e0:
    // 0x3619e0: 0xc0d85d8  jal         func_361760
    ctx->pc = 0x3619E0u;
    SET_GPR_U32(ctx, 31, 0x3619E8u);
    ctx->pc = 0x361760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361760u, 0x3619E0u, 0x3619E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619E8u;
label_3619e8:
    // 0x3619e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3619E8u;
    {
        const bool branch_taken_0x3619e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3619e8) {
            ctx->pc = 0x3619F8u;
            goto label_3619f8;
        }
    }
    ctx->pc = 0x3619F0u;
label_3619f0:
    // 0x3619f0: 0xc0d86d0  jal         func_361B40
    ctx->pc = 0x3619F0u;
    SET_GPR_U32(ctx, 31, 0x3619F8u);
    ctx->pc = 0x361B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361B40u, 0x3619F0u, 0x3619F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619F8u;
label_3619f8:
    // 0x3619f8: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3619F8u;
    SET_GPR_U32(ctx, 31, 0x361A00u);
    ctx->pc = 0x3619FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3619F8u;
    // 0x3619fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3619F8u, 0x361A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A00u;
label_361a00:
    // 0x361a00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x361a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361a08: 0x3e00008  jr          $ra
    ctx->pc = 0x361A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A08u;
        // 0x361a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361A10u;
}
