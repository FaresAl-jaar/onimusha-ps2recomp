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

// Function: sub_00149A70
// Address: 0x149a70 - 0x149b48
void sub_00149A70_0x149a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149A70_0x149a70");
#endif

    switch (ctx->pc) {
        case 0x149ab0u: goto label_149ab0;
        case 0x149b28u: goto label_149b28;
        default: break;
    }

    ctx->pc = 0x149a70u;

    // 0x149a70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x149a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x149a74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x149a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x149a78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x149a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149a7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149a80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x149a80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149a88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x149a88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149a90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x149a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x149a94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149a98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x149a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a9c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x149a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149aa0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x149aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149aa4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x149aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x149aa8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x149AA8u;
    SET_GPR_U32(ctx, 31, 0x149AB0u);
    ctx->pc = 0x149AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149AA8u;
    // 0x149aac: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x149AA8u, 0x149AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AB0u;
label_149ab0:
    // 0x149ab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ab4: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x149AB4u;
    {
        const bool branch_taken_0x149ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ab4) {
            ctx->pc = 0x149B28u;
            goto label_149b28;
        }
    }
    ctx->pc = 0x149ABCu;
    // 0x149abc: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x149abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x149ac0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x149ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x149ac4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x149ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x149ac8: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x149ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x149acc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x149accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x149ad0: 0x3c041818  lui         $a0, 0x1818
    ctx->pc = 0x149ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6168 << 16));
    // 0x149ad4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x149ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149ad8: 0x34860046  ori         $a2, $a0, 0x46
    ctx->pc = 0x149ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)70);
    // 0x149adc: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x149adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x149ae0: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x149ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x149ae4: 0x34647000  ori         $a0, $v1, 0x7000
    ctx->pc = 0x149ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x149ae8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x149ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x149aec: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x149aecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x149af0: 0x3c031c00  lui         $v1, 0x1C00
    ctx->pc = 0x149af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7168 << 16));
    // 0x149af4: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x149af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x149af8: 0xacb00014  sw          $s0, 0x14($a1)
    ctx->pc = 0x149af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 16));
    // 0x149afc: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x149afcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x149b00: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x149b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x149b04: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x149b04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x149b08: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x149b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x149b0c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x149b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x149b10: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x149b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x149b14: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x149b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x149b18: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x149b1c: 0xa0b1000f  sb          $s1, 0xF($a1)
    ctx->pc = 0x149b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 17));
    // 0x149b20: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x149B20u;
    SET_GPR_U32(ctx, 31, 0x149B28u);
    ctx->pc = 0x149B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149B20u;
    // 0x149b24: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x149B20u, 0x149B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B28u;
label_149b28:
    // 0x149b28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x149b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149b2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149b30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149b34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b40: 0x3e00008  jr          $ra
    ctx->pc = 0x149B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B40u;
        // 0x149b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149B48u;
}
