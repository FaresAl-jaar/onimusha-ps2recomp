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

// Function: sub_0034F930
// Address: 0x34f930 - 0x35051c
void sub_0034F930_0x34f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F930_0x34f930");
#endif

    switch (ctx->pc) {
        case 0x34f94cu: goto label_34f94c;
        case 0x34fa80u: goto label_34fa80;
        case 0x34fa90u: goto label_34fa90;
        case 0x34faa0u: goto label_34faa0;
        case 0x34faacu: goto label_34faac;
        case 0x34fb48u: goto label_34fb48;
        case 0x34fb54u: goto label_34fb54;
        case 0x34fb84u: goto label_34fb84;
        case 0x34fba8u: goto label_34fba8;
        case 0x34fbb4u: goto label_34fbb4;
        case 0x34fbf8u: goto label_34fbf8;
        case 0x34fc58u: goto label_34fc58;
        case 0x34fc68u: goto label_34fc68;
        case 0x34fc94u: goto label_34fc94;
        case 0x34fca8u: goto label_34fca8;
        case 0x34fd24u: goto label_34fd24;
        case 0x34fd54u: goto label_34fd54;
        case 0x34fd60u: goto label_34fd60;
        case 0x34fd74u: goto label_34fd74;
        case 0x34fde0u: goto label_34fde0;
        case 0x34fdecu: goto label_34fdec;
        case 0x34fdf4u: goto label_34fdf4;
        case 0x34fe04u: goto label_34fe04;
        case 0x34fe40u: goto label_34fe40;
        case 0x34fe64u: goto label_34fe64;
        case 0x34fe90u: goto label_34fe90;
        case 0x34fea0u: goto label_34fea0;
        case 0x34feccu: goto label_34fecc;
        case 0x34fef4u: goto label_34fef4;
        case 0x34ff10u: goto label_34ff10;
        case 0x34ff20u: goto label_34ff20;
        case 0x34ff28u: goto label_34ff28;
        case 0x34ff40u: goto label_34ff40;
        case 0x34ff50u: goto label_34ff50;
        case 0x34ff7cu: goto label_34ff7c;
        case 0x34ffe0u: goto label_34ffe0;
        case 0x34fff0u: goto label_34fff0;
        case 0x35001cu: goto label_35001c;
        case 0x350050u: goto label_350050;
        case 0x350060u: goto label_350060;
        case 0x35008cu: goto label_35008c;
        case 0x3500b8u: goto label_3500b8;
        case 0x3500c8u: goto label_3500c8;
        case 0x3500f4u: goto label_3500f4;
        case 0x350120u: goto label_350120;
        case 0x350130u: goto label_350130;
        case 0x35015cu: goto label_35015c;
        case 0x3501c4u: goto label_3501c4;
        case 0x350218u: goto label_350218;
        case 0x350224u: goto label_350224;
        case 0x35027cu: goto label_35027c;
        case 0x3502b8u: goto label_3502b8;
        case 0x3502c8u: goto label_3502c8;
        case 0x3502f4u: goto label_3502f4;
        case 0x350364u: goto label_350364;
        case 0x3503c8u: goto label_3503c8;
        case 0x3503d4u: goto label_3503d4;
        case 0x3503dcu: goto label_3503dc;
        case 0x3503ecu: goto label_3503ec;
        case 0x350428u: goto label_350428;
        case 0x35044cu: goto label_35044c;
        case 0x350470u: goto label_350470;
        case 0x350480u: goto label_350480;
        case 0x3504acu: goto label_3504ac;
        case 0x3504ccu: goto label_3504cc;
        case 0x3504d4u: goto label_3504d4;
        case 0x3504e8u: goto label_3504e8;
        case 0x3504f0u: goto label_3504f0;
        default: break;
    }

    ctx->pc = 0x34f930u;

    // 0x34f930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34f934: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x34f934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x34f938: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34f93c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34f940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34f940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f944: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34F944u;
    SET_GPR_U32(ctx, 31, 0x34F94Cu);
    ctx->pc = 0x34F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F944u;
    // 0x34f948: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34F944u, 0x34F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F94Cu;
label_34f94c:
    // 0x34f94c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x34f94cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f950: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x34f950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34f954: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x34f954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34f958: 0x104302e1  beq         $v0, $v1, . + 4 + (0x2E1 << 2)
    ctx->pc = 0x34F958u;
    {
        const bool branch_taken_0x34f958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F958u;
        // 0x34f95c: 0x2403003e  addiu       $v1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f958) {
            ctx->pc = 0x3504E0u;
            goto label_3504e0;
        }
    }
    ctx->pc = 0x34F960u;
    // 0x34f960: 0x104302d7  beq         $v0, $v1, . + 4 + (0x2D7 << 2)
    ctx->pc = 0x34F960u;
    {
        const bool branch_taken_0x34f960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F960u;
        // 0x34f964: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f960) {
            ctx->pc = 0x3504C0u;
            goto label_3504c0;
        }
    }
    ctx->pc = 0x34F968u;
    // 0x34f968: 0x104402bd  beq         $v0, $a0, . + 4 + (0x2BD << 2)
    ctx->pc = 0x34F968u;
    {
        const bool branch_taken_0x34f968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x34F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F968u;
        // 0x34f96c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f968) {
            ctx->pc = 0x350460u;
            goto label_350460;
        }
    }
    ctx->pc = 0x34F970u;
    // 0x34f970: 0x104302b3  beq         $v0, $v1, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x34F970u;
    {
        const bool branch_taken_0x34f970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f970) {
            ctx->pc = 0x350440u;
            goto label_350440;
        }
    }
    ctx->pc = 0x34F978u;
    // 0x34f978: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x34f978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x34f97c: 0x104302a4  beq         $v0, $v1, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x34F97Cu;
    {
        const bool branch_taken_0x34f97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F97Cu;
        // 0x34f980: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f97c) {
            ctx->pc = 0x350410u;
            goto label_350410;
        }
    }
    ctx->pc = 0x34F984u;
    // 0x34f984: 0x104302a0  beq         $v0, $v1, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x34F984u;
    {
        const bool branch_taken_0x34f984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f984) {
            ctx->pc = 0x350408u;
            goto label_350408;
        }
    }
    ctx->pc = 0x34F98Cu;
    // 0x34f98c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x34f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x34f990: 0x1043028b  beq         $v0, $v1, . + 4 + (0x28B << 2)
    ctx->pc = 0x34F990u;
    {
        const bool branch_taken_0x34f990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F990u;
        // 0x34f994: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f990) {
            ctx->pc = 0x3503C0u;
            goto label_3503c0;
        }
    }
    ctx->pc = 0x34F998u;
    // 0x34f998: 0x1043026f  beq         $v0, $v1, . + 4 + (0x26F << 2)
    ctx->pc = 0x34F998u;
    {
        const bool branch_taken_0x34f998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f998) {
            ctx->pc = 0x350358u;
            goto label_350358;
        }
    }
    ctx->pc = 0x34F9A0u;
    // 0x34f9a0: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x34f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x34f9a4: 0x10430240  beq         $v0, $v1, . + 4 + (0x240 << 2)
    ctx->pc = 0x34F9A4u;
    {
        const bool branch_taken_0x34f9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9A4u;
        // 0x34f9a8: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9a4) {
            ctx->pc = 0x3502A8u;
            goto label_3502a8;
        }
    }
    ctx->pc = 0x34F9ACu;
    // 0x34f9ac: 0x10430216  beq         $v0, $v1, . + 4 + (0x216 << 2)
    ctx->pc = 0x34F9ACu;
    {
        const bool branch_taken_0x34f9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f9ac) {
            ctx->pc = 0x350208u;
            goto label_350208;
        }
    }
    ctx->pc = 0x34F9B4u;
    // 0x34f9b4: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x34f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x34f9b8: 0x104301ff  beq         $v0, $v1, . + 4 + (0x1FF << 2)
    ctx->pc = 0x34F9B8u;
    {
        const bool branch_taken_0x34f9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9B8u;
        // 0x34f9bc: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9b8) {
            ctx->pc = 0x3501B8u;
            goto label_3501b8;
        }
    }
    ctx->pc = 0x34F9C0u;
    // 0x34f9c0: 0x104301d3  beq         $v0, $v1, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x34F9C0u;
    {
        const bool branch_taken_0x34f9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f9c0) {
            ctx->pc = 0x350110u;
            goto label_350110;
        }
    }
    ctx->pc = 0x34F9C8u;
    // 0x34f9c8: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x34f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x34f9cc: 0x104301b6  beq         $v0, $v1, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x34F9CCu;
    {
        const bool branch_taken_0x34f9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9CCu;
        // 0x34f9d0: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9cc) {
            ctx->pc = 0x3500A8u;
            goto label_3500a8;
        }
    }
    ctx->pc = 0x34F9D4u;
    // 0x34f9d4: 0x1043019a  beq         $v0, $v1, . + 4 + (0x19A << 2)
    ctx->pc = 0x34F9D4u;
    {
        const bool branch_taken_0x34f9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f9d4) {
            ctx->pc = 0x350040u;
            goto label_350040;
        }
    }
    ctx->pc = 0x34F9DCu;
    // 0x34f9dc: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x34f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x34f9e0: 0x1043017b  beq         $v0, $v1, . + 4 + (0x17B << 2)
    ctx->pc = 0x34F9E0u;
    {
        const bool branch_taken_0x34f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9E0u;
        // 0x34f9e4: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9e0) {
            ctx->pc = 0x34FFD0u;
            goto label_34ffd0;
        }
    }
    ctx->pc = 0x34F9E8u;
    // 0x34f9e8: 0x10430151  beq         $v0, $v1, . + 4 + (0x151 << 2)
    ctx->pc = 0x34F9E8u;
    {
        const bool branch_taken_0x34f9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f9e8) {
            ctx->pc = 0x34FF30u;
            goto label_34ff30;
        }
    }
    ctx->pc = 0x34F9F0u;
    // 0x34f9f0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x34f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x34f9f4: 0x1043013c  beq         $v0, $v1, . + 4 + (0x13C << 2)
    ctx->pc = 0x34F9F4u;
    {
        const bool branch_taken_0x34f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9F4u;
        // 0x34f9f8: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9f4) {
            ctx->pc = 0x34FEE8u;
            goto label_34fee8;
        }
    }
    ctx->pc = 0x34F9FCu;
    // 0x34f9fc: 0x10440120  beq         $v0, $a0, . + 4 + (0x120 << 2)
    ctx->pc = 0x34F9FCu;
    {
        const bool branch_taken_0x34f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x34FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F9FCu;
        // 0x34fa00: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9fc) {
            ctx->pc = 0x34FE80u;
            goto label_34fe80;
        }
    }
    ctx->pc = 0x34FA04u;
    // 0x34fa04: 0x10430114  beq         $v0, $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x34FA04u;
    {
        const bool branch_taken_0x34fa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34fa04) {
            ctx->pc = 0x34FE58u;
            goto label_34fe58;
        }
    }
    ctx->pc = 0x34FA0Cu;
    // 0x34fa0c: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x34fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x34fa10: 0x10430105  beq         $v0, $v1, . + 4 + (0x105 << 2)
    ctx->pc = 0x34FA10u;
    {
        const bool branch_taken_0x34fa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA10u;
        // 0x34fa14: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa10) {
            ctx->pc = 0x34FE28u;
            goto label_34fe28;
        }
    }
    ctx->pc = 0x34FA18u;
    // 0x34fa18: 0x10430101  beq         $v0, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x34FA18u;
    {
        const bool branch_taken_0x34fa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34fa18) {
            ctx->pc = 0x34FE20u;
            goto label_34fe20;
        }
    }
    ctx->pc = 0x34FA20u;
    // 0x34fa20: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x34fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x34fa24: 0x104300ec  beq         $v0, $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x34FA24u;
    {
        const bool branch_taken_0x34fa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA24u;
        // 0x34fa28: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa24) {
            ctx->pc = 0x34FDD8u;
            goto label_34fdd8;
        }
    }
    ctx->pc = 0x34FA2Cu;
    // 0x34fa2c: 0x104300ce  beq         $v0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x34FA2Cu;
    {
        const bool branch_taken_0x34fa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34fa2c) {
            ctx->pc = 0x34FD68u;
            goto label_34fd68;
        }
    }
    ctx->pc = 0x34FA34u;
    // 0x34fa34: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x34fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x34fa38: 0x10430083  beq         $v0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x34FA38u;
    {
        const bool branch_taken_0x34fa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA38u;
        // 0x34fa3c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa38) {
            ctx->pc = 0x34FC48u;
            goto label_34fc48;
        }
    }
    ctx->pc = 0x34FA40u;
    // 0x34fa40: 0x10430055  beq         $v0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x34FA40u;
    {
        const bool branch_taken_0x34fa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34fa40) {
            ctx->pc = 0x34FB98u;
            goto label_34fb98;
        }
    }
    ctx->pc = 0x34FA48u;
    // 0x34fa48: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34fa4c: 0x1043003a  beq         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x34FA4Cu;
    {
        const bool branch_taken_0x34fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA4Cu;
        // 0x34fa50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa4c) {
            ctx->pc = 0x34FB38u;
            goto label_34fb38;
        }
    }
    ctx->pc = 0x34FA54u;
    // 0x34fa54: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34FA54u;
    {
        const bool branch_taken_0x34fa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34fa54) {
            ctx->pc = 0x34FA88u;
            goto label_34fa88;
        }
    }
    ctx->pc = 0x34FA5Cu;
    // 0x34fa5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34FA5Cu;
    {
        const bool branch_taken_0x34fa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fa5c) {
            ctx->pc = 0x34FA70u;
            goto label_34fa70;
        }
    }
    ctx->pc = 0x34FA64u;
    // 0x34fa64: 0x100002a6  b           . + 4 + (0x2A6 << 2)
    ctx->pc = 0x34FA64u;
    {
        const bool branch_taken_0x34fa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fa64) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FA6Cu;
    // 0x34fa6c: 0x0  nop
    ctx->pc = 0x34fa6cu;
    // NOP
