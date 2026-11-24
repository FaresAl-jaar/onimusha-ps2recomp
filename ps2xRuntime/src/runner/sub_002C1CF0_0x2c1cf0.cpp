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

// Function: sub_002C1CF0
// Address: 0x2c1cf0 - 0x2c1eb4
void sub_002C1CF0_0x2c1cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1CF0_0x2c1cf0");
#endif

    switch (ctx->pc) {
        case 0x2c1d80u: goto label_2c1d80;
        case 0x2c1d98u: goto label_2c1d98;
        case 0x2c1e04u: goto label_2c1e04;
        case 0x2c1e6cu: goto label_2c1e6c;
        default: break;
    }

    ctx->pc = 0x2c1cf0u;

    // 0x2c1cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c1cf4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1cf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c1cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c1cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c1d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c1d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c1d04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c1d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c1d0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c1d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c1d14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c1d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1d18: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2c1d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c1d1c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C1D1Cu;
    {
        const bool branch_taken_0x2c1d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D1Cu;
        // 0x2c1d20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d1c) {
            ctx->pc = 0x2C1DA8u;
            goto label_2c1da8;
        }
    }
    ctx->pc = 0x2C1D24u;
    // 0x2c1d24: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2c1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c1d28: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C1D28u;
    {
        const bool branch_taken_0x2c1d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D28u;
        // 0x2c1d2c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d28) {
            ctx->pc = 0x2C1D90u;
            goto label_2c1d90;
        }
    }
    ctx->pc = 0x2C1D30u;
    // 0x2c1d30: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C1D30u;
    {
        const bool branch_taken_0x2c1d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c1d30) {
            ctx->pc = 0x2C1D78u;
            goto label_2c1d78;
        }
    }
    ctx->pc = 0x2C1D38u;
    // 0x2c1d38: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1d3c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1D3Cu;
    {
        const bool branch_taken_0x2c1d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c1d3c) {
            ctx->pc = 0x2C1D50u;
            goto label_2c1d50;
        }
    }
    ctx->pc = 0x2C1D44u;
    // 0x2c1d44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C1D44u;
    {
        const bool branch_taken_0x2c1d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d44) {
            ctx->pc = 0x2C1DB0u;
            goto label_2c1db0;
        }
    }
    ctx->pc = 0x2C1D4Cu;
    // 0x2c1d4c: 0x0  nop
    ctx->pc = 0x2c1d4cu;
    // NOP
label_2c1d50:
    // 0x2c1d50: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c1d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c1d54: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c1d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c1d58: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c1d5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c1d60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1d68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C1D68u;
    {
        const bool branch_taken_0x2c1d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d68) {
            ctx->pc = 0x2C1DB0u;
            goto label_2c1db0;
        }
    }
    ctx->pc = 0x2C1D70u;
    // 0x2c1d70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C1D70u;
    {
        const bool branch_taken_0x2c1d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D70u;
        // 0x2c1d74: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d70) {
            ctx->pc = 0x2C1DB0u;
            goto label_2c1db0;
        }
    }
    ctx->pc = 0x2C1D78u;
label_2c1d78:
    // 0x2c1d78: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C1D78u;
    SET_GPR_U32(ctx, 31, 0x2C1D80u);
    ctx->pc = 0x2C1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D78u;
    // 0x2c1d7c: 0x8e650088  lw          $a1, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C1D78u, 0x2C1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D80u;
label_2c1d80:
    // 0x2c1d80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C1D80u;
    {
        const bool branch_taken_0x2c1d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d80) {
            ctx->pc = 0x2C1DB0u;
            goto label_2c1db0;
        }
    }
    ctx->pc = 0x2C1D88u;
    // 0x2c1d88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1D88u;
    {
        const bool branch_taken_0x2c1d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1D88u;
        // 0x2c1d8c: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d88) {
            ctx->pc = 0x2C1DB0u;
            goto label_2c1db0;
        }
    }
    ctx->pc = 0x2C1D90u;
label_2c1d90:
    // 0x2c1d90: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C1D90u;
    SET_GPR_U32(ctx, 31, 0x2C1D98u);
    ctx->pc = 0x2C1D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1D90u;
    // 0x2c1d94: 0x8e650090  lw          $a1, 0x90($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C1D90u, 0x2C1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1D98u;
label_2c1d98:
    // 0x2c1d98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1D98u;
    {
        const bool branch_taken_0x2c1d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d98) {
            ctx->pc = 0x2C1DB0u;
            goto label_2c1db0;
        }
    }
    ctx->pc = 0x2C1DA0u;
    // 0x2c1da0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1DA0u;
    {
        const bool branch_taken_0x2c1da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DA0u;
        // 0x2c1da4: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1da0) {
            ctx->pc = 0x2C1DB0u;
            goto label_2c1db0;
        }
    }
    ctx->pc = 0x2C1DA8u;
label_2c1da8:
    // 0x2c1da8: 0x267000c0  addiu       $s0, $s3, 0xC0
    ctx->pc = 0x2c1da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x2c1dac: 0x0  nop
    ctx->pc = 0x2c1dacu;
    // NOP
