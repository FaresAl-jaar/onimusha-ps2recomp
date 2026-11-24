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

// Function: sub_00303C70
// Address: 0x303c70 - 0x303e24
void sub_00303C70_0x303c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303C70_0x303c70");
#endif

    switch (ctx->pc) {
        case 0x303c9cu: goto label_303c9c;
        case 0x303ce8u: goto label_303ce8;
        case 0x303d04u: goto label_303d04;
        case 0x303d18u: goto label_303d18;
        case 0x303df4u: goto label_303df4;
        case 0x303e00u: goto label_303e00;
        case 0x303e0cu: goto label_303e0c;
        default: break;
    }

    ctx->pc = 0x303c70u;

    // 0x303c70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x303c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x303c74: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x303c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x303c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x303c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303c84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x303c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303c88: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x303c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x303c8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x303C8Cu;
    {
        const bool branch_taken_0x303c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C8Cu;
        // 0x303c90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c8c) {
            ctx->pc = 0x303CA8u;
            goto label_303ca8;
        }
    }
    ctx->pc = 0x303C94u;
    // 0x303c94: 0xc0a83f8  jal         func_2A0FE0
    ctx->pc = 0x303C94u;
    SET_GPR_U32(ctx, 31, 0x303C9Cu);
    ctx->pc = 0x303C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303C94u;
    // 0x303c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0FE0u, 0x303C94u, 0x303C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303C9Cu;
label_303c9c:
    // 0x303c9c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x303C9Cu;
    {
        const bool branch_taken_0x303c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C9Cu;
        // 0x303ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c9c) {
            ctx->pc = 0x303E10u;
            goto label_303e10;
        }
    }
    ctx->pc = 0x303CA4u;
    // 0x303ca4: 0x0  nop
    ctx->pc = 0x303ca4u;
    // NOP
label_303ca8:
    // 0x303ca8: 0x8c821d04  lw          $v0, 0x1D04($a0)
    ctx->pc = 0x303ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303cac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x303CACu;
    {
        const bool branch_taken_0x303cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303cac) {
            ctx->pc = 0x303CC8u;
            goto label_303cc8;
        }
    }
    ctx->pc = 0x303CB4u;
    // 0x303cb4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x303cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x303cb8: 0x8c821c00  lw          $v0, 0x1C00($a0)
    ctx->pc = 0x303cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7168)));
    // 0x303cbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x303CBCu;
    {
        const bool branch_taken_0x303cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CBCu;
        // 0x303cc0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cbc) {
            ctx->pc = 0x303CD0u;
            goto label_303cd0;
        }
    }
    ctx->pc = 0x303CC4u;
    // 0x303cc4: 0x0  nop
    ctx->pc = 0x303cc4u;
    // NOP
label_303cc8:
    // 0x303cc8: 0x8c821c00  lw          $v0, 0x1C00($a0)
    ctx->pc = 0x303cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7168)));
    // 0x303ccc: 0x0  nop
    ctx->pc = 0x303cccu;
    // NOP
label_303cd0:
    // 0x303cd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x303CD0u;
    {
        const bool branch_taken_0x303cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303cd0) {
            ctx->pc = 0x303CF0u;
            goto label_303cf0;
        }
    }
    ctx->pc = 0x303CD8u;
    // 0x303cd8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x303cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x303cdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ce0: 0xc051634  jal         func_1458D0
    ctx->pc = 0x303CE0u;
    SET_GPR_U32(ctx, 31, 0x303CE8u);
    ctx->pc = 0x303CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303CE0u;
    // 0x303ce4: 0x248487d0  addiu       $a0, $a0, -0x7830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458D0u, 0x303CE0u, 0x303CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303CE8u;
label_303ce8:
    // 0x303ce8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x303CE8u;
    {
        const bool branch_taken_0x303ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303CE8u;
        // 0x303cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ce8) {
            ctx->pc = 0x303E10u;
            goto label_303e10;
        }
    }
    ctx->pc = 0x303CF0u;
label_303cf0:
    // 0x303cf0: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x303cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x303cf4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x303cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x303cf8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x303cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x303cfc: 0xc0c10a8  jal         func_3042A0
    ctx->pc = 0x303CFCu;
    SET_GPR_U32(ctx, 31, 0x303D04u);
    ctx->pc = 0x303D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303CFCu;
    // 0x303d00: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3042A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3042A0u, 0x303CFCu, 0x303D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303D04u;
