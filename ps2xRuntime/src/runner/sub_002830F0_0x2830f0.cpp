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

// Function: sub_002830F0
// Address: 0x2830f0 - 0x283494
void sub_002830F0_0x2830f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002830F0_0x2830f0");
#endif

    switch (ctx->pc) {
        case 0x2832b8u: goto label_2832b8;
        case 0x283328u: goto label_283328;
        case 0x2833b4u: goto label_2833b4;
        default: break;
    }

    ctx->pc = 0x2830f0u;

    // 0x2830f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2830f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2830f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2830f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2830f8: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x2830f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2830fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2830fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283104: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283108: 0x878381a0  lh          $v1, -0x7E60($gp)
    ctx->pc = 0x283108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934944)));
    // 0x28310c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28310cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283110: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x283110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x283114: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x283114u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x283118: 0x878381a4  lh          $v1, -0x7E5C($gp)
    ctx->pc = 0x283118u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934948)));
    // 0x28311c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x28311cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x283120: 0x9084083b  lbu         $a0, 0x83B($a0)
    ctx->pc = 0x283120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2107)));
    // 0x283124: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283124u;
    {
        const bool branch_taken_0x283124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x283124) {
            ctx->pc = 0x283138u;
            goto label_283138;
        }
    }
    ctx->pc = 0x28312Cu;
    // 0x28312c: 0x9223083c  lbu         $v1, 0x83C($s1)
    ctx->pc = 0x28312cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2108)));
    // 0x283130: 0xa224083c  sb          $a0, 0x83C($s1)
    ctx->pc = 0x283130u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2108), (uint8_t)GPR_U32(ctx, 4));
    // 0x283134: 0xa223083b  sb          $v1, 0x83B($s1)
    ctx->pc = 0x283134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2107), (uint8_t)GPR_U32(ctx, 3));
label_283138:
    // 0x283138: 0x9223083b  lbu         $v1, 0x83B($s1)
    ctx->pc = 0x283138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2107)));
    // 0x28313c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28313Cu;
    {
        const bool branch_taken_0x28313c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28313c) {
            ctx->pc = 0x283150u;
            goto label_283150;
        }
    }
    ctx->pc = 0x283144u;
    // 0x283144: 0xa223083c  sb          $v1, 0x83C($s1)
    ctx->pc = 0x283144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2108), (uint8_t)GPR_U32(ctx, 3));
    // 0x283148: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x283148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28314c: 0xa223083b  sb          $v1, 0x83B($s1)
    ctx->pc = 0x28314cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2107), (uint8_t)GPR_U32(ctx, 3));
label_283150:
    // 0x283150: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x283150u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x283154: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x283154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x283158: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x283158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
    // 0x28315c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x28315cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x283160: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x283160u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x283164: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x283164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x283168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x283168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28316c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x28316cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283170: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x283170u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x283174: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x283174u;
    {
        const bool branch_taken_0x283174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x283174) {
            ctx->pc = 0x283190u;
            goto label_283190;
        }
    }
    ctx->pc = 0x28317Cu;
    // 0x28317c: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x28317cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x283180: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x283180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x283184: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x283184u;
    {
        const bool branch_taken_0x283184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283184u;
        // 0x283188: 0xae230148  sw          $v1, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283184) {
            ctx->pc = 0x2831A0u;
            goto label_2831a0;
        }
    }
    ctx->pc = 0x28318Cu;
    // 0x28318c: 0x0  nop
    ctx->pc = 0x28318cu;
    // NOP
label_283190:
    // 0x283190: 0x8e2406cc  lw          $a0, 0x6CC($s1)
    ctx->pc = 0x283190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
    // 0x283194: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x283194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x283198: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x283198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28319c: 0xae2306cc  sw          $v1, 0x6CC($s1)
    ctx->pc = 0x28319cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 3));
