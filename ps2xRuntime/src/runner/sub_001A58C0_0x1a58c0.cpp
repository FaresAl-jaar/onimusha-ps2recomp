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

// Function: sub_001A58C0
// Address: 0x1a58c0 - 0x1a5a50
void sub_001A58C0_0x1a58c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A58C0_0x1a58c0");
#endif

    switch (ctx->pc) {
        case 0x1a58f0u: goto label_1a58f0;
        case 0x1a5a18u: goto label_1a5a18;
        default: break;
    }

    ctx->pc = 0x1a58c0u;

    // 0x1a58c0: 0x24a90010  addiu       $t1, $a1, 0x10
    ctx->pc = 0x1a58c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1a58c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a58c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58c8: 0x94a50006  lhu         $a1, 0x6($a1)
    ctx->pc = 0x1a58c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1a58cc: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x1a58ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a58d0: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x1A58D0u;
    {
        const bool branch_taken_0x1a58d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58D0u;
        // 0x1a58d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58d0) {
            ctx->pc = 0x1A5A48u;
            goto label_1a5a48;
        }
    }
    ctx->pc = 0x1A58D8u;
    // 0x1a58d8: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x1a58d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a58dc: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A58DCu;
    {
        const bool branch_taken_0x1a58dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58DCu;
        // 0x1a58e0: 0x24a7fff8  addiu       $a3, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58dc) {
            ctx->pc = 0x1A5A00u;
            goto label_1a5a00;
        }
    }
    ctx->pc = 0x1A58E4u;
    // 0x1a58e4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1a58e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58e8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a58ec: 0x0  nop
    ctx->pc = 0x1a58ecu;
    // NOP
label_1a58f0:
    // 0x1a58f0: 0x8cd90000  lw          $t9, 0x0($a2)
    ctx->pc = 0x1a58f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a58f4: 0x310c001f  andi        $t4, $t0, 0x1F
    ctx->pc = 0x1a58f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x1a58f8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a58fc: 0x8ccd0004  lw          $t5, 0x4($a2)
    ctx->pc = 0x1a58fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a5900: 0x6c5823  subu        $t3, $v1, $t4
    ctx->pc = 0x1a5900u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1a5904: 0x3098001f  andi        $t8, $a0, 0x1F
    ctx->pc = 0x1a5904u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a5908: 0x8cce0008  lw          $t6, 0x8($a2)
    ctx->pc = 0x1a5908u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a590c: 0x785023  subu        $t2, $v1, $t8
    ctx->pc = 0x1a590cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1a5910: 0x25040002  addiu       $a0, $t0, 0x2
    ctx->pc = 0x1a5910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1a5914: 0x308f001f  andi        $t7, $a0, 0x1F
    ctx->pc = 0x1a5914u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a5918: 0x1996006  srlv        $t4, $t9, $t4
    ctx->pc = 0x1a5918u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 12) & 0x1F));
    // 0x1a591c: 0x1795804  sllv        $t3, $t9, $t3
    ctx->pc = 0x1a591cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 11) & 0x1F));
    // 0x1a5920: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x1a5920u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x1a5924: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1a5924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a5928: 0x30d5806  srlv        $t3, $t5, $t8
    ctx->pc = 0x1a5928u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
    // 0x1a592c: 0x14d5004  sllv        $t2, $t5, $t2
    ctx->pc = 0x1a592cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 10) & 0x1F));
    // 0x1a5930: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x1a5930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1a5934: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x1a5934u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x1a5938: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1a5938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1a593c: 0x1ee6006  srlv        $t4, $t6, $t7
    ctx->pc = 0x1a593cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
    // 0x1a5940: 0x6f5023  subu        $t2, $v1, $t7
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x1a5944: 0x8ccd0014  lw          $t5, 0x14($a2)
    ctx->pc = 0x1a5944u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1a5948: 0x14e5804  sllv        $t3, $t6, $t2
    ctx->pc = 0x1a5948u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
    // 0x1a594c: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x1a594cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x1a5950: 0x250a0003  addiu       $t2, $t0, 0x3
    ctx->pc = 0x1a5950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x1a5954: 0x314a001f  andi        $t2, $t2, 0x1F
    ctx->pc = 0x1a5954u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31);
    // 0x1a5958: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1a5958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1a595c: 0x1445806  srlv        $t3, $a0, $t2
    ctx->pc = 0x1a595cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 10) & 0x1F));
    // 0x1a5960: 0x8ccc0010  lw          $t4, 0x10($a2)
    ctx->pc = 0x1a5960u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a5964: 0x6a5023  subu        $t2, $v1, $t2
    ctx->pc = 0x1a5964u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1a5968: 0x8cce0018  lw          $t6, 0x18($a2)
    ctx->pc = 0x1a5968u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a596c: 0x1445004  sllv        $t2, $a0, $t2
    ctx->pc = 0x1a596cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 10) & 0x1F));
    // 0x1a5970: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x1a5970u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x1a5974: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1a5978: 0x308b001f  andi        $t3, $a0, 0x1F
    ctx->pc = 0x1a5978u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a597c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1a597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1a5980: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x1a5980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1a5984: 0x6b5023  subu        $t2, $v1, $t3
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1a5988: 0x3098001f  andi        $t8, $a0, 0x1F
    ctx->pc = 0x1a5988u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a598c: 0x16c5806  srlv        $t3, $t4, $t3
    ctx->pc = 0x1a598cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 11) & 0x1F));
    // 0x1a5990: 0x14c2004  sllv        $a0, $t4, $t2
    ctx->pc = 0x1a5990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 10) & 0x1F));
    // 0x1a5994: 0x1642025  or          $a0, $t3, $a0
    ctx->pc = 0x1a5994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x1a5998: 0x8ccc001c  lw          $t4, 0x1C($a2)
    ctx->pc = 0x1a5998u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1a599c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a59a0: 0x785023  subu        $t2, $v1, $t8
    ctx->pc = 0x1a59a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1a59a4: 0x25040006  addiu       $a0, $t0, 0x6
    ctx->pc = 0x1a59a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1a59a8: 0x30d5806  srlv        $t3, $t5, $t8
    ctx->pc = 0x1a59a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 24) & 0x1F));
    // 0x1a59ac: 0x308f001f  andi        $t7, $a0, 0x1F
    ctx->pc = 0x1a59acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a59b0: 0x14d2004  sllv        $a0, $t5, $t2
    ctx->pc = 0x1a59b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 10) & 0x1F));
    // 0x1a59b4: 0x1642025  or          $a0, $t3, $a0
    ctx->pc = 0x1a59b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x1a59b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a59bc: 0x1ee5806  srlv        $t3, $t6, $t7
    ctx->pc = 0x1a59bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
    // 0x1a59c0: 0x6f2023  subu        $a0, $v1, $t7
    ctx->pc = 0x1a59c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x1a59c4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1a59c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1a59c8: 0x8e5004  sllv        $t2, $t6, $a0
    ctx->pc = 0x1a59c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a59cc: 0x25040007  addiu       $a0, $t0, 0x7
    ctx->pc = 0x1a59ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x1a59d0: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x1a59d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x1a59d4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1a59d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a59d8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1a59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1a59dc: 0x8c5006  srlv        $t2, $t4, $a0
    ctx->pc = 0x1a59dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a59e0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1a59e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1a59e4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1a59e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a59e8: 0x8c2004  sllv        $a0, $t4, $a0
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a59ec: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x1a59ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x1a59f0: 0x107202b  sltu        $a0, $t0, $a3
    ctx->pc = 0x1a59f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1a59f4: 0x1480ffbe  bnez        $a0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1A59F4u;
    {
        const bool branch_taken_0x1a59f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59F4u;
        // 0x1a59f8: 0x4a1021  addu        $v0, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59f4) {
            ctx->pc = 0x1A58F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a58f0;
        }
    }
    ctx->pc = 0x1A59FCu;
    // 0x1a59fc: 0x0  nop
    ctx->pc = 0x1a59fcu;
    // NOP
