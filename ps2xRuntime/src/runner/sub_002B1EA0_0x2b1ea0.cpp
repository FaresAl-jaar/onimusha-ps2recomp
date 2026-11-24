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

// Function: sub_002B1EA0
// Address: 0x2b1ea0 - 0x2b218c
void sub_002B1EA0_0x2b1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1EA0_0x2b1ea0");
#endif

    switch (ctx->pc) {
        case 0x2b1ec8u: goto label_2b1ec8;
        case 0x2b1ef0u: goto label_2b1ef0;
        case 0x2b2158u: goto label_2b2158;
        default: break;
    }

    ctx->pc = 0x2b1ea0u;

    // 0x2b1ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1ea8: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x2b1ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b1eac: 0x114000b4  beqz        $t2, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2B1EACu;
    {
        const bool branch_taken_0x2b1eac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EACu;
        // 0x2b1eb0: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1eac) {
            ctx->pc = 0x2B2180u;
            goto label_2b2180;
        }
    }
    ctx->pc = 0x2B1EB4u;
    // 0x2b1eb4: 0x8d640008  lw          $a0, 0x8($t3)
    ctx->pc = 0x2b1eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2b1eb8: 0x2565001c  addiu       $a1, $t3, 0x1C
    ctx->pc = 0x2b1eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 28));
    // 0x2b1ebc: 0x2566000c  addiu       $a2, $t3, 0xC
    ctx->pc = 0x2b1ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x2b1ec0: 0xc0ac220  jal         func_2B0880
    ctx->pc = 0x2B1EC0u;
    SET_GPR_U32(ctx, 31, 0x2B1EC8u);
    ctx->pc = 0x2B1EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EC0u;
    // 0x2b1ec4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0880u, 0x2B1EC0u, 0x2B1EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EC8u;
label_2b1ec8:
    // 0x2b1ec8: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x2b1ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2b1ecc: 0x8d63000c  lw          $v1, 0xC($t3)
    ctx->pc = 0x2b1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2b1ed0: 0x68082b  sltu        $at, $v1, $t0
    ctx->pc = 0x2b1ed0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2b1ed4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1ED4u;
    {
        const bool branch_taken_0x2b1ed4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ed4) {
            ctx->pc = 0x2B1EE8u;
            goto label_2b1ee8;
        }
    }
    ctx->pc = 0x2B1EDCu;
    // 0x2b1edc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2B1EDCu;
    {
        const bool branch_taken_0x2b1edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EDCu;
        // 0x2b1ee0: 0x9167002c  lbu         $a3, 0x2C($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1edc) {
            ctx->pc = 0x2B2080u;
            goto label_2b2080;
        }
    }
    ctx->pc = 0x2B1EE4u;
    // 0x2b1ee4: 0x0  nop
    ctx->pc = 0x2b1ee4u;
    // NOP
label_2b1ee8:
    // 0x2b1ee8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b1ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1eec: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2b1eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ef0:
    // 0x2b1ef0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b1ef4: 0x103082b  sltu        $at, $t0, $v1
    ctx->pc = 0x2b1ef4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b1ef8: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x2B1EF8u;
    {
        const bool branch_taken_0x2b1ef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EF8u;
        // 0x2b1efc: 0xeb1821  addu        $v1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ef8) {
            ctx->pc = 0x2B2068u;
            goto label_2b2068;
        }
    }
    ctx->pc = 0x2B1F00u;
    // 0x2b1f00: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2b1f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b1f04: 0x9066002c  lbu         $a2, 0x2C($v1)
    ctx->pc = 0x2b1f04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2b1f08: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2b1f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2b1f0c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2b1f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1f10: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b1f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b1f14: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2b1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b1f18: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1F18u;
    {
        const bool branch_taken_0x2b1f18 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F18u;
        // 0x2b1f1c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f18) {
            ctx->pc = 0x2B1F2Cu;
            goto label_2b1f2c;
        }
    }
    ctx->pc = 0x2B1F20u;
    // 0x2b1f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1F24u;
    {
        const bool branch_taken_0x2b1f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F24u;
        // 0x2b1f28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f24) {
            ctx->pc = 0x2B1F44u;
            goto label_2b1f44;
        }
    }
    ctx->pc = 0x2B1F2Cu;