label_2831a0:
    // 0x2831a0: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x2831a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x2831a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2831a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2831a8: 0x10830077  beq         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2831A8u;
    {
        const bool branch_taken_0x2831a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2831ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831A8u;
        // 0x2831ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831a8) {
            ctx->pc = 0x283388u;
            goto label_283388;
        }
    }
    ctx->pc = 0x2831B0u;
    // 0x2831b0: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2831B0u;
    {
        const bool branch_taken_0x2831b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2831b0) {
            ctx->pc = 0x283228u;
            goto label_283228;
        }
    }
    ctx->pc = 0x2831B8u;
    // 0x2831b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2831B8u;
    {
        const bool branch_taken_0x2831b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2831b8) {
            ctx->pc = 0x2831C8u;
            goto label_2831c8;
        }
    }
    ctx->pc = 0x2831C0u;
    // 0x2831c0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2831C0u;
    {
        const bool branch_taken_0x2831c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2831c0) {
            ctx->pc = 0x283390u;
            goto label_283390;
        }
    }
    ctx->pc = 0x2831C8u;
label_2831c8:
    // 0x2831c8: 0x262307a0  addiu       $v1, $s1, 0x7A0
    ctx->pc = 0x2831c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    // 0x2831cc: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x2831ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x2831d0: 0x3005ffff  andi        $a1, $zero, 0xFFFF
    ctx->pc = 0x2831d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x2831d4: 0x9227083b  lbu         $a3, 0x83B($s1)
    ctx->pc = 0x2831d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2107)));
    // 0x2831d8: 0x3c068004  lui         $a2, 0x8004
    ctx->pc = 0x2831d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32772 << 16));
    // 0x2831dc: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2831dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2831e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2831e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2831e4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2831e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2831e8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2831e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2831ec: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x2831ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2831f0: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x2831f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x2831f4: 0x90e7003c  lbu         $a3, 0x3C($a3)
    ctx->pc = 0x2831f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x2831f8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2831f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2831fc: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2831fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x283200: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x283200u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x283204: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x283204u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x283208: 0xa62707f2  sh          $a3, 0x7F2($s1)
    ctx->pc = 0x283208u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 7));
    // 0x28320c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x28320cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x283210: 0xae2607ec  sw          $a2, 0x7EC($s1)
    ctx->pc = 0x283210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 6));
    // 0x283214: 0xa620082c  sh          $zero, 0x82C($s1)
    ctx->pc = 0x283214u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x283218: 0xa6250826  sh          $a1, 0x826($s1)
    ctx->pc = 0x283218u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 5));
    // 0x28321c: 0xa624082a  sh          $a0, 0x82A($s1)
    ctx->pc = 0x28321cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 4));
    // 0x283220: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x283220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x283224: 0x0  nop
    ctx->pc = 0x283224u;
    // NOP
label_283228:
    // 0x283228: 0x922307d6  lbu         $v1, 0x7D6($s1)
    ctx->pc = 0x283228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2006)));
    // 0x28322c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x28322Cu;
    {
        const bool branch_taken_0x28322c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28322c) {
            ctx->pc = 0x283338u;
            goto label_283338;
        }
    }
    ctx->pc = 0x283234u;
    // 0x283234: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x283234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x283238: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x283238u;
    {
        const bool branch_taken_0x283238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283238) {
            ctx->pc = 0x283328u;
            goto label_283328;
        }
    }
    ctx->pc = 0x283240u;
    // 0x283240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283244: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x283244u;
    {
        const bool branch_taken_0x283244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x283248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283244u;
        // 0x283248: 0xa622082a  sh          $v0, 0x82A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283244) {
            ctx->pc = 0x2832C0u;
            goto label_2832c0;
        }
    }
    ctx->pc = 0x28324Cu;
    // 0x28324c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x28324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283250: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x283250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x283254: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x283254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x283258: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x283258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x28325c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x28325cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x283260: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x283260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x283264: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x283264u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x283268: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x283268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28326c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28326cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283270: 0x0  nop
    ctx->pc = 0x283270u;
    // NOP
    // 0x283274: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x283274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x283278: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x283278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28327c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28327Cu;
    {
        const bool branch_taken_0x28327c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28327c) {
            ctx->pc = 0x283294u;
            goto label_283294;
        }
    }
    ctx->pc = 0x283284u;
    // 0x283284: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283288: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x283288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x28328c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28328Cu;
    {
        const bool branch_taken_0x28328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28328Cu;
        // 0x283290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28328c) {
            ctx->pc = 0x2832B0u;
            goto label_2832b0;
        }
    }
    ctx->pc = 0x283294u;