label_1a5a00:
    // 0x1a5a00: 0x105082b  sltu        $at, $t0, $a1
    ctx->pc = 0x1a5a00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a5a04: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5A04u;
    {
        const bool branch_taken_0x1a5a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A04u;
        // 0x1a5a08: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a04) {
            ctx->pc = 0x1A5A48u;
            goto label_1a5a48;
        }
    }
    ctx->pc = 0x1A5A0Cu;
    // 0x1a5a0c: 0x1235021  addu        $t2, $t1, $v1
    ctx->pc = 0x1a5a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1a5a10: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a5a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a5a14: 0x0  nop
    ctx->pc = 0x1a5a14u;
    // NOP
label_1a5a18:
    // 0x1a5a18: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x1a5a18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a5a1c: 0x3107001f  andi        $a3, $t0, 0x1F
    ctx->pc = 0x1a5a1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x1a5a20: 0xc72023  subu        $a0, $a2, $a3
    ctx->pc = 0x1a5a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a5a24: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a5a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a5a28: 0x105182b  sltu        $v1, $t0, $a1
    ctx->pc = 0x1a5a28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a5a2c: 0xe93806  srlv        $a3, $t1, $a3
    ctx->pc = 0x1a5a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x1a5a30: 0x892004  sllv        $a0, $t1, $a0
    ctx->pc = 0x1a5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a5a34: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x1a5a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1a5a38: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1a5a3c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A5A3Cu;
    {
        const bool branch_taken_0x1a5a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A3Cu;
        // 0x1a5a40: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a3c) {
            ctx->pc = 0x1A5A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5a18;
        }
    }
    ctx->pc = 0x1A5A44u;
    // 0x1a5a44: 0x0  nop
    ctx->pc = 0x1a5a44u;
    // NOP
label_1a5a48:
    // 0x1a5a48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A50u;
}
