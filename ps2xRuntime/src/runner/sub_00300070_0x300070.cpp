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

// Function: sub_00300070
// Address: 0x300070 - 0x3002b0
void sub_00300070_0x300070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300070_0x300070");
#endif

    switch (ctx->pc) {
        case 0x3000a8u: goto label_3000a8;
        case 0x3000c4u: goto label_3000c4;
        case 0x3000d8u: goto label_3000d8;
        case 0x300118u: goto label_300118;
        case 0x300128u: goto label_300128;
        case 0x3001f4u: goto label_3001f4;
        case 0x3002a0u: goto label_3002a0;
        default: break;
    }

    ctx->pc = 0x300070u;

    // 0x300070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x300070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x300074: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x300074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x300078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30007c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30007cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x300080: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x300080u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x300084: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x300084u;
    {
        const bool branch_taken_0x300084 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x300088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300084u;
        // 0x300088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300084) {
            ctx->pc = 0x300108u;
            goto label_300108;
        }
    }
    ctx->pc = 0x30008Cu;
    // 0x30008c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30008cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300090: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x300090u;
    {
        const bool branch_taken_0x300090 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x300090) {
            ctx->pc = 0x3000E8u;
            goto label_3000e8;
        }
    }
    ctx->pc = 0x300098u;
    // 0x300098: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x300098u;
    {
        const bool branch_taken_0x300098 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x300098) {
            ctx->pc = 0x3000A8u;
            goto label_3000a8;
        }
    }
    ctx->pc = 0x3000A0u;
    // 0x3000a0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x3000A0u;
    {
        const bool branch_taken_0x3000a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3000a0) {
            ctx->pc = 0x3002A0u;
            goto label_3002a0;
        }
    }
    ctx->pc = 0x3000A8u;
label_3000a8:
    // 0x3000a8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3000A8u;
    {
        const bool branch_taken_0x3000a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3000a8) {
            ctx->pc = 0x3000D0u;
            goto label_3000d0;
        }
    }
    ctx->pc = 0x3000B0u;
    // 0x3000b0: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x3000b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x3000b4: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3000b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3000b8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3000b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3000bc: 0xc0aad40  jal         func_2AB500
    ctx->pc = 0x3000BCu;
    SET_GPR_U32(ctx, 31, 0x3000C4u);
    ctx->pc = 0x3000C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3000BCu;
    // 0x3000c0: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB500u, 0x3000BCu, 0x3000C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3000C4u;
label_3000c4:
    // 0x3000c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3000C4u;
    {
        const bool branch_taken_0x3000c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000C4u;
        // 0x3000c8: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000c4) {
            ctx->pc = 0x3000D8u;
            goto label_3000d8;
        }
    }
    ctx->pc = 0x3000CCu;
    // 0x3000cc: 0x0  nop
    ctx->pc = 0x3000ccu;
    // NOP
label_3000d0:
    // 0x3000d0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3000D0u;
    SET_GPR_U32(ctx, 31, 0x3000D8u);
    ctx->pc = 0x3000D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3000D0u;
    // 0x3000d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3000D0u, 0x3000D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3000D8u;
label_3000d8:
    // 0x3000d8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3000d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3000dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3000dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3000e0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3000E0u;
    {
        const bool branch_taken_0x3000e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000E0u;
        // 0x3000e4: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000e0) {
            ctx->pc = 0x3002A0u;
            goto label_3002a0;
        }
    }
    ctx->pc = 0x3000E8u;
label_3000e8:
    // 0x3000e8: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3000e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3000ec: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3000ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3000f0: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3000f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3000f4: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3000f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3000f8: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3000f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3000fc: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3000fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x300100: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x300100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x300104: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x300104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_300108:
    // 0x300108: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x300108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x30010c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30010cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300110: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x300110u;
    SET_GPR_U32(ctx, 31, 0x300118u);
    ctx->pc = 0x300114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300110u;
    // 0x300114: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x300110u, 0x300118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300118u;