label_303d04:
    // 0x303d04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x303d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x303d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x303d0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x303D10u;
    {
        const bool branch_taken_0x303d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D10u;
        // 0x303d14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d10) {
            ctx->pc = 0x303D40u;
            goto label_303d40;
        }
    }
    ctx->pc = 0x303D18u;
label_303d18:
    // 0x303d18: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x303d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x303d1c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x303d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x303d20: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x303d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303d28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x303D28u;
    {
        const bool branch_taken_0x303d28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303d28) {
            ctx->pc = 0x303D38u;
            goto label_303d38;
        }
    }
    ctx->pc = 0x303D30u;
    // 0x303d30: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x303d30u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x303d34: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x303d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_303d38:
    // 0x303d38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x303d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x303d3c: 0x0  nop
    ctx->pc = 0x303d3cu;
    // NOP
label_303d40:
    // 0x303d40: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x303d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x303d44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x303D44u;
    {
        const bool branch_taken_0x303d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303d44) {
            ctx->pc = 0x303D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303d18;
        }
    }
    ctx->pc = 0x303D4Cu;
    // 0x303d4c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x303D4Cu;
    {
        const bool branch_taken_0x303d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D4Cu;
        // 0x303d50: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d4c) {
            ctx->pc = 0x303DE8u;
            goto label_303de8;
        }
    }
    ctx->pc = 0x303D54u;
    // 0x303d54: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x303d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x303d58: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x303d58u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303d5c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x303d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303d60: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x303d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x303d64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x303d64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d68: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x303d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x303d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x303d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x303d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303d74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x303d74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d78: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x303d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x303d7c: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x303d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303d80: 0x248a0040  addiu       $t2, $a0, 0x40
    ctx->pc = 0x303d80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x303d84: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x303d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x303d88: 0x7cc80000  sq          $t0, 0x0($a2)
    ctx->pc = 0x303d88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 8));
    // 0x303d8c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x303d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303d90: 0x78ab0000  lq          $t3, 0x0($a1)
    ctx->pc = 0x303d90u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303d94: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x303d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x303d98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x303d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303d9c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x303d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303da0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x303da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x303da4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x303da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x303da8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x303da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x303dac: 0x7c4b0000  sq          $t3, 0x0($v0)
    ctx->pc = 0x303dacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 11));
    // 0x303db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303db4: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x303db4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x303db8: 0x24850080  addiu       $a1, $a0, 0x80
    ctx->pc = 0x303db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x303dbc: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x303dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x303dc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x303dc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303dc4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x303dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303dc8: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x303dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x303dcc: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x303dccu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x303dd0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x303dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x303dd4: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x303dd4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x303dd8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x303dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x303ddc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x303ddcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303de0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x303de0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x303de4: 0x0  nop
    ctx->pc = 0x303de4u;
    // NOP
label_303de8:
    // 0x303de8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x303de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x303dec: 0xc041482  jal         func_105208
    ctx->pc = 0x303DECu;
    SET_GPR_U32(ctx, 31, 0x303DF4u);
    ctx->pc = 0x303DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303DECu;
    // 0x303df0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105208u, 0x303DECu, 0x303DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303DF4u;
label_303df4:
    // 0x303df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303df8: 0xc0a8ebc  jal         func_2A3AF0
    ctx->pc = 0x303DF8u;
    SET_GPR_U32(ctx, 31, 0x303E00u);
    ctx->pc = 0x303DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303DF8u;
    // 0x303dfc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3AF0u, 0x303DF8u, 0x303E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E00u;
label_303e00:
    // 0x303e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303e04: 0xc0a8ecc  jal         func_2A3B30
    ctx->pc = 0x303E04u;
    SET_GPR_U32(ctx, 31, 0x303E0Cu);
    ctx->pc = 0x303E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E04u;
    // 0x303e08: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B30u, 0x303E04u, 0x303E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E0Cu;
label_303e0c:
    // 0x303e0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x303e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303e10:
    // 0x303e10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x303E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E1Cu;
        // 0x303e20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303E24u;
}
