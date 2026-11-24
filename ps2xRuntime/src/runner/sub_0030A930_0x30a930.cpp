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

// Function: sub_0030A930
// Address: 0x30a930 - 0x30aa30
void sub_0030A930_0x30a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A930_0x30a930");
#endif

    switch (ctx->pc) {
        case 0x30a954u: goto label_30a954;
        case 0x30a980u: goto label_30a980;
        case 0x30a9c8u: goto label_30a9c8;
        default: break;
    }

    ctx->pc = 0x30a930u;

    // 0x30a930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30a934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30a938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a93c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x30a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x30a940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30a940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a944: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x30a944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a948: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x30a948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x30a94c: 0xc049e80  jal         func_127A00
    ctx->pc = 0x30A94Cu;
    SET_GPR_U32(ctx, 31, 0x30A954u);
    ctx->pc = 0x30A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A94Cu;
    // 0x30a950: 0x24a5c938  addiu       $a1, $a1, -0x36C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A00u, 0x30A94Cu, 0x30A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A954u;
label_30a954:
    // 0x30a954: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30A954u;
    {
        const bool branch_taken_0x30a954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a954) {
            ctx->pc = 0x30A968u;
            goto label_30a968;
        }
    }
    ctx->pc = 0x30A95Cu;
    // 0x30a95c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30A95Cu;
    {
        const bool branch_taken_0x30a95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A95Cu;
        // 0x30a960: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a95c) {
            ctx->pc = 0x30AA20u;
            goto label_30aa20;
        }
    }
    ctx->pc = 0x30A964u;
    // 0x30a964: 0x0  nop
    ctx->pc = 0x30a964u;
    // NOP
label_30a968:
    // 0x30a968: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30a968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a96c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x30a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30a970: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x30a970u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30a974: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x30A974u;
    {
        const bool branch_taken_0x30a974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A974u;
        // 0x30a978: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a974) {
            ctx->pc = 0x30A9B0u;
            goto label_30a9b0;
        }
    }
    ctx->pc = 0x30A97Cu;
    // 0x30a97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30a97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a980:
    // 0x30a980: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x30a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30a984: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x30a984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a988: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30a988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30a98c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a990: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30a990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30a994: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x30a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30a998: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x30a998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x30a99c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a9a0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x30a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30a9a4: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x30a9a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30a9a8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x30A9A8u;
    {
        const bool branch_taken_0x30a9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A9A8u;
        // 0x30a9ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9a8) {
            ctx->pc = 0x30A980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a980;
        }
    }
    ctx->pc = 0x30A9B0u;
label_30a9b0:
    // 0x30a9b0: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x30a9b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30a9b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30a9b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9b8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x30A9B8u;
    {
        const bool branch_taken_0x30a9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A9B8u;
        // 0x30a9bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9b8) {
            ctx->pc = 0x30AA00u;
            goto label_30aa00;
        }
    }
    ctx->pc = 0x30A9C0u;
    // 0x30a9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30a9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30a9c8:
    // 0x30a9c8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x30a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30a9cc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x30a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30a9d0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A9D0u;
    {
        const bool branch_taken_0x30a9d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A9D0u;
        // 0x30a9d4: 0xa4640018  sh          $a0, 0x18($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9d0) {
            ctx->pc = 0x30A9E0u;
            goto label_30a9e0;
        }
    }
    ctx->pc = 0x30A9D8u;
    // 0x30a9d8: 0xa5070018  sh          $a3, 0x18($t0)
    ctx->pc = 0x30a9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 24), (uint16_t)GPR_U32(ctx, 7));
    // 0x30a9dc: 0x0  nop
    ctx->pc = 0x30a9dcu;
    // NOP
label_30a9e0:
    // 0x30a9e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a9e4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x30a9e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30a9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30a9ec: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x30a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30a9f0: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x30a9f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30a9f4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x30A9F4u;
    {
        const bool branch_taken_0x30a9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A9F4u;
        // 0x30a9f8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9f4) {
            ctx->pc = 0x30A9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a9c8;
        }
    }
    ctx->pc = 0x30A9FCu;
    // 0x30a9fc: 0x0  nop
    ctx->pc = 0x30a9fcu;
    // NOP
label_30aa00:
    // 0x30aa00: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x30aa00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x30aa04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aa08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30aa0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30aa10: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x30aa10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x30aa14: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x30aa14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x30aa18: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x30aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x30aa1c: 0x0  nop
    ctx->pc = 0x30aa1cu;
    // NOP
label_30aa20:
    // 0x30aa20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30aa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30aa24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30aa24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30aa28: 0x3e00008  jr          $ra
    ctx->pc = 0x30AA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA28u;
        // 0x30aa2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AA30u;
}
