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

// Function: sub_00175160
// Address: 0x175160 - 0x175318
void sub_00175160_0x175160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175160_0x175160");
#endif

    switch (ctx->pc) {
        case 0x1751a8u: goto label_1751a8;
        case 0x175248u: goto label_175248;
        case 0x175294u: goto label_175294;
        case 0x1752acu: goto label_1752ac;
        default: break;
    }

    ctx->pc = 0x175160u;

    // 0x175160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x175160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x175164: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x175164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x175168: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x175168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17516c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17516cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x175170: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x175174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175178: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17517c: 0x246352a0  addiu       $v1, $v1, 0x52A0
    ctx->pc = 0x17517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21152));
    // 0x175180: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175184: 0x3c130082  lui         $s3, 0x82
    ctx->pc = 0x175184u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)130 << 16));
    // 0x175188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17518c: 0xa49004  sllv        $s2, $a0, $a1
    ctx->pc = 0x17518cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x175190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175194: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x175194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175198: 0x2673b1a0  addiu       $s3, $s3, -0x4E60
    ctx->pc = 0x175198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947232));
    // 0x17519c: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x17519cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1751a0: 0x2408827  not         $s1, $s2
    ctx->pc = 0x1751a0u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 18) | GPR_U64(ctx, 0)));
    // 0x1751a4: 0x0  nop
    ctx->pc = 0x1751a4u;
    // NOP
label_1751a8:
    // 0x1751a8: 0x9665000a  lhu         $a1, 0xA($s3)
    ctx->pc = 0x1751a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1751ac: 0x2451824  and         $v1, $s2, $a1
    ctx->pc = 0x1751acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x1751b0: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1751B0u;
    {
        const bool branch_taken_0x1751b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1751b0) {
            ctx->pc = 0x1752E8u;
            goto label_1752e8;
        }
    }
    ctx->pc = 0x1751B8u;
    // 0x1751b8: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x1751b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1751bc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1751bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1751c0: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1751C0u;
    {
        const bool branch_taken_0x1751c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1751C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751C0u;
        // 0x1751c4: 0x3223ffff  andi        $v1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751c0) {
            ctx->pc = 0x1752E8u;
            goto label_1752e8;
        }
    }
    ctx->pc = 0x1751C8u;
    // 0x1751c8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1751c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1751cc: 0xa663000a  sh          $v1, 0xA($s3)
    ctx->pc = 0x1751ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1751d0: 0x82630003  lb          $v1, 0x3($s3)
    ctx->pc = 0x1751d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x1751d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1751d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1751d8: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x1751d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1751dc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1751dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1751e0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1751e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1751e4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1751E4u;
    {
        const bool branch_taken_0x1751e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1751E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751E4u;
        // 0x1751e8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751e4) {
            ctx->pc = 0x175230u;
            goto label_175230;
        }
    }
    ctx->pc = 0x1751ECu;
    // 0x1751ec: 0x9025cc70  lbu         $a1, -0x3390($at)
    ctx->pc = 0x1751ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954096)));
    // 0x1751f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1751f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1751f4: 0x9023cc71  lbu         $v1, -0x338F($at)
    ctx->pc = 0x1751f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81CC71u));
    // 0x1751f8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1751f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1751fc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1751FCu;
    {
        const bool branch_taken_0x1751fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x175200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751FCu;
        // 0x175200: 0x3c030082  lui         $v1, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751fc) {
            ctx->pc = 0x175220u;
            goto label_175220;
        }
    }
    ctx->pc = 0x175204u;
    // 0x175204: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x175204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x175208: 0x2463cc30  addiu       $v1, $v1, -0x33D0
    ctx->pc = 0x175208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954032));
    // 0x17520c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17520cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x175210: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x175214: 0xa024cc70  sb          $a0, -0x3390($at)
    ctx->pc = 0x175214u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CC70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x81CC70u, _value); } while (0);
    // 0x175218: 0xa0740000  sb          $s4, 0x0($v1)
    ctx->pc = 0x175218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x17521c: 0x0  nop
    ctx->pc = 0x17521cu;
    // NOP
