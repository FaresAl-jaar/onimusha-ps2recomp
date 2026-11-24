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

// Function: sub_00104D38
// Address: 0x104d38 - 0x104dc8
void sub_00104D38_0x104d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104D38_0x104d38");
#endif

    ctx->pc = 0x104d38u;

    // 0x104d38: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x104d38u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d3c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x104d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x104d40: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x104d40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x104d44: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x104d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x104d48: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x104d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x104d4c: 0x62082  srl         $a0, $a2, 2
    ctx->pc = 0x104d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x104d50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x104d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x104d54: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x104d54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x104d58: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x104d58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x104d5c: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x104d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x104d60: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x104d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x104d64: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x104d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x104d68: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x104d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x104d6c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x104d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x104d70: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x104d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x104d74: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x104d74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d78: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x104d78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d7c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x104d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x104d80: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x104d80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x104d84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x104d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x104d88: 0x25250004  addiu       $a1, $t1, 0x4
    ctx->pc = 0x104d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x104d8c: 0xe7580b  movn        $t3, $a3, $a3
    ctx->pc = 0x104d8cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 7));
    // 0x104d90: 0x108600b  movn        $t4, $t0, $t0
    ctx->pc = 0x104d90u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 8));
    // 0x104d94: 0x445018  mult        $t2, $v0, $a0
    ctx->pc = 0x104d94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x104d98: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x104d98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x104d9c: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x104d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x104da0: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x104da0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x104da4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104DA4u;
    {
        const bool branch_taken_0x104da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DA4u;
        // 0x104da8: 0xada9000c  sw          $t1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104da4) {
            ctx->pc = 0x104DB4u;
            goto label_104db4;
        }
    }
    ctx->pc = 0x104DACu;
    // 0x104dac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104DACu;
    {
        const bool branch_taken_0x104dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DACu;
        // 0x104db0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dac) {
            ctx->pc = 0x104DBCu;
            goto label_104dbc;
        }
    }
    ctx->pc = 0x104DB4u;
label_104db4:
    // 0x104db4: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x104db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x104db8: 0xc1400  sll         $v0, $t4, 16
    ctx->pc = 0x104db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_104dbc:
    // 0x104dbc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x104dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x104dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x104DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DC0u;
        // 0x104dc4: 0xada20010  sw          $v0, 0x10($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104DC8u;
}
