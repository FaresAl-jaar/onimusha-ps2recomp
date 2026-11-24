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

// Function: sub_003B4510
// Address: 0x3b4510 - 0x3b4828
void sub_003B4510_0x3b4510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4510_0x3b4510");
#endif

    ctx->pc = 0x3b4510u;

    // 0x3b4510: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3b4510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3b4514: 0x24030562  addiu       $v1, $zero, 0x562
    ctx->pc = 0x3b4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
    // 0x3b4518: 0x94256ac4  lhu         $a1, 0x6AC4($at)
    ctx->pc = 0x3b4518u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3b451c: 0x10a300ae  beq         $a1, $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x3B451Cu;
    {
        const bool branch_taken_0x3b451c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B4520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B451Cu;
        // 0x3b4520: 0x24030e42  addiu       $v1, $zero, 0xE42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b451c) {
            ctx->pc = 0x3B47D8u;
            goto label_3b47d8;
        }
    }
    ctx->pc = 0x3B4524u;
    // 0x3b4524: 0x10a300a4  beq         $a1, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3B4524u;
    {
        const bool branch_taken_0x3b4524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b4524) {
            ctx->pc = 0x3B47B8u;
            goto label_3b47b8;
        }
    }
    ctx->pc = 0x3B452Cu;
    // 0x3b452c: 0x240304c0  addiu       $v1, $zero, 0x4C0
    ctx->pc = 0x3b452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    // 0x3b4530: 0x10a30099  beq         $a1, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x3B4530u;
    {
        const bool branch_taken_0x3b4530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4530u;
        // 0x3b4534: 0x240304d0  addiu       $v1, $zero, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4530) {
            ctx->pc = 0x3B4798u;
            goto label_3b4798;
        }
    }
    ctx->pc = 0x3B4538u;
    // 0x3b4538: 0x10a3008f  beq         $a1, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x3B4538u;
    {
        const bool branch_taken_0x3b4538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b4538) {
            ctx->pc = 0x3B4778u;
            goto label_3b4778;
        }
    }
    ctx->pc = 0x3B4540u;
    // 0x3b4540: 0x24030c53  addiu       $v1, $zero, 0xC53
    ctx->pc = 0x3b4540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3155));
    // 0x3b4544: 0x10a30084  beq         $a1, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x3B4544u;
    {
        const bool branch_taken_0x3b4544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4544u;
        // 0x3b4548: 0x24030c52  addiu       $v1, $zero, 0xC52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4544) {
            ctx->pc = 0x3B4758u;
            goto label_3b4758;
        }
    }
    ctx->pc = 0x3B454Cu;
    // 0x3b454c: 0x10a3007a  beq         $a1, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x3B454Cu;
    {
        const bool branch_taken_0x3b454c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b454c) {
            ctx->pc = 0x3B4738u;
            goto label_3b4738;
        }
    }
    ctx->pc = 0x3B4554u;
    // 0x3b4554: 0x240308c9  addiu       $v1, $zero, 0x8C9
    ctx->pc = 0x3b4554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2249));
    // 0x3b4558: 0x10a3006f  beq         $a1, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x3B4558u;
    {
        const bool branch_taken_0x3b4558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4558u;
        // 0x3b455c: 0x2403084a  addiu       $v1, $zero, 0x84A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4558) {
            ctx->pc = 0x3B4718u;
            goto label_3b4718;
        }
    }
    ctx->pc = 0x3B4560u;
    // 0x3b4560: 0x10a30059  beq         $a1, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x3B4560u;
    {
        const bool branch_taken_0x3b4560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b4560) {
            ctx->pc = 0x3B46C8u;
            goto label_3b46c8;
        }
    }
    ctx->pc = 0x3B4568u;
    // 0x3b4568: 0x24030497  addiu       $v1, $zero, 0x497
    ctx->pc = 0x3b4568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1175));
    // 0x3b456c: 0x10a3004e  beq         $a1, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x3B456Cu;
    {
        const bool branch_taken_0x3b456c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B456Cu;
        // 0x3b4570: 0x240303c4  addiu       $v1, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b456c) {
            ctx->pc = 0x3B46A8u;
            goto label_3b46a8;
        }
    }
    ctx->pc = 0x3B4574u;
    // 0x3b4574: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3B4574u;
    {
        const bool branch_taken_0x3b4574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b4574) {
            ctx->pc = 0x3B4688u;
            goto label_3b4688;
        }
    }
    ctx->pc = 0x3B457Cu;
    // 0x3b457c: 0x24030386  addiu       $v1, $zero, 0x386
    ctx->pc = 0x3b457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 902));
    // 0x3b4580: 0x10a30039  beq         $a1, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3B4580u;
    {
        const bool branch_taken_0x3b4580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4580u;
        // 0x3b4584: 0x2403028c  addiu       $v1, $zero, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4580) {
            ctx->pc = 0x3B4668u;
            goto label_3b4668;
        }
    }
    ctx->pc = 0x3B4588u;
    // 0x3b4588: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3B4588u;
    {
        const bool branch_taken_0x3b4588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b4588) {
            ctx->pc = 0x3B4620u;
            goto label_3b4620;
        }
    }
    ctx->pc = 0x3B4590u;
    // 0x3b4590: 0x24030352  addiu       $v1, $zero, 0x352
    ctx->pc = 0x3b4590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 850));
    // 0x3b4594: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B4594u;
    {
        const bool branch_taken_0x3b4594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4594u;
        // 0x3b4598: 0x24030371  addiu       $v1, $zero, 0x371 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 881));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4594) {
            ctx->pc = 0x3B45D8u;
            goto label_3b45d8;
        }
    }
    ctx->pc = 0x3B459Cu;
    // 0x3b459c: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B459Cu;
    {
        const bool branch_taken_0x3b459c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b459c) {
            ctx->pc = 0x3B45D8u;
            goto label_3b45d8;
        }
    }
    ctx->pc = 0x3B45A4u;
    // 0x3b45a4: 0x24030348  addiu       $v1, $zero, 0x348
    ctx->pc = 0x3b45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 840));
    // 0x3b45a8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B45A8u;
    {
        const bool branch_taken_0x3b45a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b45a8) {
            ctx->pc = 0x3B45B8u;
            goto label_3b45b8;
        }
    }
    ctx->pc = 0x3B45B0u;
    // 0x3b45b0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3B45B0u;
    {
        const bool branch_taken_0x3b45b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b45b0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B45B8u;
label_3b45b8:
    // 0x3b45b8: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b45b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b45bc: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x3b45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x3b45c0: 0x14830097  bne         $a0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x3B45C0u;
    {
        const bool branch_taken_0x3b45c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45C0u;
        // 0x3b45c4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b45c0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B45C8u;
    // 0x3b45c8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b45c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b45cc: 0x2463de20  addiu       $v1, $v1, -0x21E0
    ctx->pc = 0x3b45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958624));
    // 0x3b45d0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3B45D0u;
    {
        const bool branch_taken_0x3b45d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45D0u;
        // 0x3b45d4: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b45d0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B45D8u;
label_3b45d8:
    // 0x3b45d8: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3b45d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b45dc: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x3b45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3b45e0: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B45E0u;
    {
        const bool branch_taken_0x3b45e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45E0u;
        // 0x3b45e4: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b45e0) {
            ctx->pc = 0x3B4610u;
            goto label_3b4610;
        }
    }
    ctx->pc = 0x3B45E8u;
    // 0x3b45e8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3b45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3b45ec: 0x24a5df80  addiu       $a1, $a1, -0x2080
    ctx->pc = 0x3b45ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958976));
    // 0x3b45f0: 0x2463fda8  addiu       $v1, $v1, -0x258
    ctx->pc = 0x3b45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966696));
    // 0x3b45f4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3b45f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b45f8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3b45f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b45fc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3b45fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4600: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3b4600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDA8u, _value); } while (0); }
    // 0x3b4604: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3b4604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDACu, _value); } while (0); }
    // 0x3b4608: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3b4608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDB0u, _value); } while (0); }
    // 0x3b460c: 0x0  nop
    ctx->pc = 0x3b460cu;
    // NOP
