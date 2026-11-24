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

// Function: sub_0037BDE0
// Address: 0x37bde0 - 0x37be80
void sub_0037BDE0_0x37bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BDE0_0x37bde0");
#endif

    ctx->pc = 0x37bde0u;

    // 0x37bde0: 0x94822b9c  lhu         $v0, 0x2B9C($a0)
    ctx->pc = 0x37bde0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 11164)));
    // 0x37bde4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37BDE4u;
    {
        const bool branch_taken_0x37bde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bde4) {
            ctx->pc = 0x37BDF8u;
            goto label_37bdf8;
        }
    }
    ctx->pc = 0x37BDECu;
    // 0x37bdec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37bdf0: 0xa4822b9c  sh          $v0, 0x2B9C($a0)
    ctx->pc = 0x37bdf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11164), (uint16_t)GPR_U32(ctx, 2));
    // 0x37bdf4: 0x0  nop
    ctx->pc = 0x37bdf4u;
    // NOP
label_37bdf8:
    // 0x37bdf8: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x37bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x37bdfc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x37bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x37be00: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x37be00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x37be04: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x37be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x37be08: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x37be08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x37be0c: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x37be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x37be10: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x37be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x37be14: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x37be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x37be18: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x37be18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x37be1c: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x37be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x37be20: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37be20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37be24: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x37be24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x37be28: 0x90822b78  lbu         $v0, 0x2B78($a0)
    ctx->pc = 0x37be28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11128)));
    // 0x37be2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x37be2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37be30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37BE30u;
    {
        const bool branch_taken_0x37be30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37be30) {
            ctx->pc = 0x37BE50u;
            goto label_37be50;
        }
    }
    ctx->pc = 0x37BE38u;
    // 0x37be38: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x37be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x37be3c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37be40: 0xac8206c8  sw          $v0, 0x6C8($a0)
    ctx->pc = 0x37be40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 2));
    // 0x37be44: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x37be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x37be48: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37be4c: 0xac8206cc  sw          $v0, 0x6CC($a0)
    ctx->pc = 0x37be4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
label_37be50:
    // 0x37be50: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x37be50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x37be54: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x37be54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x37be58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37be58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37be5c: 0xac8206c8  sw          $v0, 0x6C8($a0)
    ctx->pc = 0x37be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 2));
    // 0x37be60: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x37be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x37be64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37be64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37be68: 0xac8206cc  sw          $v0, 0x6CC($a0)
    ctx->pc = 0x37be68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
    // 0x37be6c: 0xac8028f4  sw          $zero, 0x28F4($a0)
    ctx->pc = 0x37be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10484), GPR_U32(ctx, 0));
    // 0x37be70: 0x9482078c  lhu         $v0, 0x78C($a0)
    ctx->pc = 0x37be70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1932)));
    // 0x37be74: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37be74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37be78: 0x80a6188  j           func_298620
    ctx->pc = 0x37BE78u;
    ctx->pc = 0x37BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE78u;
    // 0x37be7c: 0xa482078c  sh          $v0, 0x78C($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    sub_00298620_0x298620(rdram, ctx, runtime); return;
    ctx->pc = 0x37BE80u;
}