label_283294:
    // 0x283294: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x283294u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x283298: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x283298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28329c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28329cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2832a0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2832a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2832a4: 0x0  nop
    ctx->pc = 0x2832a4u;
    // NOP
    // 0x2832a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2832a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2832ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2832acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2832b0:
    // 0x2832b0: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x2832B0u;
    SET_GPR_U32(ctx, 31, 0x2832B8u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x2832B0u, 0x2832B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832B8u;
label_2832b8:
    // 0x2832b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2832B8u;
    {
        const bool branch_taken_0x2832b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2832b8) {
            ctx->pc = 0x283328u;
            goto label_283328;
        }
    }
    ctx->pc = 0x2832C0u;
label_2832c0:
    // 0x2832c0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2832c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2832c4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2832c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2832c8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2832c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2832cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2832ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2832d0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2832d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2832d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2832d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2832d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2832d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2832dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2832dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2832e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2832e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2832e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2832e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2832e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2832e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2832ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2832ECu;
    {
        const bool branch_taken_0x2832ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2832ec) {
            ctx->pc = 0x283304u;
            goto label_283304;
        }
    }
    ctx->pc = 0x2832F4u;
    // 0x2832f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2832f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2832f8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2832f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2832fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2832FCu;
    {
        const bool branch_taken_0x2832fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832FCu;
        // 0x283300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832fc) {
            ctx->pc = 0x283320u;
            goto label_283320;
        }
    }
    ctx->pc = 0x283304u;
label_283304:
    // 0x283304: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x283304u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x283308: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x283308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28330c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28330cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283310: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x283310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x283314: 0x0  nop
    ctx->pc = 0x283314u;
    // NOP
    // 0x283318: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x283318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x28331c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_283320:
    // 0x283320: 0xc0a0b40  jal         func_282D00
    ctx->pc = 0x283320u;
    SET_GPR_U32(ctx, 31, 0x283328u);
    ctx->pc = 0x282D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282D00u, 0x283320u, 0x283328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283328u;
label_283328:
    // 0x283328: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x283328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x28332c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28332cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283330: 0xa6230826  sh          $v1, 0x826($s1)
    ctx->pc = 0x283330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x283334: 0x0  nop
    ctx->pc = 0x283334u;
    // NOP
label_283338:
    // 0x283338: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283338u;
    {
        const bool branch_taken_0x283338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x283338) {
            ctx->pc = 0x283360u;
            goto label_283360;
        }
    }
    ctx->pc = 0x283340u;
    // 0x283340: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x283340u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x283344: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x283344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283348: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x283348u;
    {
        const bool branch_taken_0x283348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x283348) {
            ctx->pc = 0x283360u;
            goto label_283360;
        }
    }
    ctx->pc = 0x283350u;
    // 0x283350: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x283350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x283354: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x283354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x283358: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x283358u;
    {
        const bool branch_taken_0x283358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283358) {
            ctx->pc = 0x283390u;
            goto label_283390;
        }
    }
    ctx->pc = 0x283360u;
label_283360:
    // 0x283360: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x283360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x283364: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x283364u;
    {
        const bool branch_taken_0x283364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283364) {
            ctx->pc = 0x283390u;
            goto label_283390;
        }
    }
    ctx->pc = 0x28336Cu;
    // 0x28336c: 0x9223083b  lbu         $v1, 0x83B($s1)
    ctx->pc = 0x28336cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2107)));
    // 0x283370: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x283370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x283374: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x283374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x283378: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x283378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x28337c: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x28337cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x283380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283380u;
    {
        const bool branch_taken_0x283380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283380u;
        // 0x283384: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283380) {
            ctx->pc = 0x283390u;
            goto label_283390;
        }
    }
    ctx->pc = 0x283388u;
label_283388:
    // 0x283388: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x283388u;
    {
        const bool branch_taken_0x283388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283388) {
            ctx->pc = 0x283480u;
            goto label_283480;
        }
    }
    ctx->pc = 0x283390u;