label_3b4610:
    // 0x3b4610: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3b4610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b4614: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b4618: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x3B4618u;
    {
        const bool branch_taken_0x3b4618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4618u;
        // 0x3b461c: 0xac23fd94  sw          $v1, -0x26C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4618) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4620u;
label_3b4620:
    // 0x3b4620: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3b4620u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b4624: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x3b4624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3b4628: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B4628u;
    {
        const bool branch_taken_0x3b4628 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4628u;
        // 0x3b462c: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4628) {
            ctx->pc = 0x3B4658u;
            goto label_3b4658;
        }
    }
    ctx->pc = 0x3B4630u;
    // 0x3b4630: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3b4630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3b4634: 0x24a5df90  addiu       $a1, $a1, -0x2070
    ctx->pc = 0x3b4634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958992));
    // 0x3b4638: 0x2463fda8  addiu       $v1, $v1, -0x258
    ctx->pc = 0x3b4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966696));
    // 0x3b463c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3b463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b4640: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3b4640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4644: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3b4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4648: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3b4648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDA8u, _value); } while (0); }
    // 0x3b464c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3b464cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDACu, _value); } while (0); }
    // 0x3b4650: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3b4650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDB0u, _value); } while (0); }
    // 0x3b4654: 0x0  nop
    ctx->pc = 0x3b4654u;
    // NOP