label_2c1db0:
    // 0x2c1db0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2c1db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2c1db4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2c1db4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2c1db8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C1DB8u;
    {
        const bool branch_taken_0x2c1db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DB8u;
        // 0x2c1dbc: 0x30440001  andi        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1db8) {
            ctx->pc = 0x2C1DF8u;
            goto label_2c1df8;
        }
    }
    ctx->pc = 0x2C1DC0u;
    // 0x2c1dc0: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x2c1dc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c1dc4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2c1dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c1dc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c1dcc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2c1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2c1dd0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2c1dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1dd8: 0x0  nop
    ctx->pc = 0x2c1dd8u;
    // NOP
    // 0x2c1ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1de0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c1de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1de4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2C1DE4u;
    {
        const bool branch_taken_0x2c1de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1de4) {
            ctx->pc = 0x2C1E10u;
            goto label_2c1e10;
        }
    }
    ctx->pc = 0x2C1DECu;
    // 0x2c1dec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1DECu;
    {
        const bool branch_taken_0x2c1dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1DECu;
        // 0x2c1df0: 0x38840001  xori        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1dec) {
            ctx->pc = 0x2C1E10u;
            goto label_2c1e10;
        }
    }
    ctx->pc = 0x2C1DF4u;
    // 0x2c1df4: 0x0  nop
    ctx->pc = 0x2c1df4u;
    // NOP
label_2c1df8:
    // 0x2c1df8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1dfc: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1DFCu;
    SET_GPR_U32(ctx, 31, 0x2C1E04u);
    ctx->pc = 0x2C1E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1DFCu;
    // 0x2c1e00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1DFCu, 0x2C1E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E04u;
label_2c1e04:
    // 0x2c1e04: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C1E04u;
    {
        const bool branch_taken_0x2c1e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E04u;
        // 0x2c1e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e04) {
            ctx->pc = 0x2C1E98u;
            goto label_2c1e98;
        }
    }
    ctx->pc = 0x2C1E0Cu;
    // 0x2c1e0c: 0x0  nop
    ctx->pc = 0x2c1e0cu;
    // NOP
label_2c1e10:
    // 0x2c1e10: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C1E10u;
    {
        const bool branch_taken_0x2c1e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e10) {
            ctx->pc = 0x2C1E90u;
            goto label_2c1e90;
        }
    }
    ctx->pc = 0x2C1E18u;
    // 0x2c1e18: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c1e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c1e1c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C1E1Cu;
    {
        const bool branch_taken_0x2c1e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E1Cu;
        // 0x2c1e20: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e1c) {
            ctx->pc = 0x2C1E78u;
            goto label_2c1e78;
        }
    }
    ctx->pc = 0x2C1E24u;
    // 0x2c1e24: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C1E24u;
    {
        const bool branch_taken_0x2c1e24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E24u;
        // 0x2c1e28: 0xa260004f  sb          $zero, 0x4F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e24) {
            ctx->pc = 0x2C1E60u;
            goto label_2c1e60;
        }
    }
    ctx->pc = 0x2C1E2Cu;
    // 0x2c1e2c: 0x92640037  lbu         $a0, 0x37($s3)
    ctx->pc = 0x2c1e2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2c1e30: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c1e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c1e34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1e38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c1e3c: 0xa264004e  sb          $a0, 0x4E($s3)
    ctx->pc = 0x2c1e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1e40: 0xa2650037  sb          $a1, 0x37($s3)
    ctx->pc = 0x2c1e40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1e44: 0xa2600032  sb          $zero, 0x32($s3)
    ctx->pc = 0x2c1e44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1e48: 0xa263005f  sb          $v1, 0x5F($s3)
    ctx->pc = 0x2c1e48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1e4c: 0xa6600080  sh          $zero, 0x80($s3)
    ctx->pc = 0x2c1e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1e50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c1e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1e58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C1E58u;
    {
        const bool branch_taken_0x2c1e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1E58u;
        // 0x2c1e5c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e58) {
            ctx->pc = 0x2C1E88u;
            goto label_2c1e88;
        }
    }
    ctx->pc = 0x2C1E60u;
label_2c1e60:
    // 0x2c1e60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c1e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e64: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1E64u;
    SET_GPR_U32(ctx, 31, 0x2C1E6Cu);
    ctx->pc = 0x2C1E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1E64u;
    // 0x2c1e68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1E64u, 0x2C1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1E6Cu;
label_2c1e6c:
    // 0x2c1e6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1E6Cu;
    {
        const bool branch_taken_0x2c1e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e6c) {
            ctx->pc = 0x2C1E80u;
            goto label_2c1e80;
        }
    }
    ctx->pc = 0x2C1E74u;
    // 0x2c1e74: 0x0  nop
    ctx->pc = 0x2c1e74u;
    // NOP
label_2c1e78:
    // 0x2c1e78: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c1e78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1e7c: 0x0  nop
    ctx->pc = 0x2c1e7cu;
    // NOP
label_2c1e80:
    // 0x2c1e80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e84: 0x0  nop
    ctx->pc = 0x2c1e84u;
    // NOP
label_2c1e88:
    // 0x2c1e88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1E88u;
    {
        const bool branch_taken_0x2c1e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e88) {
            ctx->pc = 0x2C1E98u;
            goto label_2c1e98;
        }
    }
    ctx->pc = 0x2C1E90u;
label_2c1e90:
    // 0x2c1e90: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x2c1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x2c1e94: 0x0  nop
    ctx->pc = 0x2c1e94u;
    // NOP
label_2c1e98:
    // 0x2c1e98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1e9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c1e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1eac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1EACu;
        // 0x2c1eb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1EB4u;
}
