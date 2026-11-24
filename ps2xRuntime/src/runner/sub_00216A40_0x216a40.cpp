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

// Function: sub_00216A40
// Address: 0x216a40 - 0x216bbc
void sub_00216A40_0x216a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216A40_0x216a40");
#endif

    switch (ctx->pc) {
        case 0x216ab0u: goto label_216ab0;
        case 0x216ae8u: goto label_216ae8;
        case 0x216b7cu: goto label_216b7c;
        default: break;
    }

    ctx->pc = 0x216a40u;

    // 0x216a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x216a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x216a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216a48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216a50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216a58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x216a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x216a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216a60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x216a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a64: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x216a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x216a68: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x216a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x216a6c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x216a6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a70: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x216a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x216a74: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x216a74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x216a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216a7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x216a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x216a80: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x216a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x216a84: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x216a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x216a88: 0xde230150  ld          $v1, 0x150($s1)
    ctx->pc = 0x216a88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x216a8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216a90: 0x3c160067  lui         $s6, 0x67
    ctx->pc = 0x216a90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)103 << 16));
    // 0x216a94: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x216a94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x216a98: 0x8ed68c70  lw          $s6, -0x7390($s6)
    ctx->pc = 0x216a98u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937712)));
    // 0x216a9c: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x216A9Cu;
    {
        const bool branch_taken_0x216a9c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x216AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A9Cu;
        // 0x216aa0: 0x8e750014  lw          $s5, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a9c) {
            ctx->pc = 0x216AC4u;
            goto label_216ac4;
        }
    }
    ctx->pc = 0x216AA4u;
    // 0x216aa4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x216aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216aa8: 0xc085af0  jal         func_216BC0
    ctx->pc = 0x216AA8u;
    SET_GPR_U32(ctx, 31, 0x216AB0u);
    ctx->pc = 0x216AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AA8u;
    // 0x216aac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216BC0u, 0x216AA8u, 0x216AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AB0u;
label_216ab0:
    // 0x216ab0: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x216ab0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x216ab4: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x216ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x216ab8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x216ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x216abc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x216abcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x216ac0: 0xfe230150  sd          $v1, 0x150($s1)
    ctx->pc = 0x216ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 336), GPR_U64(ctx, 3));
label_216ac4:
    // 0x216ac4: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x216ac4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x216ac8: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x216ac8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x216acc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ad0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x216ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ad4: 0x43882f  dsubu       $s1, $v0, $v1
    ctx->pc = 0x216ad4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x216ad8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x216ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216adc: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x216adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x216ae0: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x216AE0u;
    SET_GPR_U32(ctx, 31, 0x216AE8u);
    ctx->pc = 0x216AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AE0u;
    // 0x216ae4: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x216AE0u, 0x216AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AE8u;
label_216ae8:
    // 0x216ae8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x216AE8u;
    {
        const bool branch_taken_0x216ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AE8u;
        // 0x216aec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ae8) {
            ctx->pc = 0x216B30u;
            goto label_216b30;
        }
    }
    ctx->pc = 0x216AF0u;
    // 0x216af0: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x216af0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x216af4: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x216af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x216af8: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x216af8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x216afc: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x216afcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x216b00: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x216b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x216b04: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x216b04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x216b08: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x216B08u;
    {
        const bool branch_taken_0x216b08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x216B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B08u;
        // 0x216b0c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b08) {
            ctx->pc = 0x216B20u;
            goto label_216b20;
        }
    }
    ctx->pc = 0x216B10u;
    // 0x216b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216b14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x216B14u;
    {
        const bool branch_taken_0x216b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B14u;
        // 0x216b18: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b14) {
            ctx->pc = 0x216B24u;
            goto label_216b24;
        }
    }
    ctx->pc = 0x216B1Cu;
    // 0x216b1c: 0x0  nop
    ctx->pc = 0x216b1cu;
    // NOP
label_216b20:
    // 0x216b20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x216b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_216b24:
    // 0x216b24: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x216b24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x216b28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x216B28u;
    {
        const bool branch_taken_0x216b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B28u;
        // 0x216b2c: 0xffc20000  sd          $v0, 0x0($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b28) {
            ctx->pc = 0x216B88u;
            goto label_216b88;
        }
    }
    ctx->pc = 0x216B30u;
label_216b30:
    // 0x216b30: 0x52e00009  beql        $s7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x216B30u;
    {
        const bool branch_taken_0x216b30 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x216b30) {
            ctx->pc = 0x216B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216B30u;
            // 0x216b34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216B58u;
            goto label_216b58;
        }
    }
    ctx->pc = 0x216B38u;
    // 0x216b38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x216b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216b3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x216b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x216b40: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x216b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x216b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216b48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x216b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x216b4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216b50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x216b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x216b54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x216b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_216b58:
    // 0x216b58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x216b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x216b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x216b60: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x216b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x216b64: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x216b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216b68: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x216b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x216b6c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x216b6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x216b70: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x216b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x216b74: 0xc085af0  jal         func_216BC0
    ctx->pc = 0x216B74u;
    SET_GPR_U32(ctx, 31, 0x216B7Cu);
    ctx->pc = 0x216B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B74u;
    // 0x216b78: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216BC0u, 0x216B74u, 0x216B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B7Cu;
label_216b7c:
    // 0x216b7c: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x216b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x216b80: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x216b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x216b84: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x216b84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_216b88:
    // 0x216b88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x216b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216b94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216b98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216b9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216b9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216ba0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x216ba0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216ba4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x216ba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216ba8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x216ba8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x216bac: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x216bacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216bb0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x216bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x216bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x216BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BB4u;
        // 0x216bb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216BBCu;
}