label_3b4658:
    // 0x3b4658: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3b4658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b465c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b465cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b4660: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3B4660u;
    {
        const bool branch_taken_0x3b4660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4660u;
        // 0x3b4664: 0xac23fd94  sw          $v1, -0x26C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4660) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4668u;
label_3b4668:
    // 0x3b4668: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b4668u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b466c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x3b466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x3b4670: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x3B4670u;
    {
        const bool branch_taken_0x3b4670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4670u;
        // 0x3b4674: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4670) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4678u;
    // 0x3b4678: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b467c: 0x2463de40  addiu       $v1, $v1, -0x21C0
    ctx->pc = 0x3b467cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958656));
    // 0x3b4680: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3B4680u;
    {
        const bool branch_taken_0x3b4680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4680u;
        // 0x3b4684: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4680) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4688u;
label_3b4688:
    // 0x3b4688: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b4688u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b468c: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x3b468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3b4690: 0x14830063  bne         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x3B4690u;
    {
        const bool branch_taken_0x3b4690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4690u;
        // 0x3b4694: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4690) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4698u;
    // 0x3b4698: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b469c: 0x2463de60  addiu       $v1, $v1, -0x21A0
    ctx->pc = 0x3b469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958688));
    // 0x3b46a0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x3B46A0u;
    {
        const bool branch_taken_0x3b46a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46A0u;
        // 0x3b46a4: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b46a0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B46A8u;
label_3b46a8:
    // 0x3b46a8: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b46a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b46ac: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3b46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3b46b0: 0x1483005b  bne         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x3B46B0u;
    {
        const bool branch_taken_0x3b46b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46B0u;
        // 0x3b46b4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b46b0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B46B8u;
    // 0x3b46b8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b46b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b46bc: 0x2463de80  addiu       $v1, $v1, -0x2180
    ctx->pc = 0x3b46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958720));
    // 0x3b46c0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3B46C0u;
    {
        const bool branch_taken_0x3b46c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46C0u;
        // 0x3b46c4: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b46c0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B46C8u;
label_3b46c8:
    // 0x3b46c8: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b46c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b46cc: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3b46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3b46d0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B46D0u;
    {
        const bool branch_taken_0x3b46d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46D0u;
        // 0x3b46d4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b46d0) {
            ctx->pc = 0x3B46E8u;
            goto label_3b46e8;
        }
    }
    ctx->pc = 0x3B46D8u;
    // 0x3b46d8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b46d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b46dc: 0x2463dea0  addiu       $v1, $v1, -0x2160
    ctx->pc = 0x3b46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958752));
    // 0x3b46e0: 0xac23fe74  sw          $v1, -0x18C($at)
    ctx->pc = 0x3b46e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FE74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE74u, _value); } while (0);
    // 0x3b46e4: 0x0  nop
    ctx->pc = 0x3b46e4u;
    // NOP
