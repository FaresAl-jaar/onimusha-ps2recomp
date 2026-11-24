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

// Function: sub_0025ACE0
// Address: 0x25ace0 - 0x25ad4c
void sub_0025ACE0_0x25ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ACE0_0x25ace0");
#endif

    ctx->pc = 0x25ace0u;

    // 0x25ace0: 0xa085005c  sb          $a1, 0x5C($a0)
    ctx->pc = 0x25ace0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 5));
    // 0x25ace4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x25ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x25ace8: 0xa086005d  sb          $a2, 0x5D($a0)
    ctx->pc = 0x25ace8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 6));
    // 0x25acec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x25acecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25acf0: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x25acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x25acf4: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x25acf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x25acf8: 0xa089005e  sb          $t1, 0x5E($a0)
    ctx->pc = 0x25acf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 9));
    // 0x25acfc: 0xa4830060  sh          $v1, 0x60($a0)
    ctx->pc = 0x25acfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ad00: 0xa4830066  sh          $v1, 0x66($a0)
    ctx->pc = 0x25ad00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ad04: 0xa483006a  sh          $v1, 0x6A($a0)
    ctx->pc = 0x25ad04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ad08: 0xa4800062  sh          $zero, 0x62($a0)
    ctx->pc = 0x25ad08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ad0c: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AD0Cu;
    {
        const bool branch_taken_0x25ad0c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD0Cu;
        // 0x25ad10: 0xa0820064  sb          $v0, 0x64($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad0c) {
            ctx->pc = 0x25AD28u;
            goto label_25ad28;
        }
    }
    ctx->pc = 0x25AD14u;
    // 0x25ad14: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x25ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x25ad18: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x25ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x25ad1c: 0x90820050  lbu         $v0, 0x50($a0)
    ctx->pc = 0x25ad1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x25ad20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x25ad20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x25ad24: 0xa0820050  sb          $v0, 0x50($a0)
    ctx->pc = 0x25ad24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 2));
label_25ad28:
    // 0x25ad28: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x25ad28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x25ad2c: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x25ad2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x25ad30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25ad34: 0x79630000  lq          $v1, 0x0($t3)
    ctx->pc = 0x25ad34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x25ad38: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x25ad38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad3c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x25ad3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad40: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x25ad40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x25ad44: 0x8074224  j           func_1D0890
    ctx->pc = 0x25AD44u;
    ctx->pc = 0x25AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD44u;
    // 0x25ad48: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0890u;
    sub_001D0890_0x1d0890(rdram, ctx, runtime); return;
    ctx->pc = 0x25AD4Cu;
}
