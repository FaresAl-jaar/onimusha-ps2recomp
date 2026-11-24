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

// Function: sub_003DF090
// Address: 0x3df090 - 0x3df21c
void sub_003DF090_0x3df090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF090_0x3df090");
#endif

    switch (ctx->pc) {
        case 0x3df090u: goto label_3df090;
        case 0x3df094u: goto label_3df094;
        case 0x3df098u: goto label_3df098;
        case 0x3df09cu: goto label_3df09c;
        case 0x3df0a0u: goto label_3df0a0;
        case 0x3df0a4u: goto label_3df0a4;
        case 0x3df0a8u: goto label_3df0a8;
        case 0x3df0acu: goto label_3df0ac;
        case 0x3df0b0u: goto label_3df0b0;
        case 0x3df0b4u: goto label_3df0b4;
        case 0x3df0b8u: goto label_3df0b8;
        case 0x3df0bcu: goto label_3df0bc;
        case 0x3df0c0u: goto label_3df0c0;
        case 0x3df0c4u: goto label_3df0c4;
        case 0x3df0c8u: goto label_3df0c8;
        case 0x3df0ccu: goto label_3df0cc;
        case 0x3df0d0u: goto label_3df0d0;
        case 0x3df0d4u: goto label_3df0d4;
        case 0x3df0d8u: goto label_3df0d8;
        case 0x3df0dcu: goto label_3df0dc;
        case 0x3df0e0u: goto label_3df0e0;
        case 0x3df0e4u: goto label_3df0e4;
        case 0x3df0e8u: goto label_3df0e8;
        case 0x3df0ecu: goto label_3df0ec;
        case 0x3df0f0u: goto label_3df0f0;
        case 0x3df0f4u: goto label_3df0f4;
        case 0x3df0f8u: goto label_3df0f8;
        case 0x3df0fcu: goto label_3df0fc;
        case 0x3df100u: goto label_3df100;
        case 0x3df104u: goto label_3df104;
        case 0x3df108u: goto label_3df108;
        case 0x3df10cu: goto label_3df10c;
        case 0x3df110u: goto label_3df110;
        case 0x3df114u: goto label_3df114;
        case 0x3df118u: goto label_3df118;
        case 0x3df11cu: goto label_3df11c;
        case 0x3df120u: goto label_3df120;
        case 0x3df124u: goto label_3df124;
        case 0x3df128u: goto label_3df128;
        case 0x3df12cu: goto label_3df12c;
        case 0x3df130u: goto label_3df130;
        case 0x3df134u: goto label_3df134;
        case 0x3df138u: goto label_3df138;
        case 0x3df13cu: goto label_3df13c;
        case 0x3df140u: goto label_3df140;
        case 0x3df144u: goto label_3df144;
        case 0x3df148u: goto label_3df148;
        case 0x3df14cu: goto label_3df14c;
        case 0x3df150u: goto label_3df150;
        case 0x3df154u: goto label_3df154;
        case 0x3df158u: goto label_3df158;
        case 0x3df15cu: goto label_3df15c;
        case 0x3df160u: goto label_3df160;
        case 0x3df164u: goto label_3df164;
        case 0x3df168u: goto label_3df168;
        case 0x3df16cu: goto label_3df16c;
        case 0x3df170u: goto label_3df170;
        case 0x3df174u: goto label_3df174;
        case 0x3df178u: goto label_3df178;
        case 0x3df17cu: goto label_3df17c;
        case 0x3df180u: goto label_3df180;
        case 0x3df184u: goto label_3df184;
        case 0x3df188u: goto label_3df188;
        case 0x3df18cu: goto label_3df18c;
        case 0x3df190u: goto label_3df190;
        case 0x3df194u: goto label_3df194;
        case 0x3df198u: goto label_3df198;
        case 0x3df19cu: goto label_3df19c;
        case 0x3df1a0u: goto label_3df1a0;
        case 0x3df1a4u: goto label_3df1a4;
        case 0x3df1a8u: goto label_3df1a8;
        case 0x3df1acu: goto label_3df1ac;
        case 0x3df1b0u: goto label_3df1b0;
        case 0x3df1b4u: goto label_3df1b4;
        case 0x3df1b8u: goto label_3df1b8;
        case 0x3df1bcu: goto label_3df1bc;
        case 0x3df1c0u: goto label_3df1c0;
        case 0x3df1c4u: goto label_3df1c4;
        case 0x3df1c8u: goto label_3df1c8;
        case 0x3df1ccu: goto label_3df1cc;
        case 0x3df1d0u: goto label_3df1d0;
        case 0x3df1d4u: goto label_3df1d4;
        case 0x3df1d8u: goto label_3df1d8;
        case 0x3df1dcu: goto label_3df1dc;
        case 0x3df1e0u: goto label_3df1e0;
        case 0x3df1e4u: goto label_3df1e4;
        case 0x3df1e8u: goto label_3df1e8;
        case 0x3df1ecu: goto label_3df1ec;
        case 0x3df1f0u: goto label_3df1f0;
        case 0x3df1f4u: goto label_3df1f4;
        case 0x3df1f8u: goto label_3df1f8;
        case 0x3df1fcu: goto label_3df1fc;
        case 0x3df200u: goto label_3df200;
        case 0x3df204u: goto label_3df204;
        case 0x3df208u: goto label_3df208;
        case 0x3df20cu: goto label_3df20c;
        case 0x3df210u: goto label_3df210;
        case 0x3df214u: goto label_3df214;
        case 0x3df218u: goto label_3df218;
        default: break;
    }

    ctx->pc = 0x3df090u;