label_3b46e8:
    // 0x3b46e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3b46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3b46ec: 0x2484dfa0  addiu       $a0, $a0, -0x2060
    ctx->pc = 0x3b46ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959008));
    // 0x3b46f0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3b46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3b46f4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3b46f4u;
    { uint32_t bits = FAST_READ32(0x65DFA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b46f8: 0x2463fda8  addiu       $v1, $v1, -0x258
    ctx->pc = 0x3b46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966696));
    // 0x3b46fc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3b46fcu;
    { uint32_t bits = FAST_READ32(0x65DFA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4700: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3b4700u;
    { uint32_t bits = FAST_READ32(0x65DFA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4704: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3b4704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDA8u, _value); } while (0); }
    // 0x3b4708: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3b4708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDACu, _value); } while (0); }
    // 0x3b470c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3B470Cu;
    {
        const bool branch_taken_0x3b470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B470Cu;
        // 0x3b4710: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b470c) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4714u;
    // 0x3b4714: 0x0  nop
    ctx->pc = 0x3b4714u;
    // NOP
label_3b4718:
    // 0x3b4718: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b4718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b471c: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x3b471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3b4720: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3B4720u;
    {
        const bool branch_taken_0x3b4720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4720u;
        // 0x3b4724: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4720) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4728u;
    // 0x3b4728: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b472c: 0x2463dee0  addiu       $v1, $v1, -0x2120
    ctx->pc = 0x3b472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958816));
    // 0x3b4730: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3B4730u;
    {
        const bool branch_taken_0x3b4730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4730u;
        // 0x3b4734: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4730) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4738u;
label_3b4738:
    // 0x3b4738: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b4738u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b473c: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x3b473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3b4740: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3B4740u;
    {
        const bool branch_taken_0x3b4740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4740u;
        // 0x3b4744: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4740) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4748u;
    // 0x3b4748: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b474c: 0x2463dee0  addiu       $v1, $v1, -0x2120
    ctx->pc = 0x3b474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958816));
    // 0x3b4750: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3B4750u;
    {
        const bool branch_taken_0x3b4750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4750u;
        // 0x3b4754: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4750) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4758u;
label_3b4758:
    // 0x3b4758: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b4758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b475c: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x3b475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x3b4760: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3B4760u;
    {
        const bool branch_taken_0x3b4760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4760u;
        // 0x3b4764: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4760) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4768u;
    // 0x3b4768: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b476c: 0x2463df00  addiu       $v1, $v1, -0x2100
    ctx->pc = 0x3b476cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958848));
    // 0x3b4770: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3B4770u;
    {
        const bool branch_taken_0x3b4770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4770u;
        // 0x3b4774: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4770) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4778u;
label_3b4778:
    // 0x3b4778: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b4778u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b477c: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x3b477cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x3b4780: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3B4780u;
    {
        const bool branch_taken_0x3b4780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4780u;
        // 0x3b4784: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4780) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4788u;
    // 0x3b4788: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b478c: 0x2463df20  addiu       $v1, $v1, -0x20E0
    ctx->pc = 0x3b478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958880));
    // 0x3b4790: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3B4790u;
    {
        const bool branch_taken_0x3b4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4790u;
        // 0x3b4794: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4790) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B4798u;
label_3b4798:
    // 0x3b4798: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b4798u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b479c: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x3b479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x3b47a0: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3B47A0u;
    {
        const bool branch_taken_0x3b47a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B47A0u;
        // 0x3b47a4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47a0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B47A8u;
    // 0x3b47a8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b47a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b47ac: 0x2463df40  addiu       $v1, $v1, -0x20C0
    ctx->pc = 0x3b47acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958912));
    // 0x3b47b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3B47B0u;
    {
        const bool branch_taken_0x3b47b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B47B0u;
        // 0x3b47b4: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47b0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B47B8u;
label_3b47b8:
    // 0x3b47b8: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3b47b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b47bc: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x3b47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3b47c0: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B47C0u;
    {
        const bool branch_taken_0x3b47c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B47C0u;
        // 0x3b47c4: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47c0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B47C8u;
    // 0x3b47c8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b47c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b47cc: 0x2463df60  addiu       $v1, $v1, -0x20A0
    ctx->pc = 0x3b47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958944));
    // 0x3b47d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B47D0u;
    {
        const bool branch_taken_0x3b47d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B47D0u;
        // 0x3b47d4: 0xac23fe74  sw          $v1, -0x18C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966900), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47d0) {
            ctx->pc = 0x3B4820u;
            goto label_3b4820;
        }
    }
    ctx->pc = 0x3B47D8u;
label_3b47d8:
    // 0x3b47d8: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3b47d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3b47dc: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x3b47dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x3b47e0: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B47E0u;
    {
        const bool branch_taken_0x3b47e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B47E0u;
        // 0x3b47e4: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47e0) {
            ctx->pc = 0x3B4810u;
            goto label_3b4810;
        }
    }
    ctx->pc = 0x3B47E8u;
    // 0x3b47e8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3b47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3b47ec: 0x24a5dfb0  addiu       $a1, $a1, -0x2050
    ctx->pc = 0x3b47ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959024));
    // 0x3b47f0: 0x2463fda8  addiu       $v1, $v1, -0x258
    ctx->pc = 0x3b47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966696));
    // 0x3b47f4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3b47f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b47f8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3b47f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b47fc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3b47fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4800: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3b4800u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDA8u, _value); } while (0); }
    // 0x3b4804: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3b4804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDACu, _value); } while (0); }
    // 0x3b4808: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3b4808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FDB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FDB0u, _value); } while (0); }
    // 0x3b480c: 0x0  nop
    ctx->pc = 0x3b480cu;
    // NOP
label_3b4810:
    // 0x3b4810: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3b4810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b4814: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b4818: 0xac23fd94  sw          $v1, -0x26C($at)
    ctx->pc = 0x3b4818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FD94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FD94u, _value); } while (0);
    // 0x3b481c: 0x0  nop
    ctx->pc = 0x3b481cu;
    // NOP
label_3b4820:
    // 0x3b4820: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4828u;
}