label_34fa70:
    // 0x34fa70: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x34fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x34fa74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa78: 0xc0d42d8  jal         func_350B60
    ctx->pc = 0x34FA78u;
    SET_GPR_U32(ctx, 31, 0x34FA80u);
    ctx->pc = 0x34FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FA78u;
    // 0x34fa7c: 0x3445030f  ori         $a1, $v0, 0x30F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    ctx->in_delay_slot = false;
    ctx->pc = 0x350B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B60u, 0x34FA78u, 0x34FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA80u;
label_34fa80:
    // 0x34fa80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fa84: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x34fa84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
label_34fa88:
    // 0x34fa88: 0xc0d42e8  jal         func_350BA0
    ctx->pc = 0x34FA88u;
    SET_GPR_U32(ctx, 31, 0x34FA90u);
    ctx->pc = 0x34FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FA88u;
    // 0x34fa8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350BA0u, 0x34FA88u, 0x34FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA90u;
label_34fa90:
    // 0x34fa90: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FA90u;
    {
        const bool branch_taken_0x34fa90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA90u;
        // 0x34fa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa90) {
            ctx->pc = 0x34FAA0u;
            goto label_34faa0;
        }
    }
    ctx->pc = 0x34FA98u;
    // 0x34fa98: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34FA98u;
    SET_GPR_U32(ctx, 31, 0x34FAA0u);
    ctx->pc = 0x34FA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FA98u;
    // 0x34fa9c: 0x2405152a  addiu       $a1, $zero, 0x152A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5418));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34FA98u, 0x34FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FAA0u;
label_34faa0:
    // 0x34faa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34faa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34faa4: 0xc0d4224  jal         func_350890
    ctx->pc = 0x34FAA4u;
    SET_GPR_U32(ctx, 31, 0x34FAACu);
    ctx->pc = 0x34FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FAA4u;
    // 0x34faa8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x34FAA4u, 0x34FAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FAACu;
label_34faac:
    // 0x34faac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34fab0: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34FAB0u;
    {
        const bool branch_taken_0x34fab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAB0u;
        // 0x34fab4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fab0) {
            ctx->pc = 0x34FB28u;
            goto label_34fb28;
        }
    }
    ctx->pc = 0x34FAB8u;
    // 0x34fab8: 0x10440291  beq         $v0, $a0, . + 4 + (0x291 << 2)
    ctx->pc = 0x34FAB8u;
    {
        const bool branch_taken_0x34fab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x34fab8) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FAC0u;
    // 0x34fac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FAC0u;
    {
        const bool branch_taken_0x34fac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fac0) {
            ctx->pc = 0x34FAD0u;
            goto label_34fad0;
        }
    }
    ctx->pc = 0x34FAC8u;
    // 0x34fac8: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x34FAC8u;
    {
        const bool branch_taken_0x34fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fac8) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FAD0u;
label_34fad0:
    // 0x34fad0: 0x9223002c  lbu         $v1, 0x2C($s1)
    ctx->pc = 0x34fad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x34fad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34fad8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x34FAD8u;
    {
        const bool branch_taken_0x34fad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34fad8) {
            ctx->pc = 0x34FB18u;
            goto label_34fb18;
        }
    }
    ctx->pc = 0x34FAE0u;
    // 0x34fae0: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34FAE0u;
    {
        const bool branch_taken_0x34fae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x34fae0) {
            ctx->pc = 0x34FB08u;
            goto label_34fb08;
        }
    }
    ctx->pc = 0x34FAE8u;
    // 0x34fae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FAE8u;
    {
        const bool branch_taken_0x34fae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fae8) {
            ctx->pc = 0x34FAF8u;
            goto label_34faf8;
        }
    }
    ctx->pc = 0x34FAF0u;
    // 0x34faf0: 0x10000283  b           . + 4 + (0x283 << 2)
    ctx->pc = 0x34FAF0u;
    {
        const bool branch_taken_0x34faf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34faf0) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FAF8u;
