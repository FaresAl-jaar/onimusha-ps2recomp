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

// Function: sub_001324F0
// Address: 0x1324f0 - 0x13274c
void sub_001324F0_0x1324f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001324F0_0x1324f0");
#endif

    switch (ctx->pc) {
        case 0x132504u: goto label_132504;
        case 0x132510u: goto label_132510;
        case 0x132548u: goto label_132548;
        case 0x132580u: goto label_132580;
        case 0x1325c0u: goto label_1325c0;
        default: break;
    }

    ctx->pc = 0x1324f0u;

    // 0x1324f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1324f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1324f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1324f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1324f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1324f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1324fc: 0xc04c9d4  jal         func_132750
    ctx->pc = 0x1324FCu;
    SET_GPR_U32(ctx, 31, 0x132504u);
    ctx->pc = 0x132500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1324FCu;
    // 0x132500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132750u, 0x1324FCu, 0x132504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132504u;
label_132504:
    // 0x132504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13250c: 0x0  nop
    ctx->pc = 0x13250cu;
    // NOP
label_132510:
    // 0x132510: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x132510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x132514: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x132514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x132518: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x132518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x13251c: 0xa08000e0  sb          $zero, 0xE0($a0)
    ctx->pc = 0x13251cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x132520: 0x2ca30015  sltiu       $v1, $a1, 0x15
    ctx->pc = 0x132520u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x132524: 0xa0800150  sb          $zero, 0x150($a0)
    ctx->pc = 0x132524u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x132528: 0xa08001c0  sb          $zero, 0x1C0($a0)
    ctx->pc = 0x132528u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 448), (uint8_t)GPR_U32(ctx, 0));
    // 0x13252c: 0xa0800230  sb          $zero, 0x230($a0)
    ctx->pc = 0x13252cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 560), (uint8_t)GPR_U32(ctx, 0));
    // 0x132530: 0xa08002a0  sb          $zero, 0x2A0($a0)
    ctx->pc = 0x132530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 672), (uint8_t)GPR_U32(ctx, 0));
    // 0x132534: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x132534u;
    {
        const bool branch_taken_0x132534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x132538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132534u;
        // 0x132538: 0x24840310  addiu       $a0, $a0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132534) {
            ctx->pc = 0x132510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132510;
        }
    }
    ctx->pc = 0x13253Cu;
    // 0x13253c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132544: 0x0  nop
    ctx->pc = 0x132544u;
    // NOP
label_132548:
    // 0x132548: 0xa4a0098c  sh          $zero, 0x98C($a1)
    ctx->pc = 0x132548u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2444), (uint16_t)GPR_U32(ctx, 0));
    // 0x13254c: 0xa4a009a4  sh          $zero, 0x9A4($a1)
    ctx->pc = 0x13254cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2468), (uint16_t)GPR_U32(ctx, 0));
    // 0x132550: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x132550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x132554: 0xa4a009bc  sh          $zero, 0x9BC($a1)
    ctx->pc = 0x132554u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2492), (uint16_t)GPR_U32(ctx, 0));
    // 0x132558: 0x2c830080  sltiu       $v1, $a0, 0x80
    ctx->pc = 0x132558u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x13255c: 0xa4a009d4  sh          $zero, 0x9D4($a1)
    ctx->pc = 0x13255cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2516), (uint16_t)GPR_U32(ctx, 0));
    // 0x132560: 0xa4a009ec  sh          $zero, 0x9EC($a1)
    ctx->pc = 0x132560u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2540), (uint16_t)GPR_U32(ctx, 0));
    // 0x132564: 0xa4a00a04  sh          $zero, 0xA04($a1)
    ctx->pc = 0x132564u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2564), (uint16_t)GPR_U32(ctx, 0));
    // 0x132568: 0xa4a00a1c  sh          $zero, 0xA1C($a1)
    ctx->pc = 0x132568u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2588), (uint16_t)GPR_U32(ctx, 0));
    // 0x13256c: 0xa4a00a34  sh          $zero, 0xA34($a1)
    ctx->pc = 0x13256cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2612), (uint16_t)GPR_U32(ctx, 0));
    // 0x132570: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x132570u;
    {
        const bool branch_taken_0x132570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x132574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132570u;
        // 0x132574: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132570) {
            ctx->pc = 0x132548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132548;
        }
    }
    ctx->pc = 0x132578u;
    // 0x132578: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x132578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13257c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13257cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132580:
    // 0x132580: 0xa0a01598  sb          $zero, 0x1598($a1)
    ctx->pc = 0x132580u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5528), (uint8_t)GPR_U32(ctx, 0));
    // 0x132584: 0xa0a015b0  sb          $zero, 0x15B0($a1)
    ctx->pc = 0x132584u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5552), (uint8_t)GPR_U32(ctx, 0));
    // 0x132588: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x132588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13258c: 0xa0a015c8  sb          $zero, 0x15C8($a1)
    ctx->pc = 0x13258cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5576), (uint8_t)GPR_U32(ctx, 0));
    // 0x132590: 0x2c830100  sltiu       $v1, $a0, 0x100
    ctx->pc = 0x132590u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x132594: 0xa0a015e0  sb          $zero, 0x15E0($a1)
    ctx->pc = 0x132594u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5600), (uint8_t)GPR_U32(ctx, 0));
    // 0x132598: 0xa0a015f8  sb          $zero, 0x15F8($a1)
    ctx->pc = 0x132598u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5624), (uint8_t)GPR_U32(ctx, 0));
    // 0x13259c: 0xa0a01610  sb          $zero, 0x1610($a1)
    ctx->pc = 0x13259cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5648), (uint8_t)GPR_U32(ctx, 0));
    // 0x1325a0: 0xa0a01628  sb          $zero, 0x1628($a1)
    ctx->pc = 0x1325a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5672), (uint8_t)GPR_U32(ctx, 0));
    // 0x1325a4: 0xa0a01640  sb          $zero, 0x1640($a1)
    ctx->pc = 0x1325a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5696), (uint8_t)GPR_U32(ctx, 0));
    // 0x1325a8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1325A8u;
    {
        const bool branch_taken_0x1325a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1325ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325A8u;
        // 0x1325ac: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325a8) {
            ctx->pc = 0x132580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132580;
        }
    }
    ctx->pc = 0x1325B0u;
    // 0x1325b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1325b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1325b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325b8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1325b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325bc: 0x0  nop
    ctx->pc = 0x1325bcu;
    // NOP
