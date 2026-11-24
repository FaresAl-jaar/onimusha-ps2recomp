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

// Function: sub_0026C050
// Address: 0x26c050 - 0x26c1a8
void sub_0026C050_0x26c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C050_0x26c050");
#endif

    switch (ctx->pc) {
        case 0x26c068u: goto label_26c068;
        default: break;
    }

    ctx->pc = 0x26c050u;

    // 0x26c050: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x26c050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x26c054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c058: 0x24a520f0  addiu       $a1, $a1, 0x20F0
    ctx->pc = 0x26c058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8432));
    // 0x26c05c: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x26c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x26c060: 0x34436060  ori         $v1, $v0, 0x6060
    ctx->pc = 0x26c060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x26c064: 0x0  nop
    ctx->pc = 0x26c064u;
    // NOP
label_26c068:
    // 0x26c068: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x26c068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x26c06c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x26c06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26c070: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x26c070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x26c074: 0x2cc20009  sltiu       $v0, $a2, 0x9
    ctx->pc = 0x26c074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x26c078: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x26c078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x26c07c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C07Cu;
    {
        const bool branch_taken_0x26c07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c07c) {
            ctx->pc = 0x26C068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c068;
        }
    }
    ctx->pc = 0x26C084u;
    // 0x26c084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c088: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c08c: 0xa0221fc0  sb          $v0, 0x1FC0($at)
    ctx->pc = 0x26c08cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4E1FC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4E1FC0u, _value); } while (0);
    // 0x26c090: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x26c090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x26c094: 0x34668080  ori         $a2, $v1, 0x8080
    ctx->pc = 0x26c094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x26c098: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c09c: 0xac2622b4  sw          $a2, 0x22B4($at)
    ctx->pc = 0x26c09cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4E22B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E22B4u, _value); } while (0);
    // 0x26c0a0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x26c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x26c0a4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c0a8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x26c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x26c0ac: 0xac2622cc  sw          $a2, 0x22CC($at)
    ctx->pc = 0x26c0acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4E22CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E22CCu, _value); } while (0);
    // 0x26c0b0: 0x24631734  addiu       $v1, $v1, 0x1734
    ctx->pc = 0x26c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5940));
    // 0x26c0b4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c0b8: 0x24421736  addiu       $v0, $v0, 0x1736
    ctx->pc = 0x26c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5942));
    // 0x26c0bc: 0xac2622e4  sw          $a2, 0x22E4($at)
    ctx->pc = 0x26c0bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4E22E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E22E4u, _value); } while (0);
    // 0x26c0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0c4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c0c8: 0xac2622fc  sw          $a2, 0x22FC($at)
    ctx->pc = 0x26c0c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4E22FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4E22FCu, _value); } while (0);
    // 0x26c0cc: 0x808700a4  lb          $a3, 0xA4($a0)
    ctx->pc = 0x26c0ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x26c0d0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c0d4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x26c0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x26c0d8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x26c0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x26c0dc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x26c0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x26c0e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26c0e4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26c0e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c0e8: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x26c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x26c0ec: 0xa4231fc4  sh          $v1, 0x1FC4($at)
    ctx->pc = 0x26c0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8132), (uint16_t)GPR_U32(ctx, 3));
    // 0x26c0f0: 0x808600a4  lb          $a2, 0xA4($a0)
    ctx->pc = 0x26c0f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x26c0f4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c0f8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x26c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26c0fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26c100: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26c100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26c104: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x26c104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c108: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26c108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c10c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x26c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26c110: 0xa4231fc6  sh          $v1, 0x1FC6($at)
    ctx->pc = 0x26c110u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8134), (uint16_t)GPR_U32(ctx, 3));
    // 0x26c114: 0x808600a4  lb          $a2, 0xA4($a0)
    ctx->pc = 0x26c114u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x26c118: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c11c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x26c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26c120: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26c124: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26c124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26c128: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x26c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c12c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26c12cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c130: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26c130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26c134: 0xa4231616  sh          $v1, 0x1616($at)
    ctx->pc = 0x26c134u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5654), (uint16_t)GPR_U32(ctx, 3));
    // 0x26c138: 0x808600a4  lb          $a2, 0xA4($a0)
    ctx->pc = 0x26c138u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x26c13c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c140: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x26c140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26c144: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26c144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26c148: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26c148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26c14c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x26c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c150: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26c150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26c158: 0xa423162e  sh          $v1, 0x162E($at)
    ctx->pc = 0x26c158u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5678), (uint16_t)GPR_U32(ctx, 3));
    // 0x26c15c: 0x808600a4  lb          $a2, 0xA4($a0)
    ctx->pc = 0x26c15cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x26c160: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c164: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x26c164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26c168: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26c168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26c16c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26c170: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x26c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c174: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x26c174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c178: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26c178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26c17c: 0xa4231646  sh          $v1, 0x1646($at)
    ctx->pc = 0x26c17cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 5702), (uint16_t)GPR_U32(ctx, 3));
    // 0x26c180: 0x808600a4  lb          $a2, 0xA4($a0)
    ctx->pc = 0x26c180u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x26c184: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x26c184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x26c188: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x26c188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x26c18c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26c190: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x26c190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26c194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c198: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x26c198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c19c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26c1a0: 0x809bc48  j           func_26F120
    ctx->pc = 0x26C1A0u;
    ctx->pc = 0x26C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1A0u;
    // 0x26c1a4: 0xa422165e  sh          $v0, 0x165E($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 5726), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    sub_0026F120_0x26f120(rdram, ctx, runtime); return;
    ctx->pc = 0x26C1A8u;
}