label_34faf8:
    // 0x34faf8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34fafc: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x34FAFCu;
    {
        const bool branch_taken_0x34fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAFCu;
        // 0x34fb00: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fafc) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FB04u;
    // 0x34fb04: 0x0  nop
    ctx->pc = 0x34fb04u;
    // NOP
label_34fb08:
    // 0x34fb08: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x34fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34fb0c: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x34FB0Cu;
    {
        const bool branch_taken_0x34fb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB0Cu;
        // 0x34fb10: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb0c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FB14u;
    // 0x34fb14: 0x0  nop
    ctx->pc = 0x34fb14u;
    // NOP
label_34fb18:
    // 0x34fb18: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x34fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x34fb1c: 0x10000278  b           . + 4 + (0x278 << 2)
    ctx->pc = 0x34FB1Cu;
    {
        const bool branch_taken_0x34fb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB1Cu;
        // 0x34fb20: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb1c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FB24u;
    // 0x34fb24: 0x0  nop
    ctx->pc = 0x34fb24u;
    // NOP
label_34fb28:
    // 0x34fb28: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x34fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34fb2c: 0x10000274  b           . + 4 + (0x274 << 2)
    ctx->pc = 0x34FB2Cu;
    {
        const bool branch_taken_0x34fb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB2Cu;
        // 0x34fb30: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb2c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FB34u;
    // 0x34fb34: 0x0  nop
    ctx->pc = 0x34fb34u;
    // NOP
label_34fb38:
    // 0x34fb38: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FB38u;
    {
        const bool branch_taken_0x34fb38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB38u;
        // 0x34fb3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb38) {
            ctx->pc = 0x34FB48u;
            goto label_34fb48;
        }
    }
    ctx->pc = 0x34FB40u;
    // 0x34fb40: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34FB40u;
    SET_GPR_U32(ctx, 31, 0x34FB48u);
    ctx->pc = 0x34FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FB40u;
    // 0x34fb44: 0x2405153c  addiu       $a1, $zero, 0x153C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34FB40u, 0x34FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FB48u;
label_34fb48:
    // 0x34fb48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fb4c: 0xc0d4224  jal         func_350890
    ctx->pc = 0x34FB4Cu;
    SET_GPR_U32(ctx, 31, 0x34FB54u);
    ctx->pc = 0x34FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FB4Cu;
    // 0x34fb50: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x34FB4Cu, 0x34FB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FB54u;
label_34fb54:
    // 0x34fb54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34fb58: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34FB58u;
    {
        const bool branch_taken_0x34fb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB58u;
        // 0x34fb5c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb58) {
            ctx->pc = 0x34FB90u;
            goto label_34fb90;
        }
    }
    ctx->pc = 0x34FB60u;
    // 0x34fb60: 0x10430267  beq         $v0, $v1, . + 4 + (0x267 << 2)
    ctx->pc = 0x34FB60u;
    {
        const bool branch_taken_0x34fb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34fb60) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FB68u;
    // 0x34fb68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FB68u;
    {
        const bool branch_taken_0x34fb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fb68) {
            ctx->pc = 0x34FB78u;
            goto label_34fb78;
        }
    }
    ctx->pc = 0x34FB70u;
    // 0x34fb70: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x34FB70u;
    {
        const bool branch_taken_0x34fb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fb70) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FB78u;
label_34fb78:
    // 0x34fb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fb7c: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34FB7Cu;
    SET_GPR_U32(ctx, 31, 0x34FB84u);
    ctx->pc = 0x34FB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FB7Cu;
    // 0x34fb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34FB7Cu, 0x34FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FB84u;
label_34fb84:
    // 0x34fb84: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34fb88: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x34FB88u;
    {
        const bool branch_taken_0x34fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB88u;
        // 0x34fb8c: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb88) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FB90u;
label_34fb90:
    // 0x34fb90: 0x1000025b  b           . + 4 + (0x25B << 2)
    ctx->pc = 0x34FB90u;
    {
        const bool branch_taken_0x34fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB90u;
        // 0x34fb94: 0xa2200029  sb          $zero, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb90) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FB98u;
label_34fb98:
    // 0x34fb98: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FB98u;
    {
        const bool branch_taken_0x34fb98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FB98u;
        // 0x34fb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb98) {
            ctx->pc = 0x34FBA8u;
            goto label_34fba8;
        }
    }
    ctx->pc = 0x34FBA0u;
    // 0x34fba0: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34FBA0u;
    SET_GPR_U32(ctx, 31, 0x34FBA8u);
    ctx->pc = 0x34FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FBA0u;
    // 0x34fba4: 0x2405155c  addiu       $a1, $zero, 0x155C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34FBA0u, 0x34FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FBA8u;
label_34fba8:
    // 0x34fba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fbac: 0xc0d4224  jal         func_350890
    ctx->pc = 0x34FBACu;
    SET_GPR_U32(ctx, 31, 0x34FBB4u);
    ctx->pc = 0x34FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FBACu;
    // 0x34fbb0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x34FBACu, 0x34FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FBB4u;
label_34fbb4:
    // 0x34fbb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34fbb8: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34FBB8u;
    {
        const bool branch_taken_0x34fbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBB8u;
        // 0x34fbbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fbb8) {
            ctx->pc = 0x34FC30u;
            goto label_34fc30;
        }
    }
    ctx->pc = 0x34FBC0u;
    // 0x34fbc0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34FBC0u;
    {
        const bool branch_taken_0x34fbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34fbc0) {
            ctx->pc = 0x34FBE8u;
            goto label_34fbe8;
        }
    }
    ctx->pc = 0x34FBC8u;
    // 0x34fbc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FBC8u;
    {
        const bool branch_taken_0x34fbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fbc8) {
            ctx->pc = 0x34FBD8u;
            goto label_34fbd8;
        }
    }
    ctx->pc = 0x34FBD0u;
    // 0x34fbd0: 0x1000024b  b           . + 4 + (0x24B << 2)
    ctx->pc = 0x34FBD0u;
    {
        const bool branch_taken_0x34fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fbd0) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FBD8u;
label_34fbd8:
    // 0x34fbd8: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x34fbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fbdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fbe0: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x34FBE0u;
    {
        const bool branch_taken_0x34fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FBE0u;
        // 0x34fbe4: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fbe0) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FBE8u;
label_34fbe8:
    // 0x34fbe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fbec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x34fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34fbf0: 0xc0d37d0  jal         func_34DF40
    ctx->pc = 0x34FBF0u;
    SET_GPR_U32(ctx, 31, 0x34FBF8u);
    ctx->pc = 0x34FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FBF0u;
    // 0x34fbf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF40u, 0x34FBF0u, 0x34FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FBF8u;
label_34fbf8:
    // 0x34fbf8: 0x10400241  beqz        $v0, . + 4 + (0x241 << 2)
    ctx->pc = 0x34FBF8u;
    {
        const bool branch_taken_0x34fbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fbf8) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FC00u;
    // 0x34fc00: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x34fc00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x34fc04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34fc08: 0x1483023d  bne         $a0, $v1, . + 4 + (0x23D << 2)
    ctx->pc = 0x34FC08u;
    {
        const bool branch_taken_0x34fc08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34fc08) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FC10u;
    // 0x34fc10: 0xa0440019  sb          $a0, 0x19($v0)
    ctx->pc = 0x34fc10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fc14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34fc18: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34fc18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34fc1c: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x34fc1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fc20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fc24: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x34FC24u;
    {
        const bool branch_taken_0x34fc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC24u;
        // 0x34fc28: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fc24) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FC2Cu;
    // 0x34fc2c: 0x0  nop
    ctx->pc = 0x34fc2cu;
    // NOP
label_34fc30:
    // 0x34fc30: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x34fc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x34fc34: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x34fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x34fc38: 0xa222002a  sb          $v0, 0x2A($s1)
    ctx->pc = 0x34fc38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x34fc3c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x34fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x34fc40: 0x1000022f  b           . + 4 + (0x22F << 2)
    ctx->pc = 0x34FC40u;
    {
        const bool branch_taken_0x34fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC40u;
        // 0x34fc44: 0xa2200029  sb          $zero, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fc40) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FC48u;
label_34fc48:
    // 0x34fc48: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FC48u;
    {
        const bool branch_taken_0x34fc48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC48u;
        // 0x34fc4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fc48) {
            ctx->pc = 0x34FC58u;
            goto label_34fc58;
        }
    }
    ctx->pc = 0x34FC50u;
    // 0x34fc50: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34FC50u;
    SET_GPR_U32(ctx, 31, 0x34FC58u);
    ctx->pc = 0x34FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FC50u;
    // 0x34fc54: 0x2405155d  addiu       $a1, $zero, 0x155D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34FC50u, 0x34FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC58u;
label_34fc58:
    // 0x34fc58: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34fc5c: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x34fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x34fc60: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34FC60u;
    SET_GPR_U32(ctx, 31, 0x34FC68u);
    ctx->pc = 0x34FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FC60u;
    // 0x34fc64: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34FC60u, 0x34FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC68u;
label_34fc68:
    // 0x34fc68: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x34fc68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34fc6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc70: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x34fc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x34fc74: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34fc78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34fc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34fc7c: 0x24427d50  addiu       $v0, $v0, 0x7D50
    ctx->pc = 0x34fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32080));
    // 0x34fc80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34fc84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fc88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fc8c: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x34FC8Cu;
    SET_GPR_U32(ctx, 31, 0x34FC94u);
    ctx->pc = 0x34FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FC8Cu;
    // 0x34fc90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x34FC8Cu, 0x34FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FC94u;