label_1325c0:
    // 0x1325c0: 0x24a600a0  addiu       $a2, $a1, 0xA0
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x1325c4: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x1325c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1325c8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1325c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1325cc: 0x24a60140  addiu       $a2, $a1, 0x140
    ctx->pc = 0x1325ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1325d0: 0x24e72d90  addiu       $a3, $a3, 0x2D90
    ctx->pc = 0x1325d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x1325d4: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x1325d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1325d8: 0xac672d90  sw          $a3, 0x2D90($v1)
    ctx->pc = 0x1325d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11664), GPR_U32(ctx, 7));
    // 0x1325dc: 0x24c62d90  addiu       $a2, $a2, 0x2D90
    ctx->pc = 0x1325dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11664));
    // 0x1325e0: 0xac662e30  sw          $a2, 0x2E30($v1)
    ctx->pc = 0x1325e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11824), GPR_U32(ctx, 6));
    // 0x1325e4: 0x24a601e0  addiu       $a2, $a1, 0x1E0
    ctx->pc = 0x1325e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
    // 0x1325e8: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x1325e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1325ec: 0x24a60280  addiu       $a2, $a1, 0x280
    ctx->pc = 0x1325ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x1325f0: 0x24e72d90  addiu       $a3, $a3, 0x2D90
    ctx->pc = 0x1325f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x1325f4: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x1325f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1325f8: 0xac672ed0  sw          $a3, 0x2ED0($v1)
    ctx->pc = 0x1325f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11984), GPR_U32(ctx, 7));
    // 0x1325fc: 0x24c62d90  addiu       $a2, $a2, 0x2D90
    ctx->pc = 0x1325fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11664));
    // 0x132600: 0xac662f70  sw          $a2, 0x2F70($v1)
    ctx->pc = 0x132600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12144), GPR_U32(ctx, 6));
    // 0x132604: 0x24a60320  addiu       $a2, $a1, 0x320
    ctx->pc = 0x132604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
    // 0x132608: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x132608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x13260c: 0x24a603c0  addiu       $a2, $a1, 0x3C0
    ctx->pc = 0x13260cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x132610: 0x24e72d90  addiu       $a3, $a3, 0x2D90
    ctx->pc = 0x132610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x132614: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x132614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x132618: 0xac673010  sw          $a3, 0x3010($v1)
    ctx->pc = 0x132618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12304), GPR_U32(ctx, 7));
    // 0x13261c: 0x24c62d90  addiu       $a2, $a2, 0x2D90
    ctx->pc = 0x13261cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11664));
    // 0x132620: 0xac6630b0  sw          $a2, 0x30B0($v1)
    ctx->pc = 0x132620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12464), GPR_U32(ctx, 6));
    // 0x132624: 0x24a60460  addiu       $a2, $a1, 0x460
    ctx->pc = 0x132624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1120));
    // 0x132628: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x132628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x13262c: 0x24a60500  addiu       $a2, $a1, 0x500
    ctx->pc = 0x13262cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
    // 0x132630: 0x24e72d90  addiu       $a3, $a3, 0x2D90
    ctx->pc = 0x132630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x132634: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x132634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x132638: 0xac673150  sw          $a3, 0x3150($v1)
    ctx->pc = 0x132638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12624), GPR_U32(ctx, 7));
    // 0x13263c: 0x24c62d90  addiu       $a2, $a2, 0x2D90
    ctx->pc = 0x13263cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11664));
    // 0x132640: 0x24a50500  addiu       $a1, $a1, 0x500
    ctx->pc = 0x132640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
    // 0x132644: 0xac6631f0  sw          $a2, 0x31F0($v1)
    ctx->pc = 0x132644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12784), GPR_U32(ctx, 6));
    // 0x132648: 0x2c8600f7  sltiu       $a2, $a0, 0xF7
    ctx->pc = 0x132648u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)247) ? 1 : 0);
    // 0x13264c: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x13264Cu;
    {
        const bool branch_taken_0x13264c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x132650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13264Cu;
        // 0x132650: 0x24630500  addiu       $v1, $v1, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13264c) {
            ctx->pc = 0x1325C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1325c0;
        }
    }
    ctx->pc = 0x132654u;
    // 0x132654: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x132654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x132658: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x132658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x13265c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x13265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x132660: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x132660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132664: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x132664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x132668: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x132668u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x13266c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x13266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x132670: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x132670u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x132674: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x132674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x132678: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x132678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x13267c: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x13267cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x132680: 0x24a72d90  addiu       $a3, $a1, 0x2D90
    ctx->pc = 0x132680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 11664));
    // 0x132684: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x132684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x132688: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x132688u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13268c: 0xac672d90  sw          $a3, 0x2D90($v1)
    ctx->pc = 0x13268cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11664), GPR_U32(ctx, 7));
    // 0x132690: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x132690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x132694: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x132694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x132698: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x132698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x13269c: 0x2053821  addu        $a3, $s0, $a1
    ctx->pc = 0x13269cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1326a0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1326a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1326a4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1326a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1326a8: 0x24e62d90  addiu       $a2, $a3, 0x2D90
    ctx->pc = 0x1326a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x1326ac: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1326acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1326b0: 0xac662e30  sw          $a2, 0x2E30($v1)
    ctx->pc = 0x1326b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11824), GPR_U32(ctx, 6));
    // 0x1326b4: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1326b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1326b8: 0x24a72d90  addiu       $a3, $a1, 0x2D90
    ctx->pc = 0x1326b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 11664));
    // 0x1326bc: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x1326bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1326c0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1326c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1326c4: 0xac672ed0  sw          $a3, 0x2ED0($v1)
    ctx->pc = 0x1326c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11984), GPR_U32(ctx, 7));
    // 0x1326c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1326c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1326cc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1326ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1326d0: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x1326d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x1326d4: 0x2053821  addu        $a3, $s0, $a1
    ctx->pc = 0x1326d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1326d8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1326d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1326dc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1326dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1326e0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1326e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1326e4: 0x24e62d90  addiu       $a2, $a3, 0x2D90
    ctx->pc = 0x1326e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 11664));
    // 0x1326e8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1326e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1326ec: 0xac662f70  sw          $a2, 0x2F70($v1)
    ctx->pc = 0x1326ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12144), GPR_U32(ctx, 6));
    // 0x1326f0: 0x24a72d90  addiu       $a3, $a1, 0x2D90
    ctx->pc = 0x1326f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 11664));
    // 0x1326f4: 0x24860006  addiu       $a2, $a0, 0x6
    ctx->pc = 0x1326f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1326f8: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x1326f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1326fc: 0xac673010  sw          $a3, 0x3010($v1)
    ctx->pc = 0x1326fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12304), GPR_U32(ctx, 7));
    // 0x132700: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x132700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x132704: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x132704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x132708: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x132708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13270c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x132710: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x132710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x132714: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x132714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x132718: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x132718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13271c: 0x24a42d90  addiu       $a0, $a1, 0x2D90
    ctx->pc = 0x13271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11664));
    // 0x132720: 0x2062821  addu        $a1, $s0, $a2
    ctx->pc = 0x132720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x132724: 0xac6430b0  sw          $a0, 0x30B0($v1)
    ctx->pc = 0x132724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12464), GPR_U32(ctx, 4));
    // 0x132728: 0x24a42d90  addiu       $a0, $a1, 0x2D90
    ctx->pc = 0x132728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 11664));
    // 0x13272c: 0xac643150  sw          $a0, 0x3150($v1)
    ctx->pc = 0x13272cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12624), GPR_U32(ctx, 4));
    // 0x132730: 0x26032d90  addiu       $v1, $s0, 0x2D90
    ctx->pc = 0x132730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11664));
    // 0x132734: 0xaca02d90  sw          $zero, 0x2D90($a1)
    ctx->pc = 0x132734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11664), GPR_U32(ctx, 0));
    // 0x132738: 0xac23cd90  sw          $v1, -0x3270($at)
    ctx->pc = 0x132738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954384), GPR_U32(ctx, 3));
    // 0x13273c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13273cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132744: 0x3e00008  jr          $ra
    ctx->pc = 0x132744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132744u;
        // 0x132748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13274Cu;
}