label_3df090:
    // 0x3df090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3df090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3df094:
    // 0x3df094: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3df094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3df098:
    // 0x3df098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3df098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3df09c:
    // 0x3df09c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3df09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3df0a0:
    // 0x3df0a0: 0xc097f7c  jal         func_25FDF0
label_3df0a4:
    if (ctx->pc == 0x3DF0A4u) {
        ctx->pc = 0x3DF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF0A0u;
        // 0x3df0a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF0A8u;
        goto label_3df0a8;
    }
    ctx->pc = 0x3DF0A0u;
    SET_GPR_U32(ctx, 31, 0x3DF0A8u);
    ctx->pc = 0x3DF0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0A0u;
    // 0x3df0a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDF0u, 0x3DF0A0u, 0x3DF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0A8u;
label_3df0a8:
    // 0x3df0a8: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x3df0a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_3df0ac:
    // 0x3df0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3df0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df0b0:
    // 0x3df0b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3df0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3df0b4:
    // 0x3df0b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3df0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3df0b8:
    // 0x3df0b8: 0x34420046  ori         $v0, $v0, 0x46
    ctx->pc = 0x3df0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
label_3df0bc:
    // 0x3df0bc: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x3df0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
label_3df0c0:
    // 0x3df0c0: 0xae0028d0  sw          $zero, 0x28D0($s0)
    ctx->pc = 0x3df0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10448), GPR_U32(ctx, 0));
label_3df0c4:
    // 0x3df0c4: 0xae0028d4  sw          $zero, 0x28D4($s0)
    ctx->pc = 0x3df0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10452), GPR_U32(ctx, 0));
label_3df0c8:
    // 0x3df0c8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3df0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3df0cc:
    // 0x3df0cc: 0xc060a74  jal         func_1829D0
label_3df0d0:
    if (ctx->pc == 0x3DF0D0u) {
        ctx->pc = 0x3DF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF0CCu;
        // 0x3df0d0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF0D4u;
        goto label_3df0d4;
    }
    ctx->pc = 0x3DF0CCu;
    SET_GPR_U32(ctx, 31, 0x3DF0D4u);
    ctx->pc = 0x3DF0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0CCu;
    // 0x3df0d0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x3DF0CCu, 0x3DF0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0D4u;
label_3df0d4:
    // 0x3df0d4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3df0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3df0d8:
    // 0x3df0d8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3df0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_3df0dc:
    // 0x3df0dc: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x3df0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_3df0e0:
    // 0x3df0e0: 0xc060b00  jal         func_182C00
label_3df0e4:
    if (ctx->pc == 0x3DF0E4u) {
        ctx->pc = 0x3DF0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF0E0u;
        // 0x3df0e4: 0x3446fe01  ori         $a2, $v0, 0xFE01 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65025);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF0E8u;
        goto label_3df0e8;
    }
    ctx->pc = 0x3DF0E0u;
    SET_GPR_U32(ctx, 31, 0x3DF0E8u);
    ctx->pc = 0x3DF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0E0u;
    // 0x3df0e4: 0x3446fe01  ori         $a2, $v0, 0xFE01 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x182C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182C00u, 0x3DF0E0u, 0x3DF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0E8u;
label_3df0e8:
    // 0x3df0e8: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x3df0e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_3df0ec:
    // 0x3df0ec: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x3df0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_3df0f0:
    // 0x3df0f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3df0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3df0f4:
    // 0x3df0f4: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x3df0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3df0f8:
    // 0x3df0f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3df0f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df0fc:
    // 0x3df0fc: 0x240800fe  addiu       $t0, $zero, 0xFE
    ctx->pc = 0x3df0fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3df100:
    // 0x3df100: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x3df100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_3df104:
    // 0x3df104: 0xc050ed4  jal         func_143B50