label_34fc94:
    // 0x34fc94: 0x1040021a  beqz        $v0, . + 4 + (0x21A << 2)
    ctx->pc = 0x34FC94u;
    {
        const bool branch_taken_0x34fc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FC94u;
        // 0x34fc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fc94) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FC9Cu;
    // 0x34fc9c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x34fc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34fca0: 0xc0d37d0  jal         func_34DF40
    ctx->pc = 0x34FCA0u;
    SET_GPR_U32(ctx, 31, 0x34FCA8u);
    ctx->pc = 0x34FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FCA0u;
    // 0x34fca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF40u, 0x34FCA0u, 0x34FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FCA8u;
label_34fca8:
    // 0x34fca8: 0x8224002b  lb          $a0, 0x2B($s1)
    ctx->pc = 0x34fca8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x34fcac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fcb0: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x34FCB0u;
    {
        const bool branch_taken_0x34fcb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FCB0u;
        // 0x34fcb4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fcb0) {
            ctx->pc = 0x34FD30u;
            goto label_34fd30;
        }
    }
    ctx->pc = 0x34FCB8u;
    // 0x34fcb8: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34FCB8u;
    {
        const bool branch_taken_0x34fcb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34fcb8) {
            ctx->pc = 0x34FD30u;
            goto label_34fd30;
        }
    }
    ctx->pc = 0x34FCC0u;
    // 0x34fcc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FCC0u;
    {
        const bool branch_taken_0x34fcc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fcc0) {
            ctx->pc = 0x34FCD0u;
            goto label_34fcd0;
        }
    }
    ctx->pc = 0x34FCC8u;
    // 0x34fcc8: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x34FCC8u;
    {
        const bool branch_taken_0x34fcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fcc8) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FCD0u;
label_34fcd0:
    // 0x34fcd0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34fcd4: 0xa223002d  sb          $v1, 0x2D($s1)
    ctx->pc = 0x34fcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x34fcd8: 0x92230027  lbu         $v1, 0x27($s1)
    ctx->pc = 0x34fcd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x34fcdc: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x34fcdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34fce0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FCE0u;
    {
        const bool branch_taken_0x34fce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fce0) {
            ctx->pc = 0x34FCF8u;
            goto label_34fcf8;
        }
    }
    ctx->pc = 0x34FCE8u;
    // 0x34fce8: 0x92230029  lbu         $v1, 0x29($s1)
    ctx->pc = 0x34fce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fcec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34fcf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34FCF0u;
    {
        const bool branch_taken_0x34fcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FCF0u;
        // 0x34fcf4: 0xa2230029  sb          $v1, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fcf0) {
            ctx->pc = 0x34FD08u;
            goto label_34fd08;
        }
    }
    ctx->pc = 0x34FCF8u;
label_34fcf8:
    // 0x34fcf8: 0xa220002e  sb          $zero, 0x2E($s1)
    ctx->pc = 0x34fcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fcfc: 0x92230029  lbu         $v1, 0x29($s1)
    ctx->pc = 0x34fcfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fd00: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x34fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x34fd04: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x34fd04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
label_34fd08:
    // 0x34fd08: 0x104001fd  beqz        $v0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x34FD08u;
    {
        const bool branch_taken_0x34fd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd08) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FD10u;
    // 0x34fd10: 0x90430019  lbu         $v1, 0x19($v0)
    ctx->pc = 0x34fd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x34fd14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd18: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x34fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34fd1c: 0xc0d4224  jal         func_350890
    ctx->pc = 0x34FD1Cu;
    SET_GPR_U32(ctx, 31, 0x34FD24u);
    ctx->pc = 0x34FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD1Cu;
    // 0x34fd20: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x34FD1Cu, 0x34FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD24u;
label_34fd24:
    // 0x34fd24: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x34FD24u;
    {
        const bool branch_taken_0x34fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd24) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FD2Cu;
    // 0x34fd2c: 0x0  nop
    ctx->pc = 0x34fd2cu;
    // NOP
label_34fd30:
    // 0x34fd30: 0x92230029  lbu         $v1, 0x29($s1)
    ctx->pc = 0x34fd30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fd34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x34fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x34fd38: 0x104001f1  beqz        $v0, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x34FD38u;
    {
        const bool branch_taken_0x34fd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD38u;
        // 0x34fd3c: 0xa2230029  sb          $v1, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd38) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FD40u;
    // 0x34fd40: 0x90430019  lbu         $v1, 0x19($v0)
    ctx->pc = 0x34fd40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x34fd44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd48: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x34fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x34fd4c: 0xc0d4224  jal         func_350890
    ctx->pc = 0x34FD4Cu;
    SET_GPR_U32(ctx, 31, 0x34FD54u);
    ctx->pc = 0x34FD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD4Cu;
    // 0x34fd50: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x34FD4Cu, 0x34FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD54u;
label_34fd54:
    // 0x34fd54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd58: 0xc0d4224  jal         func_350890
    ctx->pc = 0x34FD58u;
    SET_GPR_U32(ctx, 31, 0x34FD60u);
    ctx->pc = 0x34FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD58u;
    // 0x34fd5c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x34FD58u, 0x34FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD60u;
label_34fd60:
    // 0x34fd60: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x34FD60u;
    {
        const bool branch_taken_0x34fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd60) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FD68u;
label_34fd68:
    // 0x34fd68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd6c: 0xc0d4224  jal         func_350890
    ctx->pc = 0x34FD6Cu;
    SET_GPR_U32(ctx, 31, 0x34FD74u);
    ctx->pc = 0x34FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD6Cu;
    // 0x34fd70: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x34FD6Cu, 0x34FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD74u;
label_34fd74:
    // 0x34fd74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34fd78: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x34FD78u;
    {
        const bool branch_taken_0x34fd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD78u;
        // 0x34fd7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd78) {
            ctx->pc = 0x34FDC8u;
            goto label_34fdc8;
        }
    }
    ctx->pc = 0x34FD80u;
    // 0x34fd80: 0x104301df  beq         $v0, $v1, . + 4 + (0x1DF << 2)
    ctx->pc = 0x34FD80u;
    {
        const bool branch_taken_0x34fd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34fd80) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FD88u;
    // 0x34fd88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FD88u;
    {
        const bool branch_taken_0x34fd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd88) {
            ctx->pc = 0x34FD98u;
            goto label_34fd98;
        }
    }
    ctx->pc = 0x34FD90u;
    // 0x34fd90: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x34FD90u;
    {
        const bool branch_taken_0x34fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd90) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FD98u;
