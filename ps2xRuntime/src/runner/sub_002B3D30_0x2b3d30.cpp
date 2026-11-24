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

// Function: sub_002B3D30
// Address: 0x2b3d30 - 0x2b3f90
void sub_002B3D30_0x2b3d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3D30_0x2b3d30");
#endif

    switch (ctx->pc) {
        case 0x2b3d54u: goto label_2b3d54;
        case 0x2b3d78u: goto label_2b3d78;
        default: break;
    }

    ctx->pc = 0x2b3d30u;

    // 0x2b3d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3d34: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2b3d34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3d3c: 0x2566000c  addiu       $a2, $t3, 0xC
    ctx->pc = 0x2b3d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x2b3d40: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x2b3d40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b3d44: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b3d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b3d48: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b3d4c: 0xc0ac220  jal         func_2B0880
    ctx->pc = 0x2B3D4Cu;
    SET_GPR_U32(ctx, 31, 0x2B3D54u);
    ctx->pc = 0x2B3D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D4Cu;
    // 0x2b3d50: 0x2565001c  addiu       $a1, $t3, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0880u, 0x2B3D4Cu, 0x2B3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D54u;
label_2b3d54:
    // 0x2b3d54: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x2b3d54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2b3d58: 0x8d63000c  lw          $v1, 0xC($t3)
    ctx->pc = 0x2b3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2b3d5c: 0x68082b  sltu        $at, $v1, $t0
    ctx->pc = 0x2b3d5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2b3d60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3D60u;
    {
        const bool branch_taken_0x2b3d60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3d60) {
            ctx->pc = 0x2B3D70u;
            goto label_2b3d70;
        }
    }
    ctx->pc = 0x2B3D68u;
    // 0x2b3d68: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2B3D68u;
    {
        const bool branch_taken_0x2b3d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D68u;
        // 0x2b3d6c: 0x9163002c  lbu         $v1, 0x2C($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d68) {
            ctx->pc = 0x2B3F08u;
            goto label_2b3f08;
        }
    }
    ctx->pc = 0x2B3D70u;
label_2b3d70:
    // 0x2b3d70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d74: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2b3d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2b3d78:
    // 0x2b3d78: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b3d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b3d7c: 0x103082b  sltu        $at, $t0, $v1
    ctx->pc = 0x2b3d7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b3d80: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x2B3D80u;
    {
        const bool branch_taken_0x2b3d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D80u;
        // 0x2b3d84: 0xeb1821  addu        $v1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d80) {
            ctx->pc = 0x2B3EF0u;
            goto label_2b3ef0;
        }
    }
    ctx->pc = 0x2B3D88u;
    // 0x2b3d88: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2b3d88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b3d8c: 0x9066002c  lbu         $a2, 0x2C($v1)
    ctx->pc = 0x2b3d8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2b3d90: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2b3d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2b3d94: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2b3d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b3d98: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b3d9c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2b3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b3da0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3DA0u;
    {
        const bool branch_taken_0x2b3da0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DA0u;
        // 0x2b3da4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3da0) {
            ctx->pc = 0x2B3DB4u;
            goto label_2b3db4;
        }
    }
    ctx->pc = 0x2B3DA8u;
    // 0x2b3da8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3dac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3DACu;
    {
        const bool branch_taken_0x2b3dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DACu;
        // 0x2b3db0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dac) {
            ctx->pc = 0x2B3DCCu;
            goto label_2b3dcc;
        }
    }
    ctx->pc = 0x2B3DB4u;
label_2b3db4:
    // 0x2b3db4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b3db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b3db8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b3db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b3dbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b3dbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3dc0: 0x0  nop
    ctx->pc = 0x2b3dc0u;
    // NOP
    // 0x2b3dc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b3dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b3dc8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b3dc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b3dcc:
    // 0x2b3dcc: 0x1051823  subu        $v1, $t0, $a1
    ctx->pc = 0x2b3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2b3dd0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3DD0u;
    {
        const bool branch_taken_0x2b3dd0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DD0u;
        // 0x2b3dd4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dd0) {
            ctx->pc = 0x2B3DE4u;
            goto label_2b3de4;
        }
    }
    ctx->pc = 0x2B3DD8u;
    // 0x2b3dd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3ddc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3DDCu;
    {
        const bool branch_taken_0x2b3ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DDCu;
        // 0x2b3de0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ddc) {
            ctx->pc = 0x2B3DFCu;
            goto label_2b3dfc;
        }
    }
    ctx->pc = 0x2B3DE4u;
