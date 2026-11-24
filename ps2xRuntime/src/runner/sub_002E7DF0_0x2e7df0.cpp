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

// Function: sub_002E7DF0
// Address: 0x2e7df0 - 0x2e8084
void sub_002E7DF0_0x2e7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7DF0_0x2e7df0");
#endif

    switch (ctx->pc) {
        case 0x2e7e6cu: goto label_2e7e6c;
        case 0x2e7f30u: goto label_2e7f30;
        case 0x2e7fa0u: goto label_2e7fa0;
        case 0x2e7ff0u: goto label_2e7ff0;
        case 0x2e8028u: goto label_2e8028;
        case 0x2e8048u: goto label_2e8048;
        case 0x2e8070u: goto label_2e8070;
        default: break;
    }

    ctx->pc = 0x2e7df0u;

    // 0x2e7df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e7df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7e00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e7e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7e04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e7e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e7e08: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x2E7E08u;
    {
        const bool branch_taken_0x2e7e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E08u;
        // 0x2e7e0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e08) {
            ctx->pc = 0x2E8070u;
            goto label_2e8070;
        }
    }
    ctx->pc = 0x2E7E10u;
    // 0x2e7e10: 0x82240150  lb          $a0, 0x150($s1)
    ctx->pc = 0x2e7e10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2e7e14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7e18: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E7E18u;
    {
        const bool branch_taken_0x2e7e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E18u;
        // 0x2e7e1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e18) {
            ctx->pc = 0x2E7E90u;
            goto label_2e7e90;
        }
    }
    ctx->pc = 0x2E7E20u;
    // 0x2e7e20: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E7E20u;
    {
        const bool branch_taken_0x2e7e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e7e20) {
            ctx->pc = 0x2E7E60u;
            goto label_2e7e60;
        }
    }
    ctx->pc = 0x2E7E28u;
    // 0x2e7e28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7E28u;
    {
        const bool branch_taken_0x2e7e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e28) {
            ctx->pc = 0x2E7E38u;
            goto label_2e7e38;
        }
    }
    ctx->pc = 0x2E7E30u;
    // 0x2e7e30: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E7E30u;
    {
        const bool branch_taken_0x2e7e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e30) {
            ctx->pc = 0x2E7EA8u;
            goto label_2e7ea8;
        }
    }
    ctx->pc = 0x2E7E38u;
label_2e7e38:
    // 0x2e7e38: 0x8622015a  lh          $v0, 0x15A($s1)
    ctx->pc = 0x2e7e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x2e7e3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2e7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e7e40: 0xa622015a  sh          $v0, 0x15A($s1)
    ctx->pc = 0x2e7e40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7e44: 0x8622015a  lh          $v0, 0x15A($s1)
    ctx->pc = 0x2e7e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x2e7e48: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x2e7e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e7e4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7E4Cu;
    {
        const bool branch_taken_0x2e7e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E4Cu;
        // 0x2e7e50: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e4c) {
            ctx->pc = 0x2E7E60u;
            goto label_2e7e60;
        }
    }
    ctx->pc = 0x2E7E54u;
    // 0x2e7e54: 0xa622015a  sh          $v0, 0x15A($s1)
    ctx->pc = 0x2e7e54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7e58: 0xa2230150  sb          $v1, 0x150($s1)
    ctx->pc = 0x2e7e58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 336), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7e5c: 0x0  nop
    ctx->pc = 0x2e7e5cu;
    // NOP
label_2e7e60:
    // 0x2e7e60: 0x96300152  lhu         $s0, 0x152($s1)
    ctx->pc = 0x2e7e60u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 338)));
    // 0x2e7e64: 0xc0ba2d4  jal         func_2E8B50
    ctx->pc = 0x2E7E64u;
    SET_GPR_U32(ctx, 31, 0x2E7E6Cu);
    ctx->pc = 0x2E7E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E64u;
    // 0x2e7e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8B50u, 0x2E7E64u, 0x2E7E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E6Cu;