label_2b1f2c:
    // 0x2b1f2c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b1f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b1f30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b1f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b1f34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b1f34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f38: 0x0  nop
    ctx->pc = 0x2b1f38u;
    // NOP
    // 0x2b1f3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b1f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b1f40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b1f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b1f44:
    // 0x2b1f44: 0x1051823  subu        $v1, $t0, $a1
    ctx->pc = 0x2b1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2b1f48: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1F48u;
    {
        const bool branch_taken_0x2b1f48 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F48u;
        // 0x2b1f4c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f48) {
            ctx->pc = 0x2B1F5Cu;
            goto label_2b1f5c;
        }
    }
    ctx->pc = 0x2B1F50u;
    // 0x2b1f50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1F54u;
    {
        const bool branch_taken_0x2b1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F54u;
        // 0x2b1f58: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f54) {
            ctx->pc = 0x2B1F74u;
            goto label_2b1f74;
        }
    }
    ctx->pc = 0x2B1F5Cu;
label_2b1f5c:
    // 0x2b1f5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b1f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b1f60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b1f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b1f64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b1f64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f68: 0x0  nop
    ctx->pc = 0x2b1f68u;
    // NOP
    // 0x2b1f6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b1f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b1f70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b1f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b1f74:
    // 0x2b1f74: 0x0  nop
    ctx->pc = 0x2b1f74u;
    // NOP
    // 0x2b1f78: 0x0  nop
    ctx->pc = 0x2b1f78u;
    // NOP
    // 0x2b1f7c: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2b1f7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b1f80: 0x0  nop
    ctx->pc = 0x2b1f80u;
    // NOP
    // 0x2b1f84: 0xeb1821  addu        $v1, $a3, $t3
    ctx->pc = 0x2b1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x2b1f88: 0x9063002d  lbu         $v1, 0x2D($v1)
    ctx->pc = 0x2b1f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 45)));
    // 0x2b1f8c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1F8Cu;
    {
        const bool branch_taken_0x2b1f8c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F8Cu;
        // 0x2b1f90: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f8c) {
            ctx->pc = 0x2B1FA0u;
            goto label_2b1fa0;
        }
    }
    ctx->pc = 0x2B1F94u;
    // 0x2b1f94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1F98u;
    {
        const bool branch_taken_0x2b1f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F98u;
        // 0x2b1f9c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f98) {
            ctx->pc = 0x2B1FB8u;
            goto label_2b1fb8;
        }
    }
    ctx->pc = 0x2B1FA0u;
label_2b1fa0:
    // 0x2b1fa0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b1fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b1fa4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b1fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b1fa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b1fa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1fac: 0x0  nop
    ctx->pc = 0x2b1facu;
    // NOP
    // 0x2b1fb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b1fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b1fb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b1fb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b1fb8:
    // 0x2b1fb8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1FB8u;
    {
        const bool branch_taken_0x2b1fb8 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FB8u;
        // 0x2b1fbc: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fb8) {
            ctx->pc = 0x2B1FCCu;
            goto label_2b1fcc;
        }
    }
    ctx->pc = 0x2B1FC0u;
    // 0x2b1fc0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2b1fc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1fc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1FC4u;
    {
        const bool branch_taken_0x2b1fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FC4u;
        // 0x2b1fc8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fc4) {
            ctx->pc = 0x2B1FE4u;
            goto label_2b1fe4;
        }
    }
    ctx->pc = 0x2B1FCCu;
label_2b1fcc:
    // 0x2b1fcc: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2b1fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b1fd0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b1fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b1fd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b1fd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1fd8: 0x0  nop
    ctx->pc = 0x2b1fd8u;
    // NOP
    // 0x2b1fdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b1fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b1fe0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b1fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b1fe4:
    // 0x2b1fe4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b1fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b1fe8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1FE8u;
    {
        const bool branch_taken_0x2b1fe8 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FE8u;
        // 0x2b1fec: 0x46001042  mul.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fe8) {
            ctx->pc = 0x2B1FFCu;
            goto label_2b1ffc;
        }
    }
    ctx->pc = 0x2B1FF0u;
    // 0x2b1ff0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2b1ff0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1ff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B1FF4u;
    {
        const bool branch_taken_0x2b1ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FF4u;
        // 0x2b1ff8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ff4) {
            ctx->pc = 0x2B2018u;
            goto label_2b2018;
        }
    }
    ctx->pc = 0x2B1FFCu;
