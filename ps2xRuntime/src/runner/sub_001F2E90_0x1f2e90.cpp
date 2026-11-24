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

// Function: sub_001F2E90
// Address: 0x1f2e90 - 0x1f3008
void sub_001F2E90_0x1f2e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2E90_0x1f2e90");
#endif

    switch (ctx->pc) {
        case 0x1f2e98u: goto label_1f2e98;
        case 0x1f2fc8u: goto label_1f2fc8;
        default: break;
    }

    ctx->pc = 0x1f2e90u;

    // 0x1f2e90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f2e94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2e98:
    // 0x1f2e98: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1f2e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f2e9c: 0x24ad0001  addiu       $t5, $a1, 0x1
    ctx->pc = 0x1f2e9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f2ea0: 0x24ac0002  addiu       $t4, $a1, 0x2
    ctx->pc = 0x1f2ea0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1f2ea4: 0x24ab0003  addiu       $t3, $a1, 0x3
    ctx->pc = 0x1f2ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1f2ea8: 0x24aa0004  addiu       $t2, $a1, 0x4
    ctx->pc = 0x1f2ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f2eac: 0x24a90005  addiu       $t1, $a1, 0x5
    ctx->pc = 0x1f2eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x1f2eb0: 0x24a80006  addiu       $t0, $a1, 0x6
    ctx->pc = 0x1f2eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1f2eb4: 0x24a70007  addiu       $a3, $a1, 0x7
    ctx->pc = 0x1f2eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x1f2eb8: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1f2eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1f2ebc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f2ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f2ec0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1f2ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1f2ec4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1f2ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f2ec8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f2ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f2ecc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1f2eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1f2ed0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1f2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1f2ed4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f2ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f2ed8: 0x28a60010  slti        $a2, $a1, 0x10
    ctx->pc = 0x1f2ed8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f2edc: 0x8c6e000c  lw          $t6, 0xC($v1)
    ctx->pc = 0x1f2edcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f2ee0: 0xe7102  srl         $t6, $t6, 4
    ctx->pc = 0x1f2ee0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x1f2ee4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1f2ee4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1f2ee8: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x1f2ee8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1f2eec: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x1f2eecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1f2ef0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1f2ef0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1f2ef4: 0xac6d000c  sw          $t5, 0xC($v1)
    ctx->pc = 0x1f2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 13));
    // 0x1f2ef8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1f2ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1f2efc: 0x8c6d0014  lw          $t5, 0x14($v1)
    ctx->pc = 0x1f2efcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1f2f00: 0xd6902  srl         $t5, $t5, 4
    ctx->pc = 0x1f2f00u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x1f2f04: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1f2f04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1f2f08: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x1f2f08u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x1f2f0c: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1f2f0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1f2f10: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1f2f10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1f2f14: 0xac6c0014  sw          $t4, 0x14($v1)
    ctx->pc = 0x1f2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 12));
    // 0x1f2f18: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1f2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1f2f1c: 0x8c6c001c  lw          $t4, 0x1C($v1)
    ctx->pc = 0x1f2f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f2f20: 0xc6102  srl         $t4, $t4, 4
    ctx->pc = 0x1f2f20u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x1f2f24: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1f2f24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1f2f28: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x1f2f28u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1f2f2c: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1f2f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1f2f30: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1f2f30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1f2f34: 0xac6b001c  sw          $t3, 0x1C($v1)
    ctx->pc = 0x1f2f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 11));
    // 0x1f2f38: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1f2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1f2f3c: 0x8c6b0024  lw          $t3, 0x24($v1)
    ctx->pc = 0x1f2f3cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1f2f40: 0xb5902  srl         $t3, $t3, 4
    ctx->pc = 0x1f2f40u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 4));
    // 0x1f2f44: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1f2f44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1f2f48: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x1f2f48u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1f2f4c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1f2f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1f2f50: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f2f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f2f54: 0xac6a0024  sw          $t2, 0x24($v1)
    ctx->pc = 0x1f2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 10));
    // 0x1f2f58: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1f2f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1f2f5c: 0x8c6a002c  lw          $t2, 0x2C($v1)
    ctx->pc = 0x1f2f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1f2f60: 0xa5102  srl         $t2, $t2, 4
    ctx->pc = 0x1f2f60u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x1f2f64: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f2f64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f2f68: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1f2f68u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1f2f6c: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1f2f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1f2f70: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f2f70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f2f74: 0xac69002c  sw          $t1, 0x2C($v1)
    ctx->pc = 0x1f2f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 9));
    // 0x1f2f78: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1f2f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1f2f7c: 0x8c690034  lw          $t1, 0x34($v1)
    ctx->pc = 0x1f2f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1f2f80: 0x94902  srl         $t1, $t1, 4
    ctx->pc = 0x1f2f80u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x1f2f84: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f2f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f2f88: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1f2f88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1f2f8c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1f2f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1f2f90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f2f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f2f94: 0xac680034  sw          $t0, 0x34($v1)
    ctx->pc = 0x1f2f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 8));
    // 0x1f2f98: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1f2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1f2f9c: 0x8c68003c  lw          $t0, 0x3C($v1)
    ctx->pc = 0x1f2f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1f2fa0: 0x84102  srl         $t0, $t0, 4
    ctx->pc = 0x1f2fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x1f2fa4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f2fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f2fa8: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x1f2fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1f2fac: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1f2facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1f2fb0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f2fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f2fb4: 0xac67003c  sw          $a3, 0x3C($v1)
    ctx->pc = 0x1f2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 7));
    // 0x1f2fb8: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1f2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1f2fbc: 0x14c0ffb6  bnez        $a2, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1F2FBCu;
    {
        const bool branch_taken_0x1f2fbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FBCu;
        // 0x1f2fc0: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2fbc) {
            ctx->pc = 0x1F2E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2e98;
        }
    }
    ctx->pc = 0x1F2FC4u;
    // 0x1f2fc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2fc8:
    // 0x1f2fc8: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x1f2fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f2fcc: 0xa0a60080  sb          $a2, 0x80($a1)
    ctx->pc = 0x1f2fccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f2fd0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1f2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f2fd4: 0xa0a30081  sb          $v1, 0x81($a1)
    ctx->pc = 0x1f2fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 129), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2fd8: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x1f2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1f2fdc: 0xa0a30082  sb          $v1, 0x82($a1)
    ctx->pc = 0x1f2fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 130), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2fe0: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1f2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1f2fe4: 0xa0a30083  sb          $v1, 0x83($a1)
    ctx->pc = 0x1f2fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2fe8: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x1f2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f2fec: 0xa0a30084  sb          $v1, 0x84($a1)
    ctx->pc = 0x1f2fecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 132), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2ff0: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x1f2ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1f2ff4: 0x28c3000f  slti        $v1, $a2, 0xF
    ctx->pc = 0x1f2ff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1f2ff8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F2FF8u;
    {
        const bool branch_taken_0x1f2ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2ff8) {
            ctx->pc = 0x1F2FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2fc8;
        }
    }
    ctx->pc = 0x1F3000u;
    // 0x1f3000: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3000u;
        // 0x1f3004: 0xa080008f  sb          $zero, 0x8F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 143), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3008u;
}