label_3df108:
    if (ctx->pc == 0x3DF108u) {
        ctx->pc = 0x3DF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF104u;
        // 0x3df108: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF10Cu;
        goto label_3df10c;
    }
    ctx->pc = 0x3DF104u;
    SET_GPR_U32(ctx, 31, 0x3DF10Cu);
    ctx->pc = 0x3DF108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF104u;
    // 0x3df108: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x3DF104u, 0x3DF10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF10Cu;
label_3df10c:
    // 0x3df10c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_3df110:
    if (ctx->pc == 0x3DF110u) {
        ctx->pc = 0x3DF114u;
        goto label_3df114;
    }
    ctx->pc = 0x3DF10Cu;
    {
        const bool branch_taken_0x3df10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df10c) {
            ctx->pc = 0x3DF1E8u;
            goto label_3df1e8;
        }
    }
    ctx->pc = 0x3DF114u;
label_3df114:
    // 0x3df114: 0x920608e8  lbu         $a2, 0x8E8($s0)
    ctx->pc = 0x3df114u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_3df118:
    // 0x3df118: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x3df118u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_3df11c:
    // 0x3df11c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x3df11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3df120:
    // 0x3df120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3df120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df124:
    // 0x3df124: 0x24e7c910  addiu       $a3, $a3, -0x36F0
    ctx->pc = 0x3df124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953232));
label_3df128:
    // 0x3df128: 0xc0b2fa4  jal         func_2CBE90
label_3df12c:
    if (ctx->pc == 0x3DF12Cu) {
        ctx->pc = 0x3DF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF128u;
        // 0x3df12c: 0x24080510  addiu       $t0, $zero, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF130u;
        goto label_3df130;
    }
    ctx->pc = 0x3DF128u;
    SET_GPR_U32(ctx, 31, 0x3DF130u);
    ctx->pc = 0x3DF12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF128u;
    // 0x3df12c: 0x24080510  addiu       $t0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE90u, 0x3DF128u, 0x3DF130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF130u;
label_3df130:
    // 0x3df130: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3df130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df134:
    // 0x3df134: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_3df138:
    if (ctx->pc == 0x3DF138u) {
        ctx->pc = 0x3DF13Cu;
        goto label_3df13c;
    }
    ctx->pc = 0x3DF134u;
    {
        const bool branch_taken_0x3df134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df134) {
            ctx->pc = 0x3DF1E8u;
            goto label_3df1e8;
        }
    }
    ctx->pc = 0x3DF13Cu;
label_3df13c:
    // 0x3df13c: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x3df13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3df140:
    // 0x3df140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3df140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df144:
    // 0x3df144: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3df144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df148:
    // 0x3df148: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3df148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3df14c:
    // 0x3df14c: 0x320f809  jalr        $t9
label_3df150:
    if (ctx->pc == 0x3DF150u) {
        ctx->pc = 0x3DF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF14Cu;
        // 0x3df150: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF154u;
        goto label_3df154;
    }
    ctx->pc = 0x3DF14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DF154u);
        ctx->pc = 0x3DF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF14Cu;
        // 0x3df150: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF14Cu, 0x3DF154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF154u;
label_3df154:
    // 0x3df154: 0xae110860  sw          $s1, 0x860($s0)
    ctx->pc = 0x3df154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 17));
label_3df158:
    // 0x3df158: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3df158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df15c:
    // 0x3df15c: 0x8e08004c  lw          $t0, 0x4C($s0)
    ctx->pc = 0x3df15cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3df160:
    // 0x3df160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3df160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df164:
    // 0x3df164: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3df164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3df168:
    // 0x3df168: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x3df168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3df16c:
    // 0x3df16c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3df16cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3df170:
    // 0x3df170: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3df170u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df174:
    // 0x3df174: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x3df174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_3df178:
    // 0x3df178: 0x9106006a  lbu         $a2, 0x6A($t0)
    ctx->pc = 0x3df178u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
label_3df17c:
    // 0x3df17c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3df17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3df180:
    // 0x3df180: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x3df180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3df184:
    // 0x3df184: 0xc0603b4  jal         func_180ED0
label_3df188:
    if (ctx->pc == 0x3DF188u) {
        ctx->pc = 0x3DF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF184u;
        // 0x3df188: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF18Cu;
        goto label_3df18c;
    }
    ctx->pc = 0x3DF184u;
    SET_GPR_U32(ctx, 31, 0x3DF18Cu);
    ctx->pc = 0x3DF188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF184u;
    // 0x3df188: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180ED0u, 0x3DF184u, 0x3DF18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF18Cu;