label_2e7e6c:
    // 0x2e7e6c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E7E6Cu;
    {
        const bool branch_taken_0x2e7e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E6Cu;
        // 0x2e7e70: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e6c) {
            ctx->pc = 0x2E7EC8u;
            goto label_2e7ec8;
        }
    }
    ctx->pc = 0x2E7E74u;
    // 0x2e7e74: 0xa2230150  sb          $v1, 0x150($s1)
    ctx->pc = 0x2e7e74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 336), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7e78: 0xa6200160  sh          $zero, 0x160($s1)
    ctx->pc = 0x2e7e78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e7e7c: 0x96230152  lhu         $v1, 0x152($s1)
    ctx->pc = 0x2e7e7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 338)));
    // 0x2e7e80: 0xa6230154  sh          $v1, 0x154($s1)
    ctx->pc = 0x2e7e80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 340), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7e84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7E84u;
    {
        const bool branch_taken_0x2e7e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E84u;
        // 0x2e7e88: 0xa6200152  sh          $zero, 0x152($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 338), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e84) {
            ctx->pc = 0x2E7EC8u;
            goto label_2e7ec8;
        }
    }
    ctx->pc = 0x2E7E8Cu;
    // 0x2e7e8c: 0x0  nop
    ctx->pc = 0x2e7e8cu;
    // NOP
label_2e7e90:
    // 0x2e7e90: 0x8223015e  lb          $v1, 0x15E($s1)
    ctx->pc = 0x2e7e90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x2e7e94: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2e7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2e7e98: 0xa223015e  sb          $v1, 0x15E($s1)
    ctx->pc = 0x2e7e98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 350), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e7e9c: 0x8223015e  lb          $v1, 0x15E($s1)
    ctx->pc = 0x2e7e9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x2e7ea0: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7EA0u;
    {
        const bool branch_taken_0x2e7ea0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2E7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EA0u;
        // 0x2e7ea4: 0x96300154  lhu         $s0, 0x154($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ea0) {
            ctx->pc = 0x2E7EC8u;
            goto label_2e7ec8;
        }
    }
    ctx->pc = 0x2E7EA8u;
label_2e7ea8:
    // 0x2e7ea8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e7ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e7eac: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2e7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e7eb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e7eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e7eb4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2e7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2e7eb8: 0xa2200150  sb          $zero, 0x150($s1)
    ctx->pc = 0x2e7eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7ebc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2E7EBCu;
    {
        const bool branch_taken_0x2e7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EBCu;
        // 0x2e7ec0: 0xa2200151  sb          $zero, 0x151($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 337), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ebc) {
            ctx->pc = 0x2E8070u;
            goto label_2e8070;
        }
    }
    ctx->pc = 0x2E7EC4u;
    // 0x2e7ec4: 0x0  nop
    ctx->pc = 0x2e7ec4u;
    // NOP
label_2e7ec8:
    // 0x2e7ec8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e7ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e7ecc: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2e7eccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e7ed0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2e7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2e7ed4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e7ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e7ed8: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2E7ED8u;
    {
        const bool branch_taken_0x2e7ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7ED8u;
        // 0x2e7edc: 0x2e010064  sltiu       $at, $s0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ed8) {
            ctx->pc = 0x2E8070u;
            goto label_2e8070;
        }
    }
    ctx->pc = 0x2E7EE0u;
    // 0x2e7ee0: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E7EE0u;
    {
        const bool branch_taken_0x2e7ee0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EE0u;
        // 0x2e7ee4: 0x3c0251eb  lui         $v0, 0x51EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ee0) {
            ctx->pc = 0x2E7F30u;
            goto label_2e7f30;
        }
    }
    ctx->pc = 0x2E7EE8u;
    // 0x2e7ee8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2e7ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e7eec: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2e7eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2e7ef0: 0x8626015a  lh          $a2, 0x15A($s1)
    ctx->pc = 0x2e7ef0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x2e7ef4: 0x500019  multu       $v0, $s0
    ctx->pc = 0x2e7ef4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e7ef8: 0x8229015e  lb          $t1, 0x15E($s1)
    ctx->pc = 0x2e7ef8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x2e7efc: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e7efcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e7f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f04: 0x8622015c  lh          $v0, 0x15C($s1)
    ctx->pc = 0x2e7f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x2e7f08: 0x2810  mfhi        $a1
    ctx->pc = 0x2e7f08u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2e7f0c: 0x52942  srl         $a1, $a1, 5
    ctx->pc = 0x2e7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x2e7f10: 0x2442ffdc  addiu       $v0, $v0, -0x24
    ctx->pc = 0x2e7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x2e7f14: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2e7f14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e7f18: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2e7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e7f1c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2e7f1cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2e7f20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e7f24: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e7f28: 0xc0ba1fc  jal         func_2E87F0
    ctx->pc = 0x2E7F28u;
    SET_GPR_U32(ctx, 31, 0x2E7F30u);
    ctx->pc = 0x2E7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F28u;
    // 0x2e7f2c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87F0u, 0x2E7F28u, 0x2E7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7F30u;