label_2b3de4:
    // 0x2b3de4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b3de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b3de8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b3de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b3dec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b3decu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3df0: 0x0  nop
    ctx->pc = 0x2b3df0u;
    // NOP
    // 0x2b3df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3df8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b3df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b3dfc:
    // 0x2b3dfc: 0x0  nop
    ctx->pc = 0x2b3dfcu;
    // NOP
    // 0x2b3e00: 0x0  nop
    ctx->pc = 0x2b3e00u;
    // NOP
    // 0x2b3e04: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2b3e04u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b3e08: 0x0  nop
    ctx->pc = 0x2b3e08u;
    // NOP
    // 0x2b3e0c: 0xeb1821  addu        $v1, $a3, $t3
    ctx->pc = 0x2b3e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x2b3e10: 0x9063002d  lbu         $v1, 0x2D($v1)
    ctx->pc = 0x2b3e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 45)));
    // 0x2b3e14: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3E14u;
    {
        const bool branch_taken_0x2b3e14 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E14u;
        // 0x2b3e18: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e14) {
            ctx->pc = 0x2B3E28u;
            goto label_2b3e28;
        }
    }
    ctx->pc = 0x2B3E1Cu;
    // 0x2b3e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3E20u;
    {
        const bool branch_taken_0x2b3e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E20u;
        // 0x2b3e24: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e20) {
            ctx->pc = 0x2B3E40u;
            goto label_2b3e40;
        }
    }
    ctx->pc = 0x2B3E28u;
label_2b3e28:
    // 0x2b3e28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b3e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b3e2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b3e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b3e30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b3e30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e34: 0x0  nop
    ctx->pc = 0x2b3e34u;
    // NOP
    // 0x2b3e38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b3e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b3e3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b3e3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b3e40:
    // 0x2b3e40: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3E40u;
    {
        const bool branch_taken_0x2b3e40 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E40u;
        // 0x2b3e44: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e40) {
            ctx->pc = 0x2B3E54u;
            goto label_2b3e54;
        }
    }
    ctx->pc = 0x2B3E48u;
    // 0x2b3e48: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2b3e48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3E4Cu;
    {
        const bool branch_taken_0x2b3e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E4Cu;
        // 0x2b3e50: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e4c) {
            ctx->pc = 0x2B3E6Cu;
            goto label_2b3e6c;
        }
    }
    ctx->pc = 0x2B3E54u;
label_2b3e54:
    // 0x2b3e54: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2b3e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b3e58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b3e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b3e5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b3e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e60: 0x0  nop
    ctx->pc = 0x2b3e60u;
    // NOP
    // 0x2b3e64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3e68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b3e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b3e6c:
    // 0x2b3e6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b3e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b3e70: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3E70u;
    {
        const bool branch_taken_0x2b3e70 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E70u;
        // 0x2b3e74: 0x46001042  mul.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e70) {
            ctx->pc = 0x2B3E84u;
            goto label_2b3e84;
        }
    }
    ctx->pc = 0x2B3E78u;
    // 0x2b3e78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2b3e78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3E7Cu;
    {
        const bool branch_taken_0x2b3e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E7Cu;
        // 0x2b3e80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e7c) {
            ctx->pc = 0x2B3EA0u;
            goto label_2b3ea0;
        }
    }
    ctx->pc = 0x2B3E84u;
label_2b3e84:
    // 0x2b3e84: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x2b3e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2b3e88: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2b3e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b3e8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b3e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b3e90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b3e90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3e94: 0x0  nop
    ctx->pc = 0x2b3e94u;
    // NOP
    // 0x2b3e98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3e9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b3e9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b3ea0:
    // 0x2b3ea0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2b3ea0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b3ea4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2b3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2b3ea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3eac: 0x0  nop
    ctx->pc = 0x2b3eacu;
    // NOP
    // 0x2b3eb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b3eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3eb4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3EB4u;
    {
        const bool branch_taken_0x2b3eb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3eb4) {
            ctx->pc = 0x2B3ECCu;
            goto label_2b3ecc;
        }
    }
    ctx->pc = 0x2B3EBCu;
    // 0x2b3ebc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b3ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b3ec0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b3ec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b3ec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3EC4u;
    {
        const bool branch_taken_0x2b3ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EC4u;
        // 0x2b3ec8: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ec4) {
            ctx->pc = 0x2B3EE8u;
            goto label_2b3ee8;
        }
    }
    ctx->pc = 0x2B3ECCu;
label_2b3ecc:
    // 0x2b3ecc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b3eccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b3ed0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b3ed4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b3ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b3ed8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b3ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b3edc: 0x0  nop
    ctx->pc = 0x2b3edcu;
    // NOP
    // 0x2b3ee0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b3ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b3ee4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2b3ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b3ee8:
    // 0x2b3ee8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3EE8u;
    {
        const bool branch_taken_0x2b3ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ee8) {
            ctx->pc = 0x2B3F08u;
            goto label_2b3f08;
        }
    }
    ctx->pc = 0x2B3EF0u;