label_34fd98:
    // 0x34fd98: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x34fd98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x34fd9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34fd9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34fda0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FDA0u;
    {
        const bool branch_taken_0x34fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fda0) {
            ctx->pc = 0x34FDB8u;
            goto label_34fdb8;
        }
    }
    ctx->pc = 0x34FDA8u;
    // 0x34fda8: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x34fda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fdac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fdb0: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x34FDB0u;
    {
        const bool branch_taken_0x34fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FDB0u;
        // 0x34fdb4: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fdb0) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FDB8u;
label_34fdb8:
    // 0x34fdb8: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x34fdb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fdbc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x34fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x34fdc0: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x34FDC0u;
    {
        const bool branch_taken_0x34fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FDC0u;
        // 0x34fdc4: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fdc0) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FDC8u;
label_34fdc8:
    // 0x34fdc8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x34fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34fdcc: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x34FDCCu;
    {
        const bool branch_taken_0x34fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FDCCu;
        // 0x34fdd0: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fdcc) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FDD4u;
    // 0x34fdd4: 0x0  nop
    ctx->pc = 0x34fdd4u;
    // NOP
label_34fdd8:
    // 0x34fdd8: 0xc0d3b30  jal         func_34ECC0
    ctx->pc = 0x34FDD8u;
    SET_GPR_U32(ctx, 31, 0x34FDE0u);
    ctx->pc = 0x34FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FDD8u;
    // 0x34fddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ECC0u, 0x34FDD8u, 0x34FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FDE0u;
label_34fde0:
    // 0x34fde0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34fde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fde4: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34FDE4u;
    SET_GPR_U32(ctx, 31, 0x34FDECu);
    ctx->pc = 0x34FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FDE4u;
    // 0x34fde8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34FDE4u, 0x34FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FDECu;
label_34fdec:
    // 0x34fdec: 0xc0d3af0  jal         func_34EBC0
    ctx->pc = 0x34FDECu;
    SET_GPR_U32(ctx, 31, 0x34FDF4u);
    ctx->pc = 0x34FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FDECu;
    // 0x34fdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EBC0u, 0x34FDECu, 0x34FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FDF4u;
label_34fdf4:
    // 0x34fdf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fdf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34fdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fdfc: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x34FDFCu;
    SET_GPR_U32(ctx, 31, 0x34FE04u);
    ctx->pc = 0x34FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FDFCu;
    // 0x34fe00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x34FDFCu, 0x34FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FE04u;
label_34fe04:
    // 0x34fe04: 0x104001be  beqz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x34FE04u;
    {
        const bool branch_taken_0x34fe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fe04) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FE0Cu;
    // 0x34fe0c: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x34fe0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fe10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fe14: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x34FE14u;
    {
        const bool branch_taken_0x34fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE14u;
        // 0x34fe18: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe14) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FE1Cu;
    // 0x34fe1c: 0x0  nop
    ctx->pc = 0x34fe1cu;
    // NOP
label_34fe20:
    // 0x34fe20: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x34FE20u;
    {
        const bool branch_taken_0x34fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE20u;
        // 0x34fe24: 0xa2240029  sb          $a0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe20) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FE28u;
label_34fe28:
    // 0x34fe28: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x34fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x34fe2c: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x34fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x34fe30: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x34fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34fe34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34fe34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fe38: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x34FE38u;
    SET_GPR_U32(ctx, 31, 0x34FE40u);
    ctx->pc = 0x34FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FE38u;
    // 0x34fe3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x34FE38u, 0x34FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FE40u;
label_34fe40:
    // 0x34fe40: 0x104001af  beqz        $v0, . + 4 + (0x1AF << 2)
    ctx->pc = 0x34FE40u;
    {
        const bool branch_taken_0x34fe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fe40) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FE48u;
    // 0x34fe48: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x34fe48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fe4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fe50: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x34FE50u;
    {
        const bool branch_taken_0x34fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE50u;
        // 0x34fe54: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe50) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FE58u;
label_34fe58:
    // 0x34fe58: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x34fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x34fe5c: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x34FE5Cu;
    SET_GPR_U32(ctx, 31, 0x34FE64u);
    ctx->pc = 0x34FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FE5Cu;
    // 0x34fe60: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x34FE5Cu, 0x34FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FE64u;
label_34fe64:
    // 0x34fe64: 0x144001a6  bnez        $v0, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x34FE64u;
    {
        const bool branch_taken_0x34fe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fe64) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FE6Cu;
    // 0x34fe6c: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x34fe6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fe70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fe74: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x34FE74u;
    {
        const bool branch_taken_0x34fe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE74u;
        // 0x34fe78: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe74) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FE7Cu;
    // 0x34fe7c: 0x0  nop
    ctx->pc = 0x34fe7cu;
    // NOP
label_34fe80:
    // 0x34fe80: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FE80u;
    {
        const bool branch_taken_0x34fe80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE80u;
        // 0x34fe84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe80) {
            ctx->pc = 0x34FE90u;
            goto label_34fe90;
        }
    }
    ctx->pc = 0x34FE88u;
    // 0x34fe88: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34FE88u;
    SET_GPR_U32(ctx, 31, 0x34FE90u);
    ctx->pc = 0x34FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FE88u;
    // 0x34fe8c: 0x2405155a  addiu       $a1, $zero, 0x155A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5466));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34FE88u, 0x34FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FE90u;
label_34fe90:
    // 0x34fe90: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34fe94: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x34fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x34fe98: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34FE98u;
    SET_GPR_U32(ctx, 31, 0x34FEA0u);
    ctx->pc = 0x34FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FE98u;
    // 0x34fe9c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34FE98u, 0x34FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FEA0u;
label_34fea0:
    // 0x34fea0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x34fea0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34fea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fea8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x34fea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x34feac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34feb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34feb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34feb4: 0x24427d00  addiu       $v0, $v0, 0x7D00
    ctx->pc = 0x34feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32000));
    // 0x34feb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34febc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fec0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34fec4: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x34FEC4u;
    SET_GPR_U32(ctx, 31, 0x34FECCu);
    ctx->pc = 0x34FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FEC4u;
    // 0x34fec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x34FEC4u, 0x34FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FECCu;
label_34fecc:
    // 0x34fecc: 0x1040018c  beqz        $v0, . + 4 + (0x18C << 2)
    ctx->pc = 0x34FECCu;
    {
        const bool branch_taken_0x34fecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fecc) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FED4u;
    // 0x34fed4: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x34fed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x34fed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fedc: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x34FEDCu;
    {
        const bool branch_taken_0x34fedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FEDCu;
        // 0x34fee0: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fedc) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FEE4u;
    // 0x34fee4: 0x0  nop
    ctx->pc = 0x34fee4u;
    // NOP
label_34fee8:
    // 0x34fee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34feec: 0xc0d4318  jal         func_350C60
    ctx->pc = 0x34FEECu;
    SET_GPR_U32(ctx, 31, 0x34FEF4u);
    ctx->pc = 0x34FEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FEECu;
    // 0x34fef0: 0xa2200029  sb          $zero, 0x29($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C60u, 0x34FEECu, 0x34FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FEF4u;
label_34fef4:
    // 0x34fef4: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x34fef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x34fef8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34fef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34fefc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34FEFCu;
    {
        const bool branch_taken_0x34fefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fefc) {
            ctx->pc = 0x34FF20u;
            goto label_34ff20;
        }
    }
    ctx->pc = 0x34FF04u;
    // 0x34ff04: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x34ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x34ff08: 0xc0d342c  jal         func_34D0B0
    ctx->pc = 0x34FF08u;
    SET_GPR_U32(ctx, 31, 0x34FF10u);
    ctx->pc = 0x34FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FF08u;
    // 0x34ff0c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D0B0u, 0x34FF08u, 0x34FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FF10u;
label_34ff10:
    // 0x34ff10: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x34ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x34ff14: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x34ff14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ff18: 0xc0ce240  jal         func_338900
    ctx->pc = 0x34FF18u;
    SET_GPR_U32(ctx, 31, 0x34FF20u);
    ctx->pc = 0x34FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FF18u;
    // 0x34ff1c: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338900u, 0x34FF18u, 0x34FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FF20u;
label_34ff20:
    // 0x34ff20: 0xc0d3a18  jal         func_34E860
    ctx->pc = 0x34FF20u;
    SET_GPR_U32(ctx, 31, 0x34FF28u);
    ctx->pc = 0x34FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FF20u;
    // 0x34ff24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E860u, 0x34FF20u, 0x34FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FF28u;
label_34ff28:
    // 0x34ff28: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x34FF28u;
    {
        const bool branch_taken_0x34ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF28u;
        // 0x34ff2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff28) {
            ctx->pc = 0x350508u;
            goto label_350508;
        }
    }
    ctx->pc = 0x34FF30u;
label_34ff30:
    // 0x34ff30: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FF30u;
    {
        const bool branch_taken_0x34ff30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF30u;
        // 0x34ff34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff30) {
            ctx->pc = 0x34FF40u;
            goto label_34ff40;
        }
    }
    ctx->pc = 0x34FF38u;
    // 0x34ff38: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34FF38u;
    SET_GPR_U32(ctx, 31, 0x34FF40u);
    ctx->pc = 0x34FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FF38u;
    // 0x34ff3c: 0x24051553  addiu       $a1, $zero, 0x1553 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5459));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34FF38u, 0x34FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FF40u;
label_34ff40:
    // 0x34ff40: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34ff44: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x34ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x34ff48: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34FF48u;
    SET_GPR_U32(ctx, 31, 0x34FF50u);
    ctx->pc = 0x34FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FF48u;
    // 0x34ff4c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34FF48u, 0x34FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FF50u;
label_34ff50:
    // 0x34ff50: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x34ff50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34ff54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ff54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ff58: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x34ff58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x34ff5c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34ff60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34ff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34ff64: 0x24427d08  addiu       $v0, $v0, 0x7D08
    ctx->pc = 0x34ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32008));
    // 0x34ff68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34ff6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34ff70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x34ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ff74: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x34FF74u;
    SET_GPR_U32(ctx, 31, 0x34FF7Cu);
    ctx->pc = 0x34FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FF74u;
    // 0x34ff78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x34FF74u, 0x34FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FF7Cu;
label_34ff7c:
    // 0x34ff7c: 0x10400160  beqz        $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x34FF7Cu;
    {
        const bool branch_taken_0x34ff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ff7c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FF84u;
    // 0x34ff84: 0x8223002b  lb          $v1, 0x2B($s1)
    ctx->pc = 0x34ff84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x34ff88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ff8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34FF8Cu;
    {
        const bool branch_taken_0x34ff8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FF8Cu;
        // 0x34ff90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff8c) {
            ctx->pc = 0x34FFC0u;
            goto label_34ffc0;
        }
    }
    ctx->pc = 0x34FF94u;
    // 0x34ff94: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34FF94u;
    {
        const bool branch_taken_0x34ff94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34ff94) {
            ctx->pc = 0x34FFC0u;
            goto label_34ffc0;
        }
    }
    ctx->pc = 0x34FF9Cu;
    // 0x34ff9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34FF9Cu;
    {
        const bool branch_taken_0x34ff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ff9c) {
            ctx->pc = 0x34FFB0u;
            goto label_34ffb0;
        }
    }
    ctx->pc = 0x34FFA4u;
    // 0x34ffa4: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x34FFA4u;
    {
        const bool branch_taken_0x34ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ffa4) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FFACu;
    // 0x34ffac: 0x0  nop
    ctx->pc = 0x34ffacu;
    // NOP