label_2e7f30:
    // 0x2e7f30: 0x2e01000a  sltiu       $at, $s0, 0xA
    ctx->pc = 0x2e7f30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e7f34: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E7F34u;
    {
        const bool branch_taken_0x2e7f34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F34u;
        // 0x2e7f38: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7f34) {
            ctx->pc = 0x2E7FA0u;
            goto label_2e7fa0;
        }
    }
    ctx->pc = 0x2E7F3Cu;
    // 0x2e7f3c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2e7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2e7f40: 0x203001b  divu        $zero, $s0, $v1
    ctx->pc = 0x2e7f40u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2e7f44: 0x344acccd  ori         $t2, $v0, 0xCCCD
    ctx->pc = 0x2e7f44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e7f48: 0x8622015c  lh          $v0, 0x15C($s1)
    ctx->pc = 0x2e7f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x2e7f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f50: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2e7f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e7f54: 0x8229015e  lb          $t1, 0x15E($s1)
    ctx->pc = 0x2e7f54u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x2e7f58: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e7f58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e7f5c: 0x2442ffdc  addiu       $v0, $v0, -0x24
    ctx->pc = 0x2e7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x2e7f60: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2e7f60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e7f64: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2e7f64u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2e7f68: 0x1010  mfhi        $v0
    ctx->pc = 0x2e7f68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e7f6c: 0x8623015a  lh          $v1, 0x15A($s1)
    ctx->pc = 0x2e7f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x2e7f70: 0x1420019  multu       $t2, $v0
    ctx->pc = 0x2e7f70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 10) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e7f74: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2e7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2e7f78: 0x0  nop
    ctx->pc = 0x2e7f78u;
    // NOP
    // 0x2e7f7c: 0x1010  mfhi        $v0
    ctx->pc = 0x2e7f7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e7f80: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2e7f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e7f84: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2e7f84u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2e7f88: 0x218c2  srl         $v1, $v0, 3
    ctx->pc = 0x2e7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2e7f8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e7f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7f94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e7f98: 0xc0ba1fc  jal         func_2E87F0
    ctx->pc = 0x2E7F98u;
    SET_GPR_U32(ctx, 31, 0x2E7FA0u);
    ctx->pc = 0x2E7F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7F98u;
    // 0x2e7f9c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87F0u, 0x2E7F98u, 0x2E7FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7FA0u;