label_2b1ffc:
    // 0x2b1ffc: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x2b1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2b2000: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2b2000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b2004: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b2004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b2008: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b2008u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b200c: 0x0  nop
    ctx->pc = 0x2b200cu;
    // NOP
    // 0x2b2010: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b2010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b2014: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b2014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b2018:
    // 0x2b2018: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2b2018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b201c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b201cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b2020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2024: 0x0  nop
    ctx->pc = 0x2b2024u;
    // NOP
    // 0x2b2028: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b2028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b202c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B202Cu;
    {
        const bool branch_taken_0x2b202c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b202c) {
            ctx->pc = 0x2B2044u;
            goto label_2b2044;
        }
    }
    ctx->pc = 0x2B2034u;
    // 0x2b2034: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2034u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b2038: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b2038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b203c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B203Cu;
    {
        const bool branch_taken_0x2b203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B203Cu;
        // 0x2b2040: 0x308700ff  andi        $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b203c) {
            ctx->pc = 0x2B2060u;
            goto label_2b2060;
        }
    }
    ctx->pc = 0x2B2044u;
label_2b2044:
    // 0x2b2044: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b2044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b2048: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b2048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b204c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b204cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b2050: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b2050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b2054: 0x0  nop
    ctx->pc = 0x2b2054u;
    // NOP
    // 0x2b2058: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b2058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b205c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x2b205cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b2060:
    // 0x2b2060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2060u;
    {
        const bool branch_taken_0x2b2060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2060) {
            ctx->pc = 0x2B2080u;
            goto label_2b2080;
        }
    }
    ctx->pc = 0x2B2068u;
label_2b2068:
    // 0x2b2068: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b2068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b206c: 0x2ce30003  sltiu       $v1, $a3, 0x3
    ctx->pc = 0x2b206cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b2070: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2B2070u;
    {
        const bool branch_taken_0x2b2070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2070u;
        // 0x2b2074: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2070) {
            ctx->pc = 0x2B1EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1ef0;
        }
    }
    ctx->pc = 0x2B2078u;
    // 0x2b2078: 0x9167002f  lbu         $a3, 0x2F($t3)
    ctx->pc = 0x2b2078u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 47)));
    // 0x2b207c: 0x0  nop
    ctx->pc = 0x2b207cu;
    // NOP
label_2b2080:
    // 0x2b2080: 0x8f858220  lw          $a1, -0x7DE0($gp)
    ctx->pc = 0x2b2080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935072)));
    // 0x2b2084: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x2b2084u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x2b2088: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2b2088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2b208c: 0xa1450001  sb          $a1, 0x1($t2)
    ctx->pc = 0x2b208cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b2090: 0x938589b0  lbu         $a1, -0x7650($gp)
    ctx->pc = 0x2b2090u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x2b2094: 0xa1450002  sb          $a1, 0x2($t2)
    ctx->pc = 0x2b2094u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b2098: 0x93858224  lbu         $a1, -0x7DDC($gp)
    ctx->pc = 0x2b2098u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935076)));
    // 0x2b209c: 0xad450010  sw          $a1, 0x10($t2)
    ctx->pc = 0x2b209cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 5));
    // 0x2b20a0: 0x8d65001c  lw          $a1, 0x1C($t3)
    ctx->pc = 0x2b20a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x2b20a4: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x2b20a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b20a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B20A8u;
    {
        const bool branch_taken_0x2b20a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20A8u;
        // 0x2b20ac: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20a8) {
            ctx->pc = 0x2B20B8u;
            goto label_2b20b8;
        }
    }
    ctx->pc = 0x2B20B0u;
    // 0x2b20b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B20B0u;
    {
        const bool branch_taken_0x2b20b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20B0u;
        // 0x2b20b4: 0xad400010  sw          $zero, 0x10($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20b0) {
            ctx->pc = 0x2B20C0u;
            goto label_2b20c0;
        }
    }
    ctx->pc = 0x2B20B8u;
label_2b20b8:
    // 0x2b20b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b20bc: 0xad440010  sw          $a0, 0x10($t2)
    ctx->pc = 0x2b20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 4));
