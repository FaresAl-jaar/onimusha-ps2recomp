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

// Function: sub_001DB0F0
// Address: 0x1db0f0 - 0x1db1b0
void sub_001DB0F0_0x1db0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB0F0_0x1db0f0");
#endif

    ctx->pc = 0x1db0f0u;

    // 0x1db0f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1db0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db0f4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1db0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1db0f8: 0x8ca80014  lw          $t0, 0x14($a1)
    ctx->pc = 0x1db0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1db0fc: 0x24830078  addiu       $v1, $a0, 0x78
    ctx->pc = 0x1db0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x1db100: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x1db100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1db104: 0xace80014  sw          $t0, 0x14($a3)
    ctx->pc = 0x1db104u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 8));
    // 0x1db108: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x1db108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1db10c: 0x8ca70014  lw          $a3, 0x14($a1)
    ctx->pc = 0x1db10cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1db110: 0xace80010  sw          $t0, 0x10($a3)
    ctx->pc = 0x1db110u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 8));
    // 0x1db114: 0x8c87008c  lw          $a3, 0x8C($a0)
    ctx->pc = 0x1db114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1db118: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x1db118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x1db11c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1db11cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1db120: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x1db120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1db124: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1db124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x1db128: 0xac85008c  sw          $a1, 0x8C($a0)
    ctx->pc = 0x1db128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
    // 0x1db12c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1db12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1db130: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1db134: 0x2c630040  sltiu       $v1, $v1, 0x40
    ctx->pc = 0x1db134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1db138: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DB138u;
    {
        const bool branch_taken_0x1db138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB138u;
        // 0x1db13c: 0xa64821  addu        $t1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db138) {
            ctx->pc = 0x1DB1A8u;
            goto label_1db1a8;
        }
    }
    ctx->pc = 0x1DB140u;
    // 0x1db140: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x1db140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1db144: 0xa1200020  sb          $zero, 0x20($t1)
    ctx->pc = 0x1db144u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1db148: 0x252a0020  addiu       $t2, $t1, 0x20
    ctx->pc = 0x1db148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1db14c: 0xa5200022  sh          $zero, 0x22($t1)
    ctx->pc = 0x1db14cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1db150: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x1db150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1db154: 0x24e7ffe0  addiu       $a3, $a3, -0x20
    ctx->pc = 0x1db154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x1db158: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x1db158u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1db15c: 0xad270024  sw          $a3, 0x24($t1)
    ctx->pc = 0x1db15cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 7));
    // 0x1db160: 0x94880090  lhu         $t0, 0x90($a0)
    ctx->pc = 0x1db160u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1db164: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x1db164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1db168: 0xa4870090  sh          $a3, 0x90($a0)
    ctx->pc = 0x1db168u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 7));
    // 0x1db16c: 0xa5280022  sh          $t0, 0x22($t1)
    ctx->pc = 0x1db16cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 34), (uint16_t)GPR_U32(ctx, 8));
    // 0x1db170: 0xad230034  sw          $v1, 0x34($t1)
    ctx->pc = 0x1db170u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 3));
    // 0x1db174: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1db174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1db178: 0xad230030  sw          $v1, 0x30($t1)
    ctx->pc = 0x1db178u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 3));
    // 0x1db17c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1db17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1db180: 0xac6a0014  sw          $t2, 0x14($v1)
    ctx->pc = 0x1db180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 10));
    // 0x1db184: 0xac8a0028  sw          $t2, 0x28($a0)
    ctx->pc = 0x1db184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 10));
    // 0x1db188: 0xad25002c  sw          $a1, 0x2C($t1)
    ctx->pc = 0x1db188u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 5));
    // 0x1db18c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1db18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1db190: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x1db190u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x1db194: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1db194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1db198: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x1db198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x1db19c: 0xacaa0008  sw          $t2, 0x8($a1)
    ctx->pc = 0x1db19cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x1db1a0: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x1db1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1db1a4: 0x0  nop
    ctx->pc = 0x1db1a4u;
    // NOP
label_1db1a8:
    // 0x1db1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB1B0u;
}