label_34ffb0:
    // 0x34ffb0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x34ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x34ffb4: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x34FFB4u;
    {
        const bool branch_taken_0x34ffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFB4u;
        // 0x34ffb8: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ffb4) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FFBCu;
    // 0x34ffbc: 0x0  nop
    ctx->pc = 0x34ffbcu;
    // NOP
label_34ffc0:
    // 0x34ffc0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x34ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x34ffc4: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x34FFC4u;
    {
        const bool branch_taken_0x34ffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFC4u;
        // 0x34ffc8: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ffc4) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x34FFCCu;
    // 0x34ffcc: 0x0  nop
    ctx->pc = 0x34ffccu;
    // NOP
label_34ffd0:
    // 0x34ffd0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FFD0u;
    {
        const bool branch_taken_0x34ffd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FFD0u;
        // 0x34ffd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ffd0) {
            ctx->pc = 0x34FFE0u;
            goto label_34ffe0;
        }
    }
    ctx->pc = 0x34FFD8u;
    // 0x34ffd8: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x34FFD8u;
    SET_GPR_U32(ctx, 31, 0x34FFE0u);
    ctx->pc = 0x34FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FFD8u;
    // 0x34ffdc: 0x2405155b  addiu       $a1, $zero, 0x155B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5467));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x34FFD8u, 0x34FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FFE0u;
label_34ffe0:
    // 0x34ffe0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34ffe4: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x34ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x34ffe8: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34FFE8u;
    SET_GPR_U32(ctx, 31, 0x34FFF0u);
    ctx->pc = 0x34FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FFE8u;
    // 0x34ffec: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34FFE8u, 0x34FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FFF0u;
label_34fff0:
    // 0x34fff0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x34fff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34fff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fff8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x34fff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x34fffc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x350000: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x350000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x350004: 0x24427cf8  addiu       $v0, $v0, 0x7CF8
    ctx->pc = 0x350004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31992));
    // 0x350008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x350008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35000c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350010: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x350010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350014: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x350014u;
    SET_GPR_U32(ctx, 31, 0x35001Cu);
    ctx->pc = 0x350018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350014u;
    // 0x350018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x350014u, 0x35001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35001Cu;
label_35001c:
    // 0x35001c: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x35001Cu;
    {
        const bool branch_taken_0x35001c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35001c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350024u;
    // 0x350024: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x350024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x350028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35002c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x35002cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x350030: 0xa223002a  sb          $v1, 0x2A($s1)
    ctx->pc = 0x350030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x350034: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x350034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x350038: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x350038u;
    {
        const bool branch_taken_0x350038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350038u;
        // 0x35003c: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350038) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350040u;
label_350040:
    // 0x350040: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350040u;
    {
        const bool branch_taken_0x350040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x350044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350040u;
        // 0x350044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350040) {
            ctx->pc = 0x350050u;
            goto label_350050;
        }
    }
    ctx->pc = 0x350048u;
    // 0x350048: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x350048u;
    SET_GPR_U32(ctx, 31, 0x350050u);
    ctx->pc = 0x35004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350048u;
    // 0x35004c: 0x24051554  addiu       $a1, $zero, 0x1554 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x350048u, 0x350050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350050u;
label_350050:
    // 0x350050: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x350050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x350054: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x350054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x350058: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x350058u;
    SET_GPR_U32(ctx, 31, 0x350060u);
    ctx->pc = 0x35005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350058u;
    // 0x35005c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x350058u, 0x350060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350060u;
label_350060:
    // 0x350060: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x350060u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x350064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350068: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x350068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x35006c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x350070: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x350070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x350074: 0x24427d10  addiu       $v0, $v0, 0x7D10
    ctx->pc = 0x350074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32016));
    // 0x350078: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x350078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35007c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35007cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350080: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x350080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350084: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x350084u;
    SET_GPR_U32(ctx, 31, 0x35008Cu);
    ctx->pc = 0x350088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350084u;
    // 0x350088: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x350084u, 0x35008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35008Cu;
label_35008c:
    // 0x35008c: 0x1040011c  beqz        $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x35008Cu;
    {
        const bool branch_taken_0x35008c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35008c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350094u;
    // 0x350094: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x350094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x350098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x350098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35009c: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x35009Cu;
    {
        const bool branch_taken_0x35009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3500A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35009Cu;
        // 0x3500a0: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35009c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3500A4u;
    // 0x3500a4: 0x0  nop
    ctx->pc = 0x3500a4u;
    // NOP
label_3500a8:
    // 0x3500a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3500A8u;
    {
        const bool branch_taken_0x3500a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3500ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500A8u;
        // 0x3500ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3500a8) {
            ctx->pc = 0x3500B8u;
            goto label_3500b8;
        }
    }
    ctx->pc = 0x3500B0u;
    // 0x3500b0: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x3500B0u;
    SET_GPR_U32(ctx, 31, 0x3500B8u);
    ctx->pc = 0x3500B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3500B0u;
    // 0x3500b4: 0x24051556  addiu       $a1, $zero, 0x1556 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5462));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x3500B0u, 0x3500B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3500B8u;
label_3500b8:
    // 0x3500b8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3500b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3500bc: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x3500bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x3500c0: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x3500C0u;
    SET_GPR_U32(ctx, 31, 0x3500C8u);
    ctx->pc = 0x3500C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3500C0u;
    // 0x3500c4: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x3500C0u, 0x3500C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3500C8u;
label_3500c8:
    // 0x3500c8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3500c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3500cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3500ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3500d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3500d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3500d4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3500d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3500d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3500d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3500dc: 0x24427d18  addiu       $v0, $v0, 0x7D18
    ctx->pc = 0x3500dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32024));
    // 0x3500e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3500e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3500e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3500e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3500e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3500e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3500ec: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x3500ECu;
    SET_GPR_U32(ctx, 31, 0x3500F4u);
    ctx->pc = 0x3500F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3500ECu;
    // 0x3500f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x3500ECu, 0x3500F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3500F4u;
label_3500f4:
    // 0x3500f4: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x3500F4u;
    {
        const bool branch_taken_0x3500f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3500f4) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3500FCu;
    // 0x3500fc: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x3500fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x350100: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x350100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x350104: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x350104u;
    {
        const bool branch_taken_0x350104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350104u;
        // 0x350108: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350104) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x35010Cu;
    // 0x35010c: 0x0  nop
    ctx->pc = 0x35010cu;
    // NOP
label_350110:
    // 0x350110: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350110u;
    {
        const bool branch_taken_0x350110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x350114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350110u;
        // 0x350114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350110) {
            ctx->pc = 0x350120u;
            goto label_350120;
        }
    }
    ctx->pc = 0x350118u;
    // 0x350118: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x350118u;
    SET_GPR_U32(ctx, 31, 0x350120u);
    ctx->pc = 0x35011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350118u;
    // 0x35011c: 0x24051555  addiu       $a1, $zero, 0x1555 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5461));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x350118u, 0x350120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350120u;
label_350120:
    // 0x350120: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x350120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x350124: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x350124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x350128: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x350128u;
    SET_GPR_U32(ctx, 31, 0x350130u);
    ctx->pc = 0x35012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350128u;
    // 0x35012c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x350128u, 0x350130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350130u;
label_350130:
    // 0x350130: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x350130u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x350134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350138: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x350138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x35013c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x350140: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x350140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x350144: 0x24427d20  addiu       $v0, $v0, 0x7D20
    ctx->pc = 0x350144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32032));
    // 0x350148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x350148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35014c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350150: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x350150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350154: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x350154u;
    SET_GPR_U32(ctx, 31, 0x35015Cu);
    ctx->pc = 0x350158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350154u;
    // 0x350158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x350154u, 0x35015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35015Cu;
label_35015c:
    // 0x35015c: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x35015Cu;
    {
        const bool branch_taken_0x35015c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35015c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350164u;
    // 0x350164: 0x8223002b  lb          $v1, 0x2B($s1)
    ctx->pc = 0x350164u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x350168: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x350168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35016c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x35016Cu;
    {
        const bool branch_taken_0x35016c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x350170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35016Cu;
        // 0x350170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35016c) {
            ctx->pc = 0x3501A8u;
            goto label_3501a8;
        }
    }
    ctx->pc = 0x350174u;
    // 0x350174: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x350174u;
    {
        const bool branch_taken_0x350174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x350174) {
            ctx->pc = 0x3501A8u;
            goto label_3501a8;
        }
    }
    ctx->pc = 0x35017Cu;
    // 0x35017c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35017Cu;
    {
        const bool branch_taken_0x35017c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35017c) {
            ctx->pc = 0x350190u;
            goto label_350190;
        }
    }
    ctx->pc = 0x350184u;
    // 0x350184: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x350184u;
    {
        const bool branch_taken_0x350184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350184) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x35018Cu;
    // 0x35018c: 0x0  nop
    ctx->pc = 0x35018cu;
    // NOP
