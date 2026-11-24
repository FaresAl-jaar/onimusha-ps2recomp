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

// Function: sub_002D3CC0
// Address: 0x2d3cc0 - 0x2d3fa8
void sub_002D3CC0_0x2d3cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3CC0_0x2d3cc0");
#endif

    switch (ctx->pc) {
        case 0x2d3cf0u: goto label_2d3cf0;
        case 0x2d3d00u: goto label_2d3d00;
        case 0x2d3d14u: goto label_2d3d14;
        case 0x2d3d28u: goto label_2d3d28;
        case 0x2d3d80u: goto label_2d3d80;
        case 0x2d3d90u: goto label_2d3d90;
        case 0x2d3f88u: goto label_2d3f88;
        default: break;
    }

    ctx->pc = 0x2d3cc0u;

    // 0x2d3cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d3cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d3cc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d3cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d3cc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d3cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d3ccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d3cd4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d3cd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d3cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d3cdc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3CDCu;
    {
        const bool branch_taken_0x2d3cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3CDCu;
        // 0x2d3ce0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3cdc) {
            ctx->pc = 0x2D3D08u;
            goto label_2d3d08;
        }
    }
    ctx->pc = 0x2D3CE4u;
    // 0x2d3ce4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2d3ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2d3ce8: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x2D3CE8u;
    SET_GPR_U32(ctx, 31, 0x2D3CF0u);
    ctx->pc = 0x2D3CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CE8u;
    // 0x2d3cec: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x2D3CE8u, 0x2D3CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CF0u;
label_2d3cf0:
    // 0x2d3cf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3CF0u;
    {
        const bool branch_taken_0x2d3cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3CF0u;
        // 0x2d3cf4: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3cf0) {
            ctx->pc = 0x2D3D08u;
            goto label_2d3d08;
        }
    }
    ctx->pc = 0x2D3CF8u;
    // 0x2d3cf8: 0xc095150  jal         func_254540
    ctx->pc = 0x2D3CF8u;
    SET_GPR_U32(ctx, 31, 0x2D3D00u);
    ctx->pc = 0x2D3CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CF8u;
    // 0x2d3cfc: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x2D3CF8u, 0x2D3D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D00u;
label_2d3d00:
    // 0x2d3d00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3D00u;
    {
        const bool branch_taken_0x2d3d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d00) {
            ctx->pc = 0x2D3D20u;
            goto label_2d3d20;
        }
    }
    ctx->pc = 0x2D3D08u;
label_2d3d08:
    // 0x2d3d08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d0c: 0xc0b4598  jal         func_2D1660
    ctx->pc = 0x2D3D0Cu;
    SET_GPR_U32(ctx, 31, 0x2D3D14u);
    ctx->pc = 0x2D3D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D0Cu;
    // 0x2d3d10: 0xae4001fc  sw          $zero, 0x1FC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 508), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1660u, 0x2D3D0Cu, 0x2D3D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D14u;
label_2d3d14:
    // 0x2d3d14: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2D3D14u;
    {
        const bool branch_taken_0x2d3d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d14) {
            ctx->pc = 0x2D3F90u;
            goto label_2d3f90;
        }
    }
    ctx->pc = 0x2D3D1Cu;
    // 0x2d3d1c: 0x0  nop
    ctx->pc = 0x2d3d1cu;
    // NOP
label_2d3d20:
    // 0x2d3d20: 0xc0ec6f0  jal         func_3B1BC0
    ctx->pc = 0x2D3D20u;
    SET_GPR_U32(ctx, 31, 0x2D3D28u);
    ctx->pc = 0x3B1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1BC0u, 0x2D3D20u, 0x2D3D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D28u;
label_2d3d28:
    // 0x2d3d28: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d3d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d3d2c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2d3d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d3d30: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2d3d30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2d3d34: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x2d3d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d3d38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d3d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d3d3c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2d3d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d3d40: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2d3d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2d3d44: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x2d3d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2d3d48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d3d4c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2d3d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d3d50: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2d3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d3d54: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2d3d54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d3d58: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2D3D58u;
    {
        const bool branch_taken_0x2d3d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D58u;
        // 0x2d3d5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d58) {
            ctx->pc = 0x2D3E60u;
            goto label_2d3e60;
        }
    }
    ctx->pc = 0x2D3D60u;
    // 0x2d3d60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3d64: 0x1625003e  bne         $s1, $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D3D64u;
    {
        const bool branch_taken_0x2d3d64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d3d64) {
            ctx->pc = 0x2D3E60u;
            goto label_2d3e60;
        }
    }
    ctx->pc = 0x2D3D6Cu;
    // 0x2d3d6c: 0x8e4301fc  lw          $v1, 0x1FC($s2)
    ctx->pc = 0x2d3d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x2d3d70: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3D70u;
    {
        const bool branch_taken_0x2d3d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d3d70) {
            ctx->pc = 0x2D3D98u;
            goto label_2d3d98;
        }
    }
    ctx->pc = 0x2D3D78u;
    // 0x2d3d78: 0xc0b4f08  jal         func_2D3C20
    ctx->pc = 0x2D3D78u;
    SET_GPR_U32(ctx, 31, 0x2D3D80u);
    ctx->pc = 0x2D3C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3C20u, 0x2D3D78u, 0x2D3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D80u;
