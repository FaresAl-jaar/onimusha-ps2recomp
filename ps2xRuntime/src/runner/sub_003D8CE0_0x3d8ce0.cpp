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

// Function: sub_003D8CE0
// Address: 0x3d8ce0 - 0x3d8dbc
void sub_003D8CE0_0x3d8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8CE0_0x3d8ce0");
#endif

    switch (ctx->pc) {
        case 0x3d8d20u: goto label_3d8d20;
        case 0x3d8d2cu: goto label_3d8d2c;
        default: break;
    }

    ctx->pc = 0x3d8ce0u;

    // 0x3d8ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d8ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d8ce4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3d8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3d8ce8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d8cec: 0x244246f8  addiu       $v0, $v0, 0x46F8
    ctx->pc = 0x3d8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18168));
    // 0x3d8cf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d8cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d8cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d8cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d8cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d8cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d8d00: 0x90832bd9  lbu         $v1, 0x2BD9($a0)
    ctx->pc = 0x3d8d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11225)));
    // 0x3d8d04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d8d08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d8d0c: 0x90510002  lbu         $s1, 0x2($v0)
    ctx->pc = 0x3d8d0cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d8d10: 0x90520001  lbu         $s2, 0x1($v0)
    ctx->pc = 0x3d8d10u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3d8d14: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x3d8d14u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d8d18: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3D8D18u;
    SET_GPR_U32(ctx, 31, 0x3D8D20u);
    ctx->pc = 0x3D8D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8D18u;
    // 0x3d8d1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3D8D18u, 0x3D8D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8D20u;
label_3d8d20:
    // 0x3d8d20: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3d8d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3d8d24: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3D8D24u;
    SET_GPR_U32(ctx, 31, 0x3D8D2Cu);
    ctx->pc = 0x3D8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8D24u;
    // 0x3d8d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3D8D24u, 0x3D8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8D2Cu;
label_3d8d2c:
    // 0x3d8d2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3d8d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d8d30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d8d30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d8d34: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x3d8d34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3d8d38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8D38u;
    {
        const bool branch_taken_0x3d8d38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8d38) {
            ctx->pc = 0x3D8D48u;
            goto label_3d8d48;
        }
    }
    ctx->pc = 0x3D8D40u;
    // 0x3d8d40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D8D40u;
    {
        const bool branch_taken_0x3d8d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D40u;
        // 0x3d8d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8d40) {
            ctx->pc = 0x3D8D80u;
            goto label_3d8d80;
        }
    }
    ctx->pc = 0x3D8D48u;
label_3d8d48:
    // 0x3d8d48: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x3d8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3d8d4c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3d8d4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d8d50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8D50u;
    {
        const bool branch_taken_0x3d8d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8d50) {
            ctx->pc = 0x3D8D60u;
            goto label_3d8d60;
        }
    }
    ctx->pc = 0x3D8D58u;
    // 0x3d8d58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3D8D58u;
    {
        const bool branch_taken_0x3d8d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D58u;
        // 0x3d8d5c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8d58) {
            ctx->pc = 0x3D8D80u;
            goto label_3d8d80;
        }
    }
    ctx->pc = 0x3D8D60u;
label_3d8d60:
    // 0x3d8d60: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3d8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3d8d64: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3d8d64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d8d68: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8D68u;
    {
        const bool branch_taken_0x3d8d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8d68) {
            ctx->pc = 0x3D8D78u;
            goto label_3d8d78;
        }
    }
    ctx->pc = 0x3D8D70u;
    // 0x3d8d70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8D70u;
    {
        const bool branch_taken_0x3d8d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D70u;
        // 0x3d8d74: 0x64020002  daddiu      $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8d70) {
            ctx->pc = 0x3D8D80u;
            goto label_3d8d80;
        }
    }
    ctx->pc = 0x3D8D78u;
label_3d8d78:
    // 0x3d8d78: 0x64020003  daddiu      $v0, $zero, 0x3
    ctx->pc = 0x3d8d78u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x3d8d7c: 0x0  nop
    ctx->pc = 0x3d8d7cu;
    // NOP
label_3d8d80:
    // 0x3d8d80: 0x92042bd9  lbu         $a0, 0x2BD9($s0)
    ctx->pc = 0x3d8d80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11225)));
    // 0x3d8d84: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3d8d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3d8d88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3d8d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d8d8c: 0x246346e8  addiu       $v1, $v1, 0x46E8
    ctx->pc = 0x3d8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18152));
    // 0x3d8d90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d8d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d8d94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d8d94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d8d98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d8d98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d8d9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d8d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8da0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d8da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3d8da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d8dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d8db0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3d8db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d8db4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8DB4u;
        // 0x3d8db8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8DBCu;
}