label_350190:
    // 0x350190: 0x24020b40  addiu       $v0, $zero, 0xB40
    ctx->pc = 0x350190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x350194: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x350194u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x350198: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x350198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x35019c: 0xa220002f  sb          $zero, 0x2F($s1)
    ctx->pc = 0x35019cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x3501a0: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x3501A0u;
    {
        const bool branch_taken_0x3501a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3501A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3501A0u;
        // 0x3501a4: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3501a0) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3501A8u;
label_3501a8:
    // 0x3501a8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3501a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3501ac: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x3501ACu;
    {
        const bool branch_taken_0x3501ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3501B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3501ACu;
        // 0x3501b0: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3501ac) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3501B4u;
    // 0x3501b4: 0x0  nop
    ctx->pc = 0x3501b4u;
    // NOP
label_3501b8:
    // 0x3501b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3501b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3501bc: 0xc0d4224  jal         func_350890
    ctx->pc = 0x3501BCu;
    SET_GPR_U32(ctx, 31, 0x3501C4u);
    ctx->pc = 0x3501C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3501BCu;
    // 0x3501c0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x3501BCu, 0x3501C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3501C4u;
label_3501c4:
    // 0x3501c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3501c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3501c8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3501C8u;
    {
        const bool branch_taken_0x3501c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3501CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3501C8u;
        // 0x3501cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3501c8) {
            ctx->pc = 0x3501F8u;
            goto label_3501f8;
        }
    }
    ctx->pc = 0x3501D0u;
    // 0x3501d0: 0x104300cb  beq         $v0, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x3501D0u;
    {
        const bool branch_taken_0x3501d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3501d0) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3501D8u;
    // 0x3501d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3501D8u;
    {
        const bool branch_taken_0x3501d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3501d8) {
            ctx->pc = 0x3501E8u;
            goto label_3501e8;
        }
    }
    ctx->pc = 0x3501E0u;
    // 0x3501e0: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x3501E0u;
    {
        const bool branch_taken_0x3501e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3501e0) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3501E8u;
label_3501e8:
    // 0x3501e8: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x3501e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x3501ec: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x3501ECu;
    {
        const bool branch_taken_0x3501ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3501F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3501ECu;
        // 0x3501f0: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3501ec) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3501F4u;
    // 0x3501f4: 0x0  nop
    ctx->pc = 0x3501f4u;
    // NOP
label_3501f8:
    // 0x3501f8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x3501f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x3501fc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x3501FCu;
    {
        const bool branch_taken_0x3501fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3501FCu;
        // 0x350200: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3501fc) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350204u;
    // 0x350204: 0x0  nop
    ctx->pc = 0x350204u;
    // NOP
label_350208:
    // 0x350208: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350208u;
    {
        const bool branch_taken_0x350208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350208u;
        // 0x35020c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350208) {
            ctx->pc = 0x350218u;
            goto label_350218;
        }
    }
    ctx->pc = 0x350210u;
    // 0x350210: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x350210u;
    SET_GPR_U32(ctx, 31, 0x350218u);
    ctx->pc = 0x350214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350210u;
    // 0x350214: 0x24051557  addiu       $a1, $zero, 0x1557 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5463));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x350210u, 0x350218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350218u;
label_350218:
    // 0x350218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35021c: 0xc0d4224  jal         func_350890
    ctx->pc = 0x35021Cu;
    SET_GPR_U32(ctx, 31, 0x350224u);
    ctx->pc = 0x350220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35021Cu;
    // 0x350220: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x35021Cu, 0x350224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350224u;
label_350224:
    // 0x350224: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x350228: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x350228u;
    {
        const bool branch_taken_0x350228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350228u;
        // 0x35022c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350228) {
            ctx->pc = 0x350298u;
            goto label_350298;
        }
    }
    ctx->pc = 0x350230u;
    // 0x350230: 0x104300b3  beq         $v0, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x350230u;
    {
        const bool branch_taken_0x350230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x350230) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350238u;
    // 0x350238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350238u;
    {
        const bool branch_taken_0x350238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350238) {
            ctx->pc = 0x350248u;
            goto label_350248;
        }
    }
    ctx->pc = 0x350240u;
    // 0x350240: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x350240u;
    {
        const bool branch_taken_0x350240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350240) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350248u;
label_350248:
    // 0x350248: 0x92220027  lbu         $v0, 0x27($s1)
    ctx->pc = 0x350248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x35024c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x35024cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x350250: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x350250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x350254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350254u;
    {
        const bool branch_taken_0x350254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350254u;
        // 0x350258: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350254) {
            ctx->pc = 0x350268u;
            goto label_350268;
        }
    }
    ctx->pc = 0x35025Cu;
    // 0x35025c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x35025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x350260: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x350260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x350264: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x350264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_350268:
    // 0x350268: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x350268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35026c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35026Cu;
    {
        const bool branch_taken_0x35026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35026Cu;
        // 0x350270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35026c) {
            ctx->pc = 0x350288u;
            goto label_350288;
        }
    }
    ctx->pc = 0x350274u;
    // 0x350274: 0xc0d3c54  jal         func_34F150
    ctx->pc = 0x350274u;
    SET_GPR_U32(ctx, 31, 0x35027Cu);
    ctx->pc = 0x34F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F150u, 0x350274u, 0x35027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35027Cu;
label_35027c:
    // 0x35027c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x35027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x350280: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x350280u;
    {
        const bool branch_taken_0x350280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350280u;
        // 0x350284: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350280) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350288u;
label_350288:
    // 0x350288: 0xa220002e  sb          $zero, 0x2E($s1)
    ctx->pc = 0x350288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x35028c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x35028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x350290: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x350290u;
    {
        const bool branch_taken_0x350290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350290u;
        // 0x350294: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350290) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350298u;
label_350298:
    // 0x350298: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x350298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x35029c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x35029Cu;
    {
        const bool branch_taken_0x35029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3502A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35029Cu;
        // 0x3502a0: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35029c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3502A4u;
    // 0x3502a4: 0x0  nop
    ctx->pc = 0x3502a4u;
    // NOP
label_3502a8:
    // 0x3502a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3502A8u;
    {
        const bool branch_taken_0x3502a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3502ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3502A8u;
        // 0x3502ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3502a8) {
            ctx->pc = 0x3502B8u;
            goto label_3502b8;
        }
    }
    ctx->pc = 0x3502B0u;
    // 0x3502b0: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x3502B0u;
    SET_GPR_U32(ctx, 31, 0x3502B8u);
    ctx->pc = 0x3502B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3502B0u;
    // 0x3502b4: 0x24051558  addiu       $a1, $zero, 0x1558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x3502B0u, 0x3502B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3502B8u;
label_3502b8:
    // 0x3502b8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3502b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3502bc: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x3502bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x3502c0: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x3502C0u;
    SET_GPR_U32(ctx, 31, 0x3502C8u);
    ctx->pc = 0x3502C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3502C0u;
    // 0x3502c4: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x3502C0u, 0x3502C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3502C8u;
label_3502c8:
    // 0x3502c8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3502c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3502cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3502ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3502d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3502d4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3502d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3502d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3502d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3502dc: 0x24427d30  addiu       $v0, $v0, 0x7D30
    ctx->pc = 0x3502dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32048));
    // 0x3502e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3502e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3502e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3502e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3502e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3502e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3502ec: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x3502ECu;
    SET_GPR_U32(ctx, 31, 0x3502F4u);
    ctx->pc = 0x3502F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3502ECu;
    // 0x3502f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x3502ECu, 0x3502F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3502F4u;