label_283390:
    // 0x283390: 0x922307d6  lbu         $v1, 0x7D6($s1)
    ctx->pc = 0x283390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2006)));
    // 0x283394: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x283394u;
    {
        const bool branch_taken_0x283394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283394) {
            ctx->pc = 0x2833C0u;
            goto label_2833c0;
        }
    }
    ctx->pc = 0x28339Cu;
    // 0x28339c: 0x9623082c  lhu         $v1, 0x82C($s1)
    ctx->pc = 0x28339cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
    // 0x2833a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2833a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2833a4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2833a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2833a8: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x2833a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2833ac: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2833ACu;
    SET_GPR_U32(ctx, 31, 0x2833B4u);
    ctx->pc = 0x2833B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2833ACu;
    // 0x2833b0: 0xa622082c  sh          $v0, 0x82C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2833ACu, 0x2833B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833B4u;
label_2833b4:
    // 0x2833b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2833B4u;
    {
        const bool branch_taken_0x2833b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2833B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833B4u;
        // 0x2833b8: 0xa62207f0  sh          $v0, 0x7F0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833b4) {
            ctx->pc = 0x2833C8u;
            goto label_2833c8;
        }
    }
    ctx->pc = 0x2833BCu;
    // 0x2833bc: 0x0  nop
    ctx->pc = 0x2833bcu;
    // NOP
label_2833c0:
    // 0x2833c0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2833c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2833c4: 0xa62307f0  sh          $v1, 0x7F0($s1)
    ctx->pc = 0x2833c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2032), (uint16_t)GPR_U32(ctx, 3));
label_2833c8:
    // 0x2833c8: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2833C8u;
    {
        const bool branch_taken_0x2833c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2833c8) {
            ctx->pc = 0x283480u;
            goto label_283480;
        }
    }
    ctx->pc = 0x2833D0u;
    // 0x2833d0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2833d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2833d4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2833d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2833d8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2833d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2833dc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2833dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2833e0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2833e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2833e4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2833e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2833e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2833e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2833ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2833ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2833f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2833f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2833f4: 0x0  nop
    ctx->pc = 0x2833f4u;
    // NOP
    // 0x2833f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2833f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2833fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2833fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283400: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x283400u;
    {
        const bool branch_taken_0x283400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283400) {
            ctx->pc = 0x283418u;
            goto label_283418;
        }
    }
    ctx->pc = 0x283408u;
    // 0x283408: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28340c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x28340cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x283410: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283410u;
    {
        const bool branch_taken_0x283410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283410u;
        // 0x283414: 0x96230826  lhu         $v1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283410) {
            ctx->pc = 0x283434u;
            goto label_283434;
        }
    }
    ctx->pc = 0x283418u;
label_283418:
    // 0x283418: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x283418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28341c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28341cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x283420: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283424: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x283424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x283428: 0x0  nop
    ctx->pc = 0x283428u;
    // NOP
    // 0x28342c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x28342cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x283430: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x283430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
label_283434:
    // 0x283434: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x283434u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x283438: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x283438u;
    {
        const bool branch_taken_0x283438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x283438) {
            ctx->pc = 0x283480u;
            goto label_283480;
        }
    }
    ctx->pc = 0x283440u;
    // 0x283440: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x283440u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x283444: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x283444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283448: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x283448u;
    {
        const bool branch_taken_0x283448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x283448) {
            ctx->pc = 0x283480u;
            goto label_283480;
        }
    }
    ctx->pc = 0x283450u;
    // 0x283450: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x283450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x283454: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x283454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x283458: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x283458u;
    {
        const bool branch_taken_0x283458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283458) {
            ctx->pc = 0x283480u;
            goto label_283480;
        }
    }
    ctx->pc = 0x283460u;
    // 0x283460: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x283460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x283464: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x283464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x283468: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283468u;
    {
        const bool branch_taken_0x283468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283468u;
        // 0x28346c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283468) {
            ctx->pc = 0x283478u;
            goto label_283478;
        }
    }
    ctx->pc = 0x283470u;
    // 0x283470: 0xa6230786  sh          $v1, 0x786($s1)
    ctx->pc = 0x283470u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x283474: 0x0  nop
    ctx->pc = 0x283474u;
    // NOP
label_283478:
    // 0x283478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x283478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28347c: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x28347cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_283480:
    // 0x283480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x283480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28348c: 0x3e00008  jr          $ra
    ctx->pc = 0x28348Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28348Cu;
        // 0x283490: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28348Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283494u;
}