label_3df18c:
    // 0x3df18c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x3df18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3df190:
    // 0x3df190: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3df190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df194:
    // 0x3df194: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x3df194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3df198:
    // 0x3df198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3df198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3df19c:
    // 0x3df19c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3df19cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3df1a0:
    // 0x3df1a0: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x3df1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3df1a4:
    // 0x3df1a4: 0xc0a84b4  jal         func_2A12D0
label_3df1a8:
    if (ctx->pc == 0x3DF1A8u) {
        ctx->pc = 0x3DF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1A4u;
        // 0x3df1a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1ACu;
        goto label_3df1ac;
    }
    ctx->pc = 0x3DF1A4u;
    SET_GPR_U32(ctx, 31, 0x3DF1ACu);
    ctx->pc = 0x3DF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF1A4u;
    // 0x3df1a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A12D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A12D0u, 0x3DF1A4u, 0x3DF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF1ACu;
label_3df1ac:
    // 0x3df1ac: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x3df1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3df1b0:
    // 0x3df1b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3df1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df1b4:
    // 0x3df1b4: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x3df1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3df1b8:
    // 0x3df1b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3df1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3df1bc:
    // 0x3df1bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3df1bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3df1c0:
    // 0x3df1c0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3df1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3df1c4:
    // 0x3df1c4: 0xc0a84b4  jal         func_2A12D0
label_3df1c8:
    if (ctx->pc == 0x3DF1C8u) {
        ctx->pc = 0x3DF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1C4u;
        // 0x3df1c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1CCu;
        goto label_3df1cc;
    }
    ctx->pc = 0x3DF1C4u;
    SET_GPR_U32(ctx, 31, 0x3DF1CCu);
    ctx->pc = 0x3DF1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF1C4u;
    // 0x3df1c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A12D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A12D0u, 0x3DF1C4u, 0x3DF1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF1CCu;
label_3df1cc:
    // 0x3df1cc: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x3df1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3df1d0:
    // 0x3df1d0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x3df1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_3df1d4:
    // 0x3df1d4: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x3df1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3df1d8:
    // 0x3df1d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3df1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3df1dc:
    // 0x3df1dc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3df1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3df1e0:
    // 0x3df1e0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3df1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3df1e4:
    // 0x3df1e4: 0x0  nop
    ctx->pc = 0x3df1e4u;
    // NOP
label_3df1e8:
    // 0x3df1e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3df1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3df1ec:
    // 0x3df1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3df1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df1f0:
    // 0x3df1f0: 0xc069000  jal         func_1A4000
label_3df1f4:
    if (ctx->pc == 0x3DF1F4u) {
        ctx->pc = 0x3DF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF1F0u;
        // 0x3df1f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1F8u;
        goto label_3df1f8;
    }
    ctx->pc = 0x3DF1F0u;
    SET_GPR_U32(ctx, 31, 0x3DF1F8u);
    ctx->pc = 0x3DF1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF1F0u;
    // 0x3df1f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4000u, 0x3DF1F0u, 0x3DF1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF1F8u;
label_3df1f8:
    // 0x3df1f8: 0xc068fe0  jal         func_1A3F80
label_3df1fc:
    if (ctx->pc == 0x3DF1FCu) {
        ctx->pc = 0x3DF200u;
        goto label_3df200;
    }
    ctx->pc = 0x3DF1F8u;
    SET_GPR_U32(ctx, 31, 0x3DF200u);
    ctx->pc = 0x1A3F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F80u, 0x3DF1F8u, 0x3DF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF200u;
label_3df200:
    // 0x3df200: 0xc069078  jal         func_1A41E0
label_3df204:
    if (ctx->pc == 0x3DF204u) {
        ctx->pc = 0x3DF208u;
        goto label_3df208;
    }
    ctx->pc = 0x3DF200u;
    SET_GPR_U32(ctx, 31, 0x3DF208u);
    ctx->pc = 0x1A41E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41E0u, 0x3DF200u, 0x3DF208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF208u;
label_3df208:
    // 0x3df208: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3df208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3df20c:
    // 0x3df20c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3df20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df210:
    // 0x3df210: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3df210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df214:
    // 0x3df214: 0x3e00008  jr          $ra
label_3df218:
    if (ctx->pc == 0x3DF218u) {
        ctx->pc = 0x3DF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF214u;
        // 0x3df218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF21Cu;
        goto label_fallthrough_0x3df214;
    }
    ctx->pc = 0x3DF214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF214u;
        // 0x3df218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3df214:
    ctx->pc = 0x3DF21Cu;
}