label_2b20c0:
    // 0x2b20c0: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2b20c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2b20c4: 0x1880000e  blez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B20C4u;
    {
        const bool branch_taken_0x2b20c4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2B20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20C4u;
        // 0x2b20c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20c4) {
            ctx->pc = 0x2B2100u;
            goto label_2b2100;
        }
    }
    ctx->pc = 0x2B20CCu;
    // 0x2b20cc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2b20ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b20d0: 0xad440064  sw          $a0, 0x64($t2)
    ctx->pc = 0x2b20d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 100), GPR_U32(ctx, 4));
    // 0x2b20d4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2b20d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2b20d8: 0xa1400054  sb          $zero, 0x54($t2)
    ctx->pc = 0x2b20d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b20dc: 0x2223c  dsll32      $a0, $v0, 8
    ctx->pc = 0x2b20dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 8));
    // 0x2b20e0: 0xa1470055  sb          $a3, 0x55($t2)
    ctx->pc = 0x2b20e0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 85), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b20e4: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x2b20e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x2b20e8: 0xa1460056  sb          $a2, 0x56($t2)
    ctx->pc = 0x2b20e8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 86), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b20ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2b20ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2b20f0: 0xad450014  sw          $a1, 0x14($t2)
    ctx->pc = 0x2b20f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 5));
    // 0x2b20f4: 0xad440018  sw          $a0, 0x18($t2)
    ctx->pc = 0x2b20f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 4));
    // 0x2b20f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B20F8u;
    {
        const bool branch_taken_0x2b20f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20F8u;
        // 0x2b20fc: 0xad44001c  sw          $a0, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20f8) {
            ctx->pc = 0x2B2130u;
            goto label_2b2130;
        }
    }
    ctx->pc = 0x2B2100u;
label_2b2100:
    // 0x2b2100: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b2100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2104: 0xad440064  sw          $a0, 0x64($t2)
    ctx->pc = 0x2b2104u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 100), GPR_U32(ctx, 4));
    // 0x2b2108: 0x22a3c  dsll32      $a1, $v0, 8
    ctx->pc = 0x2b2108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 8));
    // 0x2b210c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2b210cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b2110: 0xa1400054  sb          $zero, 0x54($t2)
    ctx->pc = 0x2b2110u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2114: 0xa1440055  sb          $a0, 0x55($t2)
    ctx->pc = 0x2b2114u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 85), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2118: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x2b2118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x2b211c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2b211cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2b2120: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2b2120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b2124: 0xad440014  sw          $a0, 0x14($t2)
    ctx->pc = 0x2b2124u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 4));
    // 0x2b2128: 0xad440018  sw          $a0, 0x18($t2)
    ctx->pc = 0x2b2128u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 4));
    // 0x2b212c: 0x0  nop
    ctx->pc = 0x2b212cu;
    // NOP
label_2b2130:
    // 0x2b2130: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b2130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2134: 0xad440088  sw          $a0, 0x88($t2)
    ctx->pc = 0x2b2134u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 136), GPR_U32(ctx, 4));
    // 0x2b2138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b213c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2b213cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b2140: 0xa1400078  sb          $zero, 0x78($t2)
    ctx->pc = 0x2b2140u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2144: 0xa1440079  sb          $a0, 0x79($t2)
    ctx->pc = 0x2b2144u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 121), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2148: 0xa1430068  sb          $v1, 0x68($t2)
    ctx->pc = 0x2b2148u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b214c: 0xa1430069  sb          $v1, 0x69($t2)
    ctx->pc = 0x2b214cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2150: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2b2150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b2154: 0x0  nop
    ctx->pc = 0x2b2154u;
    // NOP
label_2b2158:
    // 0x2b2158: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x2b2158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2b215c: 0xa0a4008c  sb          $a0, 0x8C($a1)
    ctx->pc = 0x2b215cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2160: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x2b2160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x2b2164: 0xa0a4008d  sb          $a0, 0x8D($a1)
    ctx->pc = 0x2b2164u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 141), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2168: 0x2cc3000a  sltiu       $v1, $a2, 0xA
    ctx->pc = 0x2b2168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2b216c: 0xa0a4008e  sb          $a0, 0x8E($a1)
    ctx->pc = 0x2b216cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 142), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2170: 0xa0a4008f  sb          $a0, 0x8F($a1)
    ctx->pc = 0x2b2170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 143), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2174: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B2174u;
    {
        const bool branch_taken_0x2b2174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2174u;
        // 0x2b2178: 0xa0a40090  sb          $a0, 0x90($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 144), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2174) {
            ctx->pc = 0x2B2158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2158;
        }
    }
    ctx->pc = 0x2B217Cu;
    // 0x2b217c: 0x0  nop
    ctx->pc = 0x2b217cu;
    // NOP
label_2b2180:
    // 0x2b2180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2184: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2184u;
        // 0x2b2188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B218Cu;
}