label_2b3ef0:
    // 0x2b3ef0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b3ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b3ef4: 0x2ce30003  sltiu       $v1, $a3, 0x3
    ctx->pc = 0x2b3ef4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b3ef8: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2B3EF8u;
    {
        const bool branch_taken_0x2b3ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EF8u;
        // 0x2b3efc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ef8) {
            ctx->pc = 0x2B3D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3d78;
        }
    }
    ctx->pc = 0x2B3F00u;
    // 0x2b3f00: 0x9163002f  lbu         $v1, 0x2F($t3)
    ctx->pc = 0x2b3f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 47)));
    // 0x2b3f04: 0x0  nop
    ctx->pc = 0x2b3f04u;
    // NOP
label_2b3f08:
    // 0x2b3f08: 0x91640030  lbu         $a0, 0x30($t3)
    ctx->pc = 0x2b3f08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x2b3f0c: 0x306e00ff  andi        $t6, $v1, 0xFF
    ctx->pc = 0x2b3f0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3f10: 0x240c003c  addiu       $t4, $zero, 0x3C
    ctx->pc = 0x2b3f10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b3f14: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x2b3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x2b3f18: 0x3c094180  lui         $t1, 0x4180
    ctx->pc = 0x2b3f18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16768 << 16));
    // 0x2b3f1c: 0x3468ff00  ori         $t0, $v1, 0xFF00
    ctx->pc = 0x2b3f1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x2b3f20: 0xe6843  sra         $t5, $t6, 1
    ctx->pc = 0x2b3f20u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 14), 1));
    // 0x2b3f24: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2b3f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3f28: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2b3f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b3f2c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2b3f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b3f30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b3f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3f34: 0xa1440001  sb          $a0, 0x1($t2)
    ctx->pc = 0x2b3f34u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3f38: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x2b3f38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b3f3c: 0xa14c0002  sb          $t4, 0x2($t2)
    ctx->pc = 0x2b3f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 12));
    // 0x2b3f40: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b3f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b3f44: 0xa54b0004  sh          $t3, 0x4($t2)
    ctx->pc = 0x2b3f44u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 11));
    // 0x2b3f48: 0xad490024  sw          $t1, 0x24($t2)
    ctx->pc = 0x2b3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 9));
    // 0x2b3f4c: 0xad480028  sw          $t0, 0x28($t2)
    ctx->pc = 0x2b3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 8));
    // 0x2b3f50: 0xad420020  sw          $v0, 0x20($t2)
    ctx->pc = 0x2b3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 2));
    // 0x2b3f54: 0xad4e0010  sw          $t6, 0x10($t2)
    ctx->pc = 0x2b3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 14));
    // 0x2b3f58: 0xad4e0014  sw          $t6, 0x14($t2)
    ctx->pc = 0x2b3f58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 14));
    // 0x2b3f5c: 0xad4d0018  sw          $t5, 0x18($t2)
    ctx->pc = 0x2b3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 13));
    // 0x2b3f60: 0xad4d001c  sw          $t5, 0x1C($t2)
    ctx->pc = 0x2b3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 13));
    // 0x2b3f64: 0xad47004c  sw          $a3, 0x4C($t2)
    ctx->pc = 0x2b3f64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 76), GPR_U32(ctx, 7));
    // 0x2b3f68: 0xa146002c  sb          $a2, 0x2C($t2)
    ctx->pc = 0x2b3f68u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 44), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b3f6c: 0xa146002d  sb          $a2, 0x2D($t2)
    ctx->pc = 0x2b3f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 45), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b3f70: 0xa140003c  sb          $zero, 0x3C($t2)
    ctx->pc = 0x2b3f70u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3f74: 0xa145003d  sb          $a1, 0x3D($t2)
    ctx->pc = 0x2b3f74u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 61), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b3f78: 0xad440050  sw          $a0, 0x50($t2)
    ctx->pc = 0x2b3f78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 80), GPR_U32(ctx, 4));
    // 0x2b3f7c: 0xad430054  sw          $v1, 0x54($t2)
    ctx->pc = 0x2b3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 3));
    // 0x2b3f80: 0xad400058  sw          $zero, 0x58($t2)
    ctx->pc = 0x2b3f80u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 88), GPR_U32(ctx, 0));
    // 0x2b3f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3f88: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F88u;
        // 0x2b3f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3F90u;
}