label_300118:
    // 0x300118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300118u;
    {
        const bool branch_taken_0x300118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300118u;
        // 0x30011c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300118) {
            ctx->pc = 0x300128u;
            goto label_300128;
        }
    }
    ctx->pc = 0x300120u;
    // 0x300120: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300120u;
    SET_GPR_U32(ctx, 31, 0x300128u);
    ctx->pc = 0x300124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300120u;
    // 0x300124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300120u, 0x300128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300128u;
label_300128:
    // 0x300128: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x300128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30012c: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x30012cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x300130: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300130u;
    {
        const bool branch_taken_0x300130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300130u;
        // 0x300134: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300130) {
            ctx->pc = 0x300140u;
            goto label_300140;
        }
    }
    ctx->pc = 0x300138u;
    // 0x300138: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x300138u;
    {
        const bool branch_taken_0x300138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300138u;
        // 0x30013c: 0xa2030558  sb          $v1, 0x558($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300138) {
            ctx->pc = 0x300188u;
            goto label_300188;
        }
    }
    ctx->pc = 0x300140u;
label_300140:
    // 0x300140: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x300140u;
    {
        const bool branch_taken_0x300140 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x300144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300140u;
        // 0x300144: 0x30830007  andi        $v1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300140) {
            ctx->pc = 0x300154u;
            goto label_300154;
        }
    }
    ctx->pc = 0x300148u;
    // 0x300148: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x300148u;
    {
        const bool branch_taken_0x300148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300148) {
            ctx->pc = 0x300154u;
            goto label_300154;
        }
    }
    ctx->pc = 0x300150u;
    // 0x300150: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x300150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_300154:
    // 0x300154: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x300154u;
    {
        const bool branch_taken_0x300154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300154) {
            ctx->pc = 0x300188u;
            goto label_300188;
        }
    }
    ctx->pc = 0x30015Cu;
    // 0x30015c: 0x92050558  lbu         $a1, 0x558($s0)
    ctx->pc = 0x30015cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x300160: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x300160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x300164: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x300164u;
    {
        const bool branch_taken_0x300164 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x300168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300164u;
        // 0x300168: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300164) {
            ctx->pc = 0x300178u;
            goto label_300178;
        }
    }
    ctx->pc = 0x30016Cu;
    // 0x30016c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30016Cu;
    {
        const bool branch_taken_0x30016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30016Cu;
        // 0x300170: 0xa2030558  sb          $v1, 0x558($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30016c) {
            ctx->pc = 0x300188u;
            goto label_300188;
        }
    }
    ctx->pc = 0x300174u;
    // 0x300174: 0x0  nop
    ctx->pc = 0x300174u;
    // NOP
label_300178:
    // 0x300178: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x300178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x30017c: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30017Cu;
    {
        const bool branch_taken_0x30017c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x30017c) {
            ctx->pc = 0x300188u;
            goto label_300188;
        }
    }
    ctx->pc = 0x300184u;
    // 0x300184: 0xa2040558  sb          $a0, 0x558($s0)
    ctx->pc = 0x300184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 4));
label_300188:
    // 0x300188: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x300188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x30018c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30018Cu;
    {
        const bool branch_taken_0x30018c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x300190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30018Cu;
        // 0x300190: 0x28610065  slti        $at, $v1, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30018c) {
            ctx->pc = 0x3001F8u;
            goto label_3001f8;
        }
    }
    ctx->pc = 0x300194u;
    // 0x300194: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x300194u;
    {
        const bool branch_taken_0x300194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x300194) {
            ctx->pc = 0x3001F8u;
            goto label_3001f8;
        }
    }
    ctx->pc = 0x30019Cu;
    // 0x30019c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30019cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3001a0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3001a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3001a4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3001a4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3001a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3001a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3001acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3001b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3001b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001b4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3001b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3001b8: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x3001b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x3001bc: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3001bcu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3001c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3001c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3001c4: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3001c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3001c8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3001c8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3001cc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3001ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3001d0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3001d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3001d4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3001d4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3001d8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3001d8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3001dc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3001dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3001e0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3001e0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3001e4: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3001e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3001e8: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3001e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3001ec: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3001ECu;
    SET_GPR_U32(ctx, 31, 0x3001F4u);
    ctx->pc = 0x3001F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3001ECu;
    // 0x3001f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3001ECu, 0x3001F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001F4u;