label_175220:
    // 0x175220: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x175220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x175224: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x175224u;
    {
        const bool branch_taken_0x175224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175224u;
        // 0x175228: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175224) {
            ctx->pc = 0x1752C8u;
            goto label_1752c8;
        }
    }
    ctx->pc = 0x17522Cu;
    // 0x17522c: 0x0  nop
    ctx->pc = 0x17522cu;
    // NOP
label_175230:
    // 0x175230: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x175230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x175234: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x175234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x175238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17523c: 0x9665000a  lhu         $a1, 0xA($s3)
    ctx->pc = 0x17523cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x175240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175244: 0x0  nop
    ctx->pc = 0x175244u;
    // NOP
label_175248:
    // 0x175248: 0xc41804  sllv        $v1, $a0, $a2
    ctx->pc = 0x175248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x17524c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x17524cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x175250: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x175250u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x175254: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x175254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x175258: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x175258u;
    {
        const bool branch_taken_0x175258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175258) {
            ctx->pc = 0x1752B8u;
            goto label_1752b8;
        }
    }
    ctx->pc = 0x175260u;
    // 0x175260: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x175260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x175264: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x175264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x175268: 0x244252b0  addiu       $v0, $v0, 0x52B0
    ctx->pc = 0x175268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21168));
    // 0x17526c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x175270: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x175270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x175274: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x175274u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175278: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x175278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x17527c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x17527cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x175280: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x175280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x175284: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x175284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175288: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x175288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x17528c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x17528Cu;
    SET_GPR_U32(ctx, 31, 0x175294u);
    ctx->pc = 0x175290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17528Cu;
    // 0x175290: 0x2446000b  addiu       $a2, $v0, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x17528Cu, 0x175294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175294u;
label_175294:
    // 0x175294: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x175294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x175298: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x175298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x17529c: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x17529cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1752a0: 0x92670001  lbu         $a3, 0x1($s3)
    ctx->pc = 0x1752a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1752a4: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x1752A4u;
    SET_GPR_U32(ctx, 31, 0x1752ACu);
    ctx->pc = 0x1752A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1752A4u;
    // 0x1752a8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x1752A4u, 0x1752ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752ACu;
label_1752ac:
    // 0x1752ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1752ACu;
    {
        const bool branch_taken_0x1752ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1752B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752ACu;
        // 0x1752b0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752ac) {
            ctx->pc = 0x1752C8u;
            goto label_1752c8;
        }
    }
    ctx->pc = 0x1752B4u;
    // 0x1752b4: 0x0  nop
    ctx->pc = 0x1752b4u;
    // NOP
label_1752b8:
    // 0x1752b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1752b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1752bc: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x1752bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1752c0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1752C0u;
    {
        const bool branch_taken_0x1752c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1752c0) {
            ctx->pc = 0x175248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175248;
        }
    }
    ctx->pc = 0x1752C8u;
label_1752c8:
    // 0x1752c8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1752c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1752cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1752ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1752d0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1752d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1752d4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1752d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1752d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1752d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1752dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1752dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1752e0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1752e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1752e4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1752e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_1752e8:
    // 0x1752e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1752e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1752ec: 0x2a830040  slti        $v1, $s4, 0x40
    ctx->pc = 0x1752ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1752f0: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1752F0u;
    {
        const bool branch_taken_0x1752f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1752F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752F0u;
        // 0x1752f4: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752f0) {
            ctx->pc = 0x1751A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1751a8;
        }
    }
    ctx->pc = 0x1752F8u;
    // 0x1752f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1752f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1752fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1752fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175300: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17530c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17530cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175310: 0x3e00008  jr          $ra
    ctx->pc = 0x175310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175310u;
        // 0x175314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175318u;
}
