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

// Function: sub_001FAE60
// Address: 0x1fae60 - 0x1fb030
void sub_001FAE60_0x1fae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAE60_0x1fae60");
#endif

    switch (ctx->pc) {
        case 0x1fae70u: goto label_1fae70;
        case 0x1fae98u: goto label_1fae98;
        default: break;
    }

    ctx->pc = 0x1fae60u;

    // 0x1fae60: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x1fae60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1fae64: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FAE64u;
    {
        const bool branch_taken_0x1fae64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae64) {
            ctx->pc = 0x1FAE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAE64u;
            // 0x1fae68: 0x63142  srl         $a2, $a2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAE90u;
            goto label_1fae90;
        }
    }
    ctx->pc = 0x1FAE6Cu;
    // 0x1fae6c: 0x0  nop
    ctx->pc = 0x1fae6cu;
    // NOP
label_1fae70:
    // 0x1fae70: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1fae70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fae74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fae78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fae78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fae7c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1fae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fae80: 0x0  nop
    ctx->pc = 0x1fae80u;
    // NOP
    // 0x1fae84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FAE84u;
    {
        const bool branch_taken_0x1fae84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE84u;
        // 0x1fae88: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae84) {
            ctx->pc = 0x1FAE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fae70;
        }
    }
    ctx->pc = 0x1FAE8Cu;
    // 0x1fae8c: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x1fae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
label_1fae90:
    // 0x1fae90: 0x10c00065  beqz        $a2, . + 4 + (0x65 << 2)
    ctx->pc = 0x1FAE90u;
    {
        const bool branch_taken_0x1fae90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae90) {
            ctx->pc = 0x1FB028u;
            goto label_1fb028;
        }
    }
    ctx->pc = 0x1FAE98u;
label_1fae98:
    // 0x1fae98: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1fae98u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fae9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faea0: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1faea0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faea4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faea8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1faea8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faeac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faeb0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1faeb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faeb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faeb8: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1faeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1faebc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1faebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1faec0: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x1faec0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1faec4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1faec4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faec8: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1faec8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1faecc: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1faeccu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faed0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faed4: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1faed4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faed8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faedc: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1faedcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faee0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faee4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1faee4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faee8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faeec: 0xa0880004  sb          $t0, 0x4($a0)
    ctx->pc = 0x1faeecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x1faef0: 0xa0870005  sb          $a3, 0x5($a0)
    ctx->pc = 0x1faef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x1faef4: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1faef4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faef8: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x1faef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1faefc: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1faefcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf04: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1faf04u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf0c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1faf0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf14: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1faf14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf1c: 0xa0880008  sb          $t0, 0x8($a0)
    ctx->pc = 0x1faf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x1faf20: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x1faf20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x1faf24: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x1faf24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faf28: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x1faf28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1faf2c: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1faf2cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf34: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1faf34u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf3c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1faf3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf44: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1faf44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf4c: 0xa088000c  sb          $t0, 0xC($a0)
    ctx->pc = 0x1faf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
    // 0x1faf50: 0xa087000d  sb          $a3, 0xD($a0)
    ctx->pc = 0x1faf50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x1faf54: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x1faf54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faf58: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x1faf58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1faf5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1faf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1faf60: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1faf60u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf68: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1faf68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf70: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1faf70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf78: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1faf78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf80: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1faf80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1faf84: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x1faf84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1faf88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1faf88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faf8c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1faf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1faf90: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1faf90u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faf98: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1faf98u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faf9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fafa0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1fafa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fafa4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fafa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fafa8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fafa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fafac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fafacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fafb0: 0xa0880004  sb          $t0, 0x4($a0)
    ctx->pc = 0x1fafb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x1fafb4: 0xa0870005  sb          $a3, 0x5($a0)
    ctx->pc = 0x1fafb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x1fafb8: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1fafb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fafbc: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x1fafbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fafc0: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1fafc0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fafc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fafc8: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1fafc8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fafcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fafccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fafd0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1fafd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fafd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fafd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fafd8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fafd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fafdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fafdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fafe0: 0xa0880008  sb          $t0, 0x8($a0)
    ctx->pc = 0x1fafe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x1fafe4: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x1fafe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x1fafe8: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x1fafe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fafec: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x1fafecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1faff0: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1faff0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faff4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1faff8: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1faff8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1faffc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1faffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fb000: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1fb000u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb004: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fb004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fb008: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fb008u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb00c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fb00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fb010: 0xa088000c  sb          $t0, 0xC($a0)
    ctx->pc = 0x1fb010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
    // 0x1fb014: 0xa087000d  sb          $a3, 0xD($a0)
    ctx->pc = 0x1fb014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x1fb018: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x1fb018u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb01c: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x1fb01cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb020: 0x14c0ff9d  bnez        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1FB020u;
    {
        const bool branch_taken_0x1fb020 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB020u;
        // 0x1fb024: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb020) {
            ctx->pc = 0x1FAE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fae98;
        }
    }
    ctx->pc = 0x1FB028u;
label_1fb028:
    // 0x1fb028: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB030u;
}