label_3001f4:
    // 0x3001f4: 0x0  nop
    ctx->pc = 0x3001f4u;
    // NOP
label_3001f8:
    // 0x3001f8: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3001f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3001fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3001FCu;
    {
        const bool branch_taken_0x3001fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001FCu;
        // 0x300200: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3001fc) {
            ctx->pc = 0x300210u;
            goto label_300210;
        }
    }
    ctx->pc = 0x300204u;
    // 0x300204: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x300204u;
    {
        const bool branch_taken_0x300204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300204) {
            ctx->pc = 0x300290u;
            goto label_300290;
        }
    }
    ctx->pc = 0x30020Cu;
    // 0x30020c: 0x0  nop
    ctx->pc = 0x30020cu;
    // NOP
label_300210:
    // 0x300210: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x300210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300214: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x300214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x300218: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x300218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30021c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x30021cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300220: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x300220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x300224: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x300224u;
    {
        const bool branch_taken_0x300224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x300224) {
            ctx->pc = 0x300260u;
            goto label_300260;
        }
    }
    ctx->pc = 0x30022Cu;
    // 0x30022c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x30022cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300230: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x300230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x300234: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x300234u;
    {
        const bool branch_taken_0x300234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300234u;
        // 0x300238: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300234) {
            ctx->pc = 0x300288u;
            goto label_300288;
        }
    }
    ctx->pc = 0x30023Cu;
    // 0x30023c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300240: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x300240u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x300244: 0x0  nop
    ctx->pc = 0x300244u;
    // NOP
    // 0x300248: 0x0  nop
    ctx->pc = 0x300248u;
    // NOP
    // 0x30024c: 0x2010  mfhi        $a0
    ctx->pc = 0x30024cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x300250: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x300250u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300254: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x300254u;
    {
        const bool branch_taken_0x300254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300254u;
        // 0x300258: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300254) {
            ctx->pc = 0x300288u;
            goto label_300288;
        }
    }
    ctx->pc = 0x30025Cu;
    // 0x30025c: 0x0  nop
    ctx->pc = 0x30025cu;
    // NOP
label_300260:
    // 0x300260: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x300260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x300264: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x300264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x300268: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x300268u;
    {
        const bool branch_taken_0x300268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300268) {
            ctx->pc = 0x300288u;
            goto label_300288;
        }
    }
    ctx->pc = 0x300270u;
    // 0x300270: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x300270u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300278: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x300278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x30027c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30027Cu;
    {
        const bool branch_taken_0x30027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30027Cu;
        // 0x300280: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30027c) {
            ctx->pc = 0x300290u;
            goto label_300290;
        }
    }
    ctx->pc = 0x300284u;
    // 0x300284: 0x0  nop
    ctx->pc = 0x300284u;
    // NOP
label_300288:
    // 0x300288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30028c: 0x0  nop
    ctx->pc = 0x30028cu;
    // NOP
label_300290:
    // 0x300290: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300290u;
    {
        const bool branch_taken_0x300290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300290u;
        // 0x300294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300290) {
            ctx->pc = 0x3002A0u;
            goto label_3002a0;
        }
    }
    ctx->pc = 0x300298u;
    // 0x300298: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300298u;
    SET_GPR_U32(ctx, 31, 0x3002A0u);
    ctx->pc = 0x30029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300298u;
    // 0x30029c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300298u, 0x3002A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3002A0u;
label_3002a0:
    // 0x3002a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3002a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3002a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3002a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3002a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3002A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3002ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002A8u;
        // 0x3002ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3002A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3002B0u;
}