label_2d3d80:
    // 0x2d3d80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3D80u;
    {
        const bool branch_taken_0x2d3d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D80u;
        // 0x2d3d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d80) {
            ctx->pc = 0x2D3D98u;
            goto label_2d3d98;
        }
    }
    ctx->pc = 0x2D3D88u;
    // 0x2d3d88: 0xc0b4f08  jal         func_2D3C20
    ctx->pc = 0x2D3D88u;
    SET_GPR_U32(ctx, 31, 0x2D3D90u);
    ctx->pc = 0x2D3C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3C20u, 0x2D3D88u, 0x2D3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D90u;
label_2d3d90:
    // 0x2d3d90: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D3D90u;
    {
        const bool branch_taken_0x2d3d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d90) {
            ctx->pc = 0x2D3E60u;
            goto label_2d3e60;
        }
    }
    ctx->pc = 0x2D3D98u;
label_2d3d98:
    // 0x2d3d98: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x2d3d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
    // 0x2d3d9c: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x2d3d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3da0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2d3da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2d3da4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2d3da4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d3da8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2d3da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2d3dac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d3dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3db0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d3db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3db8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d3db8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d3dbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d3dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d3dc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d3dc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3dc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3DC4u;
    {
        const bool branch_taken_0x2d3dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3dc4) {
            ctx->pc = 0x2D3DDCu;
            goto label_2d3ddc;
        }
    }
    ctx->pc = 0x2D3DCCu;
    // 0x2d3dcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3dccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3dd0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d3dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d3dd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3DD4u;
    {
        const bool branch_taken_0x2d3dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3DD4u;
        // 0x2d3dd8: 0x3c0441f0  lui         $a0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3dd4) {
            ctx->pc = 0x2D3DF8u;
            goto label_2d3df8;
        }
    }
    ctx->pc = 0x2D3DDCu;
label_2d3ddc:
    // 0x2d3ddc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3ddcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3de0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d3de4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3de4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3de8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d3de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d3dec: 0x0  nop
    ctx->pc = 0x2d3decu;
    // NOP
    // 0x2d3df0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2d3df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d3df4: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2d3df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_2d3df8:
    // 0x2d3df8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2d3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2d3dfc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d3dfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3e00: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2d3e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2d3e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3e08: 0x0  nop
    ctx->pc = 0x2d3e08u;
    // NOP
    // 0x2d3e0c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2d3e0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d3e10: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d3e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d3e14: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2d3e14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3e1c: 0x0  nop
    ctx->pc = 0x2d3e1cu;
    // NOP
    // 0x2d3e20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d3e20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3e24: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3E24u;
    {
        const bool branch_taken_0x2d3e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3e24) {
            ctx->pc = 0x2D3E3Cu;
            goto label_2d3e3c;
        }
    }
    ctx->pc = 0x2D3E2Cu;
    // 0x2d3e2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3e2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3e30: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d3e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3e34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3E34u;
    {
        const bool branch_taken_0x2d3e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E34u;
        // 0x2d3e38: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e34) {
            ctx->pc = 0x2D3E58u;
            goto label_2d3e58;
        }
    }
    ctx->pc = 0x2D3E3Cu;
label_2d3e3c:
    // 0x2d3e3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3e3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3e40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d3e44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3e48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d3e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3e4c: 0x0  nop
    ctx->pc = 0x2d3e4cu;
    // NOP
    // 0x2d3e50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d3e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d3e54: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2d3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d3e58:
    // 0x2d3e58: 0xae430200  sw          $v1, 0x200($s2)
    ctx->pc = 0x2d3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 3));
    // 0x2d3e5c: 0x0  nop
    ctx->pc = 0x2d3e5cu;
    // NOP
label_2d3e60:
    // 0x2d3e60: 0x8e450200  lw          $a1, 0x200($s2)
    ctx->pc = 0x2d3e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x2d3e64: 0x10a00046  beqz        $a1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2D3E64u;
    {
        const bool branch_taken_0x2d3e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E64u;
        // 0x2d3e68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e64) {
            ctx->pc = 0x2D3F80u;
            goto label_2d3f80;
        }
    }
    ctx->pc = 0x2D3E6Cu;
    // 0x2d3e6c: 0x1223001e  beq         $s1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D3E6Cu;
    {
        const bool branch_taken_0x2d3e6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3e6c) {
            ctx->pc = 0x2D3EE8u;
            goto label_2d3ee8;
        }
    }
    ctx->pc = 0x2D3E74u;
    // 0x2d3e74: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2d3e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3e78: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2d3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2d3e7c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2d3e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d3e80: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2d3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2d3e84: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2d3e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2d3e88: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d3e8c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d3e8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d3e90: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d3e90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3e94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3e98: 0x0  nop
    ctx->pc = 0x2d3e98u;
    // NOP
    // 0x2d3e9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d3e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d3ea0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d3ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3ea4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3EA4u;
    {
        const bool branch_taken_0x2d3ea4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3ea4) {
            ctx->pc = 0x2D3EBCu;
            goto label_2d3ebc;
        }
    }
    ctx->pc = 0x2D3EACu;
    // 0x2d3eac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3eb0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d3eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3eb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3EB4u;
    {
        const bool branch_taken_0x2d3eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3EB4u;
        // 0x2d3eb8: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3eb4) {
            ctx->pc = 0x2D3ED8u;
            goto label_2d3ed8;
        }
    }
    ctx->pc = 0x2D3EBCu;