label_2e7fa0:
    // 0x2e7fa0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e7fa4: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x2e7fa4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2e7fa8: 0x8623015a  lh          $v1, 0x15A($s1)
    ctx->pc = 0x2e7fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x2e7fac: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2e7facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e7fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7fb4: 0x8229015e  lb          $t1, 0x15E($s1)
    ctx->pc = 0x2e7fb4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x2e7fb8: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e7fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e7fbc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2e7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2e7fc0: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2e7fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e7fc4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2e7fc4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2e7fc8: 0x8622015c  lh          $v0, 0x15C($s1)
    ctx->pc = 0x2e7fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x2e7fcc: 0x1810  mfhi        $v1
    ctx->pc = 0x2e7fccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e7fd0: 0x2442ffdc  addiu       $v0, $v0, -0x24
    ctx->pc = 0x2e7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x2e7fd4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2e7fd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e7fd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e7fdc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2e7fdcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2e7fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7fe4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e7fe8: 0xc0ba1fc  jal         func_2E87F0
    ctx->pc = 0x2E7FE8u;
    SET_GPR_U32(ctx, 31, 0x2E7FF0u);
    ctx->pc = 0x2E7FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7FE8u;
    // 0x2e7fec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87F0u, 0x2E7FE8u, 0x2E7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7FF0u;
label_2e7ff0:
    // 0x2e7ff0: 0x8623015a  lh          $v1, 0x15A($s1)
    ctx->pc = 0x2e7ff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x2e7ff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ff8: 0x8622015c  lh          $v0, 0x15C($s1)
    ctx->pc = 0x2e7ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x2e7ffc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2e7ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e8000: 0x8229015e  lb          $t1, 0x15E($s1)
    ctx->pc = 0x2e8000u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x2e8004: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e8004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e8008: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x2e8008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x2e800c: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x2e800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x2e8010: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2e8010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e8014: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2e8014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e8018: 0x24a5008c  addiu       $a1, $a1, 0x8C
    ctx->pc = 0x2e8018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 140));
    // 0x2e801c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2e801cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2e8020: 0xc0ba1fc  jal         func_2E87F0
    ctx->pc = 0x2E8020u;
    SET_GPR_U32(ctx, 31, 0x2E8028u);
    ctx->pc = 0x2E8024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8020u;
    // 0x2e8024: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87F0u, 0x2E8020u, 0x2E8028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8028u;
label_2e8028:
    // 0x2e8028: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e8028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e802c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8030: 0x8229015e  lb          $t1, 0x15E($s1)
    ctx->pc = 0x2e8030u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x2e8034: 0x8626015a  lh          $a2, 0x15A($s1)
    ctx->pc = 0x2e8034u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x2e8038: 0x8627015c  lh          $a3, 0x15C($s1)
    ctx->pc = 0x2e8038u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x2e803c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e803cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e8040: 0xc0ba1fc  jal         func_2E87F0
    ctx->pc = 0x2E8040u;
    SET_GPR_U32(ctx, 31, 0x2E8048u);
    ctx->pc = 0x2E8044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8040u;
    // 0x2e8044: 0x24450082  addiu       $a1, $v0, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87F0u, 0x2E8040u, 0x2E8048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8048u;
label_2e8048:
    // 0x2e8048: 0x86230160  lh          $v1, 0x160($s1)
    ctx->pc = 0x2e8048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x2e804c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E804Cu;
    {
        const bool branch_taken_0x2e804c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2e804c) {
            ctx->pc = 0x2E8070u;
            goto label_2e8070;
        }
    }
    ctx->pc = 0x2E8054u;
    // 0x2e8054: 0x82230150  lb          $v1, 0x150($s1)
    ctx->pc = 0x2e8054u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2e8058: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2e8058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e805c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E805Cu;
    {
        const bool branch_taken_0x2e805c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e805c) {
            ctx->pc = 0x2E8070u;
            goto label_2e8070;
        }
    }
    ctx->pc = 0x2E8064u;
    // 0x2e8064: 0x8225015e  lb          $a1, 0x15E($s1)
    ctx->pc = 0x2e8064u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 350)));
    // 0x2e8068: 0xc0ba1e0  jal         func_2E8780
    ctx->pc = 0x2E8068u;
    SET_GPR_U32(ctx, 31, 0x2E8070u);
    ctx->pc = 0x2E806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8068u;
    // 0x2e806c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8780u, 0x2E8068u, 0x2E8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8070u;
label_2e8070:
    // 0x2e8070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e807c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E807Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E807Cu;
        // 0x2e8080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E807Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8084u;
}