label_3502f4:
    // 0x3502f4: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x3502F4u;
    {
        const bool branch_taken_0x3502f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3502f4) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3502FCu;
    // 0x3502fc: 0x8223002b  lb          $v1, 0x2B($s1)
    ctx->pc = 0x3502fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x350300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x350300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x350304: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x350304u;
    {
        const bool branch_taken_0x350304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x350308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350304u;
        // 0x350308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350304) {
            ctx->pc = 0x350348u;
            goto label_350348;
        }
    }
    ctx->pc = 0x35030Cu;
    // 0x35030c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35030Cu;
    {
        const bool branch_taken_0x35030c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35030c) {
            ctx->pc = 0x350338u;
            goto label_350338;
        }
    }
    ctx->pc = 0x350314u;
    // 0x350314: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x350314u;
    {
        const bool branch_taken_0x350314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350314) {
            ctx->pc = 0x350328u;
            goto label_350328;
        }
    }
    ctx->pc = 0x35031Cu;
    // 0x35031c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x35031Cu;
    {
        const bool branch_taken_0x35031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35031c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350324u;
    // 0x350324: 0x0  nop
    ctx->pc = 0x350324u;
    // NOP
label_350328:
    // 0x350328: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x350328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x35032c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x35032Cu;
    {
        const bool branch_taken_0x35032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35032Cu;
        // 0x350330: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35032c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350334u;
    // 0x350334: 0x0  nop
    ctx->pc = 0x350334u;
    // NOP
label_350338:
    // 0x350338: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x350338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x35033c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x35033Cu;
    {
        const bool branch_taken_0x35033c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35033Cu;
        // 0x350340: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35033c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350344u;
    // 0x350344: 0x0  nop
    ctx->pc = 0x350344u;
    // NOP
label_350348:
    // 0x350348: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x350348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x35034c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x35034Cu;
    {
        const bool branch_taken_0x35034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35034Cu;
        // 0x350350: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35034c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350354u;
    // 0x350354: 0x0  nop
    ctx->pc = 0x350354u;
    // NOP
label_350358:
    // 0x350358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35035c: 0xc0d4224  jal         func_350890
    ctx->pc = 0x35035Cu;
    SET_GPR_U32(ctx, 31, 0x350364u);
    ctx->pc = 0x350360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35035Cu;
    // 0x350360: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350890u, 0x35035Cu, 0x350364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350364u;
label_350364:
    // 0x350364: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x350368: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x350368u;
    {
        const bool branch_taken_0x350368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350368u;
        // 0x35036c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350368) {
            ctx->pc = 0x3503B0u;
            goto label_3503b0;
        }
    }
    ctx->pc = 0x350370u;
    // 0x350370: 0x10430063  beq         $v0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x350370u;
    {
        const bool branch_taken_0x350370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x350370) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350378u;
    // 0x350378: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350378u;
    {
        const bool branch_taken_0x350378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350378) {
            ctx->pc = 0x350388u;
            goto label_350388;
        }
    }
    ctx->pc = 0x350380u;
    // 0x350380: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x350380u;
    {
        const bool branch_taken_0x350380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350380) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350388u;
label_350388:
    // 0x350388: 0x9222002e  lbu         $v0, 0x2E($s1)
    ctx->pc = 0x350388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x35038c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x35038cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x350390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350390u;
    {
        const bool branch_taken_0x350390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350390u;
        // 0x350394: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350390) {
            ctx->pc = 0x3503A0u;
            goto label_3503a0;
        }
    }
    ctx->pc = 0x350398u;
    // 0x350398: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x350398u;
    {
        const bool branch_taken_0x350398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350398u;
        // 0x35039c: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350398) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3503A0u;
label_3503a0:
    // 0x3503a0: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x3503a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x3503a4: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3503A4u;
    {
        const bool branch_taken_0x3503a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3503A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503A4u;
        // 0x3503a8: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3503a4) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3503ACu;
    // 0x3503ac: 0x0  nop
    ctx->pc = 0x3503acu;
    // NOP
label_3503b0:
    // 0x3503b0: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x3503b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x3503b4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x3503B4u;
    {
        const bool branch_taken_0x3503b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3503B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503B4u;
        // 0x3503b8: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3503b4) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3503BCu;
    // 0x3503bc: 0x0  nop
    ctx->pc = 0x3503bcu;
    // NOP
label_3503c0:
    // 0x3503c0: 0xc0d3b30  jal         func_34ECC0
    ctx->pc = 0x3503C0u;
    SET_GPR_U32(ctx, 31, 0x3503C8u);
    ctx->pc = 0x3503C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3503C0u;
    // 0x3503c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ECC0u, 0x3503C0u, 0x3503C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3503C8u;
label_3503c8:
    // 0x3503c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3503c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3503cc: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x3503CCu;
    SET_GPR_U32(ctx, 31, 0x3503D4u);
    ctx->pc = 0x3503D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3503CCu;
    // 0x3503d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x3503CCu, 0x3503D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3503D4u;
label_3503d4:
    // 0x3503d4: 0xc0d3af0  jal         func_34EBC0
    ctx->pc = 0x3503D4u;
    SET_GPR_U32(ctx, 31, 0x3503DCu);
    ctx->pc = 0x3503D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3503D4u;
    // 0x3503d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EBC0u, 0x3503D4u, 0x3503DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3503DCu;
label_3503dc:
    // 0x3503dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3503dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3503e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3503e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3503e4: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x3503E4u;
    SET_GPR_U32(ctx, 31, 0x3503ECu);
    ctx->pc = 0x3503E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3503E4u;
    // 0x3503e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x3503E4u, 0x3503ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3503ECu;
label_3503ec:
    // 0x3503ec: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3503ECu;
    {
        const bool branch_taken_0x3503ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3503ec) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3503F4u;
    // 0x3503f4: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x3503f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x3503f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3503f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3503fc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3503FCu;
    {
        const bool branch_taken_0x3503fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503FCu;
        // 0x350400: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3503fc) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350404u;
    // 0x350404: 0x0  nop
    ctx->pc = 0x350404u;
    // NOP
label_350408:
    // 0x350408: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x350408u;
    {
        const bool branch_taken_0x350408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350408u;
        // 0x35040c: 0xa2240029  sb          $a0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350408) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350410u;
label_350410:
    // 0x350410: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x350410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x350414: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x350414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x350418: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x350418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35041c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350420: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x350420u;
    SET_GPR_U32(ctx, 31, 0x350428u);
    ctx->pc = 0x350424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350420u;
    // 0x350424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x350420u, 0x350428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350428u;
label_350428:
    // 0x350428: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x350428u;
    {
        const bool branch_taken_0x350428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350428) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350430u;
    // 0x350430: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x350430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x350434: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x350434u;
    {
        const bool branch_taken_0x350434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350434u;
        // 0x350438: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350434) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x35043Cu;
    // 0x35043c: 0x0  nop
    ctx->pc = 0x35043cu;
    // NOP
label_350440:
    // 0x350440: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x350440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x350444: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x350444u;
    SET_GPR_U32(ctx, 31, 0x35044Cu);
    ctx->pc = 0x350448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350444u;
    // 0x350448: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x350444u, 0x35044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35044Cu;
label_35044c:
    // 0x35044c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x35044Cu;
    {
        const bool branch_taken_0x35044c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35044c) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350454u;
    // 0x350454: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x350454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x350458: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x350458u;
    {
        const bool branch_taken_0x350458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350458u;
        // 0x35045c: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350458) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350460u;
label_350460:
    // 0x350460: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350460u;
    {
        const bool branch_taken_0x350460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x350464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350460u;
        // 0x350464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350460) {
            ctx->pc = 0x350470u;
            goto label_350470;
        }
    }
    ctx->pc = 0x350468u;
    // 0x350468: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x350468u;
    SET_GPR_U32(ctx, 31, 0x350470u);
    ctx->pc = 0x35046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350468u;
    // 0x35046c: 0x2405155a  addiu       $a1, $zero, 0x155A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5466));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x350468u, 0x350470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350470u;
label_350470:
    // 0x350470: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x350470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x350474: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x350474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x350478: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x350478u;
    SET_GPR_U32(ctx, 31, 0x350480u);
    ctx->pc = 0x35047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350478u;
    // 0x35047c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x350478u, 0x350480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350480u;
label_350480:
    // 0x350480: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x350480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x350484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350488: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x350488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x35048c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x350490: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x350490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x350494: 0x24427d00  addiu       $v0, $v0, 0x7D00
    ctx->pc = 0x350494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32000));
    // 0x350498: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x350498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35049c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3504a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3504a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3504a4: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x3504A4u;
    SET_GPR_U32(ctx, 31, 0x3504ACu);
    ctx->pc = 0x3504A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3504A4u;
    // 0x3504a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x3504A4u, 0x3504ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3504ACu;
label_3504ac:
    // 0x3504ac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3504ACu;
    {
        const bool branch_taken_0x3504ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3504ac) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3504B4u;
    // 0x3504b4: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x3504b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x3504b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3504B8u;
    {
        const bool branch_taken_0x3504b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3504BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504B8u;
        // 0x3504bc: 0xa2220029  sb          $v0, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3504b8) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x3504C0u;
label_3504c0:
    // 0x3504c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3504c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3504c4: 0xc0d4318  jal         func_350C60
    ctx->pc = 0x3504C4u;
    SET_GPR_U32(ctx, 31, 0x3504CCu);
    ctx->pc = 0x3504C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3504C4u;
    // 0x3504c8: 0xa2200029  sb          $zero, 0x29($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C60u, 0x3504C4u, 0x3504CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3504CCu;
label_3504cc:
    // 0x3504cc: 0xc0d3a00  jal         func_34E800
    ctx->pc = 0x3504CCu;
    SET_GPR_U32(ctx, 31, 0x3504D4u);
    ctx->pc = 0x3504D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3504CCu;
    // 0x3504d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E800u, 0x3504CCu, 0x3504D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3504D4u;
label_3504d4:
    // 0x3504d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3504D4u;
    {
        const bool branch_taken_0x3504d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3504D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504D4u;
        // 0x3504d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3504d4) {
            ctx->pc = 0x350508u;
            goto label_350508;
        }
    }
    ctx->pc = 0x3504DCu;
    // 0x3504dc: 0x0  nop
    ctx->pc = 0x3504dcu;
    // NOP
label_3504e0:
    // 0x3504e0: 0xc0d3a54  jal         func_34E950
    ctx->pc = 0x3504E0u;
    SET_GPR_U32(ctx, 31, 0x3504E8u);
    ctx->pc = 0x3504E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3504E0u;
    // 0x3504e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E950u, 0x3504E0u, 0x3504E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3504E8u;
label_3504e8:
    // 0x3504e8: 0xc0d4318  jal         func_350C60
    ctx->pc = 0x3504E8u;
    SET_GPR_U32(ctx, 31, 0x3504F0u);
    ctx->pc = 0x3504ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3504E8u;
    // 0x3504ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C60u, 0x3504E8u, 0x3504F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3504F0u;
label_3504f0:
    // 0x3504f0: 0xa2200029  sb          $zero, 0x29($s1)
    ctx->pc = 0x3504f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x3504f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3504F4u;
    {
        const bool branch_taken_0x3504f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3504F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3504F4u;
        // 0x3504f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3504f4) {
            ctx->pc = 0x350508u;
            goto label_350508;
        }
    }
    ctx->pc = 0x3504FCu;
    // 0x3504fc: 0x0  nop
    ctx->pc = 0x3504fcu;
    // NOP
label_350500:
    // 0x350500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350504: 0x0  nop
    ctx->pc = 0x350504u;
    // NOP
label_350508:
    // 0x350508: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35050c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35050cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350514: 0x3e00008  jr          $ra
    ctx->pc = 0x350514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350514u;
        // 0x350518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35051Cu;
}