label_2d3ebc:
    // 0x2d3ebc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3ebcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3ec0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d3ec4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3ec8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d3ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3ecc: 0x0  nop
    ctx->pc = 0x2d3eccu;
    // NOP
    // 0x2d3ed0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d3ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d3ed4: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x2d3ed4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2d3ed8:
    // 0x2d3ed8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3ED8u;
    {
        const bool branch_taken_0x2d3ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ed8) {
            ctx->pc = 0x2D3EE8u;
            goto label_2d3ee8;
        }
    }
    ctx->pc = 0x2D3EE0u;
    // 0x2d3ee0: 0xae440200  sw          $a0, 0x200($s2)
    ctx->pc = 0x2d3ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 4));
    // 0x2d3ee4: 0x0  nop
    ctx->pc = 0x2d3ee4u;
    // NOP
label_2d3ee8:
    // 0x2d3ee8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2d3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2d3eec: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2d3eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2d3ef0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x2d3ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d3ef4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d3ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3ef8: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x2d3ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
    // 0x2d3efc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2d3efcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d3f00: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d3f04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3f08: 0x34a30040  ori         $v1, $a1, 0x40
    ctx->pc = 0x2d3f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x2d3f0c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2d3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x2d3f10: 0x8e430200  lw          $v1, 0x200($s2)
    ctx->pc = 0x2d3f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x2d3f14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d3f18: 0xae430200  sw          $v1, 0x200($s2)
    ctx->pc = 0x2d3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 3));
    // 0x2d3f1c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2d3f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3f20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d3f20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d3f24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d3f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d3f28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d3f28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3f2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3F2Cu;
    {
        const bool branch_taken_0x2d3f2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F2Cu;
        // 0x2d3f30: 0x8e450204  lw          $a1, 0x204($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f2c) {
            ctx->pc = 0x2D3F44u;
            goto label_2d3f44;
        }
    }
    ctx->pc = 0x2D3F34u;
    // 0x2d3f34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3f38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d3f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3f3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3F3Cu;
    {
        const bool branch_taken_0x2d3f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F3Cu;
        // 0x2d3f40: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f3c) {
            ctx->pc = 0x2D3F60u;
            goto label_2d3f60;
        }
    }
    ctx->pc = 0x2D3F44u;
label_2d3f44:
    // 0x2d3f44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d3f44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d3f48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d3f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d3f4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3f50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d3f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d3f54: 0x0  nop
    ctx->pc = 0x2d3f54u;
    // NOP
    // 0x2d3f58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d3f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d3f5c: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x2d3f5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2d3f60:
    // 0x2d3f60: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3F60u;
    {
        const bool branch_taken_0x2d3f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f60) {
            ctx->pc = 0x2D3F78u;
            goto label_2d3f78;
        }
    }
    ctx->pc = 0x2D3F68u;
    // 0x2d3f68: 0x8e430204  lw          $v1, 0x204($s2)
    ctx->pc = 0x2d3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
    // 0x2d3f6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3f70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3F70u;
    {
        const bool branch_taken_0x2d3f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F70u;
        // 0x2d3f74: 0xae430204  sw          $v1, 0x204($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f70) {
            ctx->pc = 0x2D3F88u;
            goto label_2d3f88;
        }
    }
    ctx->pc = 0x2D3F78u;
label_2d3f78:
    // 0x2d3f78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3F78u;
    {
        const bool branch_taken_0x2d3f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F78u;
        // 0x2d3f7c: 0xae400204  sw          $zero, 0x204($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f78) {
            ctx->pc = 0x2D3F88u;
            goto label_2d3f88;
        }
    }
    ctx->pc = 0x2D3F80u;
label_2d3f80:
    // 0x2d3f80: 0xc0b4598  jal         func_2D1660
    ctx->pc = 0x2D3F80u;
    SET_GPR_U32(ctx, 31, 0x2D3F88u);
    ctx->pc = 0x2D3F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F80u;
    // 0x2d3f84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1660u, 0x2D3F80u, 0x2D3F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F88u;
label_2d3f88:
    // 0x2d3f88: 0xae5101fc  sw          $s1, 0x1FC($s2)
    ctx->pc = 0x2d3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 508), GPR_U32(ctx, 17));
    // 0x2d3f8c: 0x0  nop
    ctx->pc = 0x2d3f8cu;
    // NOP
label_2d3f90:
    // 0x2d3f90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d3f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d3f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FA0u;
        // 0x2d3fa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3FA8u;
}
